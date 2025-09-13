/* sceDNAS2_*/
#define sceDNAS2_SS_SERVER_BUSY        -101 /* サーバが処理を受け付けない */
#define sceDNAS2_SS_BEFORE_SERVICE     -102 /* タイトルの認証サービス開始前 */
#define sceDNAS2_SS_OUT_OF_SERVICE     -103 /* タイトルの認証サービス終了後 */
#define sceDNAS2_SS_END_OF_SERVICE     -104 /* DNASサーバのサービス終了 */
#define sceDNAS2_SS_SESSION_TIME_OUT   -105 /* セッションタイムアウト */
#define sceDNAS2_SS_INVALID_SERVER     -106 /* 不正なサーバと接続している */
#define sceDNAS2_SS_INTERNAL_ERROR     -107 /* DNASライブラリ内部でのエラー */
#define sceDNAS2_SS_EXTERNAL_ERROR     -108 /* その他DNASサーバ側でのエラー */

#define sceDNAS2_SS_DL_NODATA          -201 /* ダウンロードするデータが無い */
#define sceDNAS2_SS_DL_BEFORE_SERVICE  -202 /* データ交換サービス開始前 */
#define sceDNAS2_SS_DL_OUT_OF_SERVICE  -203 /* データ交換サービス終了後 */
#define sceDNAS2_SS_DL_NOT_UPDATED     -204 /* 新しいデータが無い */

#define sceDNAS2_SS_INVALID_PS2         -401 /* PS2の機器情報にアクセス失敗 */
#define sceDNAS2_SS_INVALID_MEDIA       -402 /* メディアアクセスに失敗 */
#define sceDNAS2_SS_INVALID_AUTHDATA    -403 /* auth_dataが異常 */
#define sceDNAS2_SS_INVALID_HDD_BINDING -404 /* HDDにbindされたPS2ではない */

#define sceDNAS2_SS_MISMATCH_AUTHDATA -501 /* DNASサーバとの間でauth_dataが不整合 */

#define sceDNAS2_ERR_GLUE_ABORT                      -601
#define sceDNAS2_ERR_NET_PROXY                       -602 /* Proxy error */
#define sceDNAS2_ERR_NET_TIMEOUT                     -603 /* Timeout set in sceDNAS2Init occurred */
#define sceDNAS2_ERR_NET_SSL                         -610 /* SSL error */
#define sceDNAS2_ERR_NET_DNS_HOST_NOT_FOUND          -611 /* unknown hostname */
#define sceDNAS2_ERR_NET_DNS_TRY_AGAIN               -612 /* cannot find DNS server */
#define sceDNAS2_ERR_NET_DNS_NO_RECOVERY             -613 /* invalid DNS response */
#define sceDNAS2_ERR_NET_DNS_NO_DATA                 -614 /* there is no address corresponding to the hostname */
#define sceDNAS2_ERR_NET_DNS_OTHERS                  -615
#define sceDNAS2_ERR_NET_EISCONN                     -616 /* already connected */
#define sceDNAS2_ERR_NET_ETIMEOUT                    -617 /* timeout */
#define sceDNAS2_ERR_NET_ECONNREFUSED                -618 /* connection refused */
#define sceDNAS2_ERR_NET_ENETUNREACH                 -619 /* target is unreachable */
#define sceDNAS2_ERR_NET_ENOTCONN                    -620 /* socket is not connected */
#define sceDNAS2_ERR_NET_ENOBUFS                     -621 /* not enough memory */
#define sceDNAS2_ERR_NET_EMFILE                      -622 /* there is no available socket */
#define sceDNAS2_ERR_NET_EBADF                       -623 /* bad socket descriptor */
#define sceDNAS2_ERR_NET_EINVAL                      -624 /* invalid argument */
#define sceDNAS2_ERR_NET_OTHERS                      -625
#define sceDNAS2_ERR_NET_ECONNRESET                  -626 /* connection reseted. */

#define sceDNAS2_SS_ID_NOUSE           -701 /* ID発行サービス登録していない */
#define sceDNAS2_SS_ID_NOT_JOIN_TO_CAT -703 /* タイトルがカテゴリに参加していない */