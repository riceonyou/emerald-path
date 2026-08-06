import threading
import time
import webbrowser
from http.server import ThreadingHTTPServer

import server


def main() -> None:
    server.AUTO_EXIT_ENABLED = True
    server.AUTO_EXIT_IDLE_SECONDS = 20
    server.note_client_activity()

    httpd = ThreadingHTTPServer((server.HOST, server.PORT), server.SpeciesEditorHandler)
    server.start_auto_shutdown_watcher(httpd)
    worker = threading.Thread(target=httpd.serve_forever, daemon=True)
    worker.start()

    webbrowser.open(f"http://{server.HOST}:{server.PORT}")

    try:
        while worker.is_alive():
            time.sleep(0.25)
    except KeyboardInterrupt:
        pass
    finally:
        httpd.shutdown()
        httpd.server_close()


if __name__ == "__main__":
    main()
