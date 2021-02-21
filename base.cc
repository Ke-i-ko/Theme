@import url("https://discord-custom-covers.github.io/usrbg/dist/usrbg.css");
:root {
  --slate-version: "Slate 1.2";
  --slate-palette: "Primer";
  --border-radius: 3px;
  --button-border-radius: 2px;
  --avatar-radius: calc(var(--border-radius) / 2);
  --server-radius: var(--border-radius);
  --accent-solid: rgba(var(--accent), 1);
  --bd-blue: var(--accent-solid);
  --bd-blue-hover: var(--accent-solid);
  --noasw-padding: calc(var(--container, 0) - 4px);
  --noasw-base: var(--container, 72px);
  --noasw-channel-header: var(--container, 0px);
  --spacing-third: calc(var(--spacing) / 3);
  --spacing-half: calc(var(--spacing) / 2);
  --spacing: 10px;
  --spacing-double: calc(var(--spacing) * 2);
  --spacing-triple: calc(var(--spacing) * 3);
  --font-family-sans-serif: -apple-system, BlinkMacSystemFont, "Segoe UI", "Roboto", "Oxygen", "Ubuntu", "Cantarell", "Fira Sans", "Droid Sans", "Helvetica Neue", Arial, sans-serif;
  --font-family-monospace: Menlo, Monaco, Consolas, "Liberation Mono", "Courier New", monospace;
  --font-size-xsm:9px;
  --font-size-sm: 11px;
  --font-size: 12px;
  --font-size-md: 14px;
  --font-size-lg: 28px;
  --font-size-xl: 32px;
  --font-size-xxl: 42px;
  --line-height-sm: 1;
  --line-height: 1.5;
  --font-weight-light: 300;
  --font-weight-normal: 400;
  --font-weight-semibold: 600;
  --font-weight-bold: 700;
  --titlebar-height: 28px;
  --win32-close-background-hover:#e81123;
  --win32-close-background-active:#bf0f1d;
  --toolbar-height: 50px;
  --toolbar-text-normal: #d1d5da;
  --toolbar-text-muted: #959da5;
  --toolbar-text-focus: #ffffff;
  --toolbar-search-background: #161a1d;
  --toolbar-search-border: var(--toolbar-border);
  --toolbar-background: #1d2125;
  --toolbar-background-hover: #2f363d;
  --toolbar-background-active:#444d56;
  --toolbar-background-alt: #24292e;
  --toolbar-border: #141414;
  --input-height: 25px;
  --item-height: 34px;
  --sidebar-width: 260px;
  --member-height: 42px;
  --channel-height: 32px;
  --avatar-size-xsm:18px;
  --avatar-size-sm: 24px;
  --avatar-size: 28px;
  --avatar-size-lg: 45px;
  --avatar-size-xl: 64px;
  --backdrop: rgb(0 0 0 / 0.4);
  --elevation-1: 0 8px 24px rgba(0,0,0,0.15);
  --elevation-2: 0 2px 7px rgba(0,0,0,0.5);
  --status-green: 40, 167, 69;
  --status-yellow: 219, 171, 9;
  --status-red: 215, 58, 73;
  --status-purple: 89, 54, 149;
  --status-grey: 117, 128, 142;
  --discord-pink: 255, 115, 250;
  --rs-small-spacing: 0px;
  --rs-large-spacing: 0px;
  --rs-width: 2px;
  --rs-avatar-shape: var(--avatar-radius);
  --cursor: default;
}

.theme-dark,
html.theme-dark #app-mount .theme-light .root-1gCeng,
html.theme-dark .force-theme.theme-light {
  --base-border: #141414;
  --text-normal: #d1d5da;
  --text-muted: #959da5;
  --text-focus: #ffffff;
  --text-link: rgb(var(--link-colour));
  --background-light: #2f363d;
  --background: #24292e;
  --background-alt: #2a3036;
  --background-dark: #1d2125;
  --guilds-background:var(--background);
  --white:#ffffff;
  --scrollbar-background: rgb(255 255 255 / 0.1);
  --scrollbar-background-hover: rgb(255 255 255 / 0.2);
  --scrollbar-background-active: rgb(255 255 255 / 0.3);
  --background-modifier-hover: var(--background-light);
  --background-modifier-active: #444d56;
  --background-modifier-selected: var(--accent-solid);
  --syntax-blue:#79b8ff;
  --syntax-purple:#b392f0;
  --syntax-grey:#959da5;
  --syntax-grey-alt:#d1d5da;
  --syntax-orange:#ffab70;
  --syntax-green:#56b6c2;
}

.theme-light,
html.theme-light #app-mount .theme-light .root-1gCeng,
html.theme-light .force-theme.theme-light {
  --base-border: #e1e4e8;
  --secondary-border:#d1d5da;
  --text-normal: #24292e;
  --text-muted: #6a737d;
  --text-focus: #000000;
  --text-link: rgb(var(--link-colour));
  --background-light: #f6f8fa;
  --background-alt: #ffffff;
  --background:#ffffff;
  --background-dark: #ebeef1;
  --guilds-background:var(--background);
  --white: #ffffff;
  --scrollbar-background: rgb(0 0 0 / 0.3);
  --scrollbar-background-hover: rgb(0 0 0 / 0.4);
  --scrollbar-background-active: rgb(0 0 0 / 0.5);
  --background-modifier-hover: #f2f2f2;
  --background-modifier-active: #e5e5e5;
  --background-modifier-selected: var(--accent-solid);
  --syntax-blue:#79b8ff;
  --syntax-purple:#b392f0;
  --syntax-grey:#6a737d;
  --syntax-grey-alt:#24292e;
  --syntax-orange:#ffab70;
  --syntax-green:#56b6c2;
}

::-webkit-input-placeholder {
  -webkit-user-select: none;
          user-select: none;
}

html {
  line-height: var(--line-height);
}

.app-2rEoOp,
.bg-h5JY_x {
  background: var(--background);
  transform: none !important;
  top: 0 !important;
}

body {
  background: var(--background);
}

#app-mount {
  background: var(--background);
}
#app-mount .base-3dtUhz {
  border-radius: 0;
  left: var(--noasw-base);
  overflow: visible !important;
}
#app-mount .layers-3iHuyZ {
  z-index: 11;
  overflow: visible;
}
#app-mount .layer-3QrUeG {
  opacity: 1 !important;
  transform: none !important;
  top: 0;
  padding-top: 0;
}
#app-mount .layer-3QrUeG.animating-rRxada {
  pointer-events: all;
  will-change: unset;
}
#app-mount .layer-3QrUeG.animating-rRxada * {
  pointer-events: all !important;
}
#app-mount .layer-3QrUeG.baseLayer-35bLyl {
  z-index: 1;
}
#app-mount .mention {
  background: rgba(var(--accent), 0.15);
  border-radius: var(--border-radius);
  color: var(--accent-solid);
  cursor: var(--cursor);
}
#app-mount .mention:hover {
  background: var(--accent-solid);
  color: var(--white);
}
#app-mount .content-yTz4x3:before {
  content: none;
}

::selection {
  background: var(--accent-solid);
  color: #fff;
}

::-webkit-input-placeholder, body, button, input, select, textarea {
  font-family: var(--font-family-sans-serif);
}

h1, h2, h3, h4, h5, h6, p {
  -webkit-user-select: text;
          user-select: text;
}

.h5-18_1nd {
  color: var(--text-normal);
  text-transform: none;
  font-weight: var(--font-weight-normal);
  cursor: text;
  font-size: var(--font-size);
}

.errorMessage-3Guw2R {
  color: rgb(var(--status-red));
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}

.colorStatusRed-1YV2rj {
  color: rgb(var(--status-red));
}

.colorStandard-2KCXvj {
  color: var(--text-normal);
}

strong {
  font-weight: var(--font-weight-bold);
}

.size12-3cLvbJ {
  font-size: var(--font-size);
}

a {
  cursor: var(--cursor);
  color: var(--text-link);
}

.socialLink-3n2n25 {
  color: var(--text-muted);
  margin-right: var(--spacing);
}
.socialLink-3n2n25 svg {
  width: 14px;
  height: 14px;
}

.oldTitleBarEnabled-D8ppJQ {
  --titlebar-height:0px;
}

#app-mount .typeWindows-1za-n7 {
  height: calc(var(--titlebar-height) - 2px);
  margin-top: 2px;
  position: relative;
  width: 100vw;
  z-index: 10;
  box-sizing: border-box;
}
#app-mount .typeWindows-1za-n7 .wordmarkWindows-1v0lYD {
  padding: 0 var(--spacing-half);
  display: flex;
  align-items: center;
  justify-content: center;
  height: var(--titlebar-height);
  margin-top: -3px;
}
#app-mount .typeWindows-1za-n7 .wordmarkWindows-1v0lYD svg {
  display: none;
}
#app-mount .typeWindows-1za-n7 .wordmarkWindows-1v0lYD:before {
  content: "";
  width: var(--titlebar-height);
  height: var(--titlebar-height);
  position: relative;
  -webkit-mask: url("data:image/svg+xml;base64,PHN2ZyBpZD0iTGF5ZXJfMSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMjQ1IDI0MCI+PHN0eWxlPi5zdDB7ZmlsbDojRkZGRkZGO308L3N0eWxlPjxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0xMDQuNCAxMDMuOWMtNS43IDAtMTAuMiA1LTEwLjIgMTEuMXM0LjYgMTEuMSAxMC4yIDExLjFjNS43IDAgMTAuMi01IDEwLjItMTEuMS4xLTYuMS00LjUtMTEuMS0xMC4yLTExLjF6TTE0MC45IDEwMy45Yy01LjcgMC0xMC4yIDUtMTAuMiAxMS4xczQuNiAxMS4xIDEwLjIgMTEuMWM1LjcgMCAxMC4yLTUgMTAuMi0xMS4xcy00LjUtMTEuMS0xMC4yLTExLjF6Ii8+PHBhdGggY2xhc3M9InN0MCIgZD0iTTE4OS41IDIwaC0xMzRDNDQuMiAyMCAzNSAyOS4yIDM1IDQwLjZ2MTM1LjJjMCAxMS40IDkuMiAyMC42IDIwLjUgMjAuNmgxMTMuNGwtNS4zLTE4LjUgMTIuOCAxMS45IDEyLjEgMTEuMiAyMS41IDE5VjQwLjZjMC0xMS40LTkuMi0yMC42LTIwLjUtMjAuNnptLTM4LjYgMTMwLjZzLTMuNi00LjMtNi42LTguMWMxMy4xLTMuNyAxOC4xLTExLjkgMTguMS0xMS45LTQuMSAyLjctOCA0LjYtMTEuNSA1LjktNSAyLjEtOS44IDMuNS0xNC41IDQuMy05LjYgMS44LTE4LjQgMS4zLTI1LjktLjEtNS43LTEuMS0xMC42LTIuNy0xNC43LTQuMy0yLjMtLjktNC44LTItNy4zLTMuNC0uMy0uMi0uNi0uMy0uOS0uNS0uMi0uMS0uMy0uMi0uNC0uMy0xLjgtMS0yLjgtMS43LTIuOC0xLjdzNC44IDggMTcuNSAxMS44Yy0zIDMuOC02LjcgOC4zLTYuNyA4LjMtMjIuMS0uNy0zMC41LTE1LjItMzAuNS0xNS4yIDAtMzIuMiAxNC40LTU4LjMgMTQuNC01OC4zIDE0LjQtMTAuOCAyOC4xLTEwLjUgMjguMS0xMC41bDEgMS4yYy0xOCA1LjItMjYuMyAxMy4xLTI2LjMgMTMuMXMyLjItMS4yIDUuOS0yLjljMTAuNy00LjcgMTkuMi02IDIyLjctNi4zLjYtLjEgMS4xLS4yIDEuNy0uMiA2LjEtLjggMTMtMSAyMC4yLS4yIDkuNSAxLjEgMTkuNyAzLjkgMzAuMSA5LjYgMCAwLTcuOS03LjUtMjQuOS0xMi43bDEuNC0xLjZzMTMuNy0uMyAyOC4xIDEwLjVjMCAwIDE0LjQgMjYuMSAxNC40IDU4LjMgMCAwLTguNSAxNC41LTMwLjYgMTUuMnoiLz48L3N2Zz4=") center/18px no-repeat;
          mask: url("data:image/svg+xml;base64,PHN2ZyBpZD0iTGF5ZXJfMSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMjQ1IDI0MCI+PHN0eWxlPi5zdDB7ZmlsbDojRkZGRkZGO308L3N0eWxlPjxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0xMDQuNCAxMDMuOWMtNS43IDAtMTAuMiA1LTEwLjIgMTEuMXM0LjYgMTEuMSAxMC4yIDExLjFjNS43IDAgMTAuMi01IDEwLjItMTEuMS4xLTYuMS00LjUtMTEuMS0xMC4yLTExLjF6TTE0MC45IDEwMy45Yy01LjcgMC0xMC4yIDUtMTAuMiAxMS4xczQuNiAxMS4xIDEwLjIgMTEuMWM1LjcgMCAxMC4yLTUgMTAuMi0xMS4xcy00LjUtMTEuMS0xMC4yLTExLjF6Ii8+PHBhdGggY2xhc3M9InN0MCIgZD0iTTE4OS41IDIwaC0xMzRDNDQuMiAyMCAzNSAyOS4yIDM1IDQwLjZ2MTM1LjJjMCAxMS40IDkuMiAyMC42IDIwLjUgMjAuNmgxMTMuNGwtNS4zLTE4LjUgMTIuOCAxMS45IDEyLjEgMTEuMiAyMS41IDE5VjQwLjZjMC0xMS40LTkuMi0yMC42LTIwLjUtMjAuNnptLTM4LjYgMTMwLjZzLTMuNi00LjMtNi42LTguMWMxMy4xLTMuNyAxOC4xLTExLjkgMTguMS0xMS45LTQuMSAyLjctOCA0LjYtMTEuNSA1LjktNSAyLjEtOS44IDMuNS0xNC41IDQuMy05LjYgMS44LTE4LjQgMS4zLTI1LjktLjEtNS43LTEuMS0xMC42LTIuNy0xNC43LTQuMy0yLjMtLjktNC44LTItNy4zLTMuNC0uMy0uMi0uNi0uMy0uOS0uNS0uMi0uMS0uMy0uMi0uNC0uMy0xLjgtMS0yLjgtMS43LTIuOC0xLjdzNC44IDggMTcuNSAxMS44Yy0zIDMuOC02LjcgOC4zLTYuNyA4LjMtMjIuMS0uNy0zMC41LTE1LjItMzAuNS0xNS4yIDAtMzIuMiAxNC40LTU4LjMgMTQuNC01OC4zIDE0LjQtMTAuOCAyOC4xLTEwLjUgMjguMS0xMC41bDEgMS4yYy0xOCA1LjItMjYuMyAxMy4xLTI2LjMgMTMuMXMyLjItMS4yIDUuOS0yLjljMTAuNy00LjcgMTkuMi02IDIyLjctNi4zLjYtLjEgMS4xLS4yIDEuNy0uMiA2LjEtLjggMTMtMSAyMC4yLS4yIDkuNSAxLjEgMTkuNyAzLjkgMzAuMSA5LjYgMCAwLTcuOS03LjUtMjQuOS0xMi43bDEuNC0xLjZzMTMuNy0uMyAyOC4xIDEwLjVjMCAwIDE0LjQgMjYuMSAxNC40IDU4LjMgMCAwLTguNSAxNC41LTMwLjYgMTUuMnoiLz48L3N2Zz4=") center/18px no-repeat;
  top: 0;
  background: var(--toolbar-text-muted);
  -webkit-app-region: drag;
}
#app-mount .typeWindows-1za-n7 .wordmarkWindows-1v0lYD:after {
  content: "";
  position: fixed;
  top: 0;
  left: 0;
  width: 100vw;
  height: var(--titlebar-height);
  background: var(--toolbar-background-alt);
  border-bottom: 1px solid var(--toolbar-border);
  box-sizing: border-box;
  z-index: -1;
}
#app-mount .typeWindows-1za-n7 .winButton-iRh8-Z {
  height: calc(var(--titlebar-height) - 1px);
  width: 45px;
  color: var(--toolbar-text-muted);
  top: -2px;
  cursor: var(--cursor);
}
#app-mount .typeWindows-1za-n7 .winButton-iRh8-Z:hover {
  background: var(--toolbar-background-hover);
  color: var(--white);
}
#app-mount .typeWindows-1za-n7 .winButton-iRh8-Z:active {
  background: var(--toolbar-background-active);
  color: var(--white);
}
#app-mount .typeWindows-1za-n7 .winButtonMinMax-PBQ2gm:nth-child(3) svg {
  display: none;
}
#app-mount .typeWindows-1za-n7 .winButtonMinMax-PBQ2gm:nth-child(3):after {
  content: "";
  width: 10px;
  height: 10px;
  box-sizing: border-box;
  box-shadow: inset 0 0 0 1px var(--toolbar-text-muted);
  pointer-events: none;
}
#app-mount .typeWindows-1za-n7 .winButtonMinMax-PBQ2gm:nth-child(3):active:after, #app-mount .typeWindows-1za-n7 .winButtonMinMax-PBQ2gm:nth-child(3):hover:after {
  box-shadow: inset 0 0 0 1px var(--toolbar-text-normal);
}
#app-mount .typeWindows-1za-n7 .winButtonClose-1HsbF- path {
  d: path("M 0,0 0,0.7 4.3,5 0,9.3 0,10 0.7,10 5,5.7 9.3,10 10,10 10,9.3 5.7,5 10,0.7 10,0 9.3,0 5,4.3 0.7,0 Z");
}
#app-mount .typeWindows-1za-n7 .winButtonClose-1HsbF-:hover {
  background: var(--win32-close-background-hover);
}
#app-mount .typeWindows-1za-n7 .winButtonClose-1HsbF-:active {
  background: var(--win32-close-background-active);
}

.typeMacOS-3EmCyP {
  position: relative;
  z-index: 3001;
  width: 100%;
  height: var(--titlebar-height);
  padding: 0 var(--spacing-half);
  background: var(--toolbar-background-alt);
  border-bottom: 1px solid var(--toolbar-border);
  display: flex;
  justify-content: center;
}
.typeMacOS-3EmCyP .macButtons-2MuSAC {
  padding: 0 var(--spacing-half);
  height: 100%;
  position: absolute;
  left: var(--spacing-half);
}
.typeMacOS-3EmCyP:after {
  content: "";
  width: var(--titlebar-height);
  height: var(--titlebar-height);
  position: relative;
  display: block;
  -webkit-mask: url("data:image/svg+xml;base64,PHN2ZyBpZD0iTGF5ZXJfMSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMjQ1IDI0MCI+PHN0eWxlPi5zdDB7ZmlsbDojRkZGRkZGO308L3N0eWxlPjxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0xMDQuNCAxMDMuOWMtNS43IDAtMTAuMiA1LTEwLjIgMTEuMXM0LjYgMTEuMSAxMC4yIDExLjFjNS43IDAgMTAuMi01IDEwLjItMTEuMS4xLTYuMS00LjUtMTEuMS0xMC4yLTExLjF6TTE0MC45IDEwMy45Yy01LjcgMC0xMC4yIDUtMTAuMiAxMS4xczQuNiAxMS4xIDEwLjIgMTEuMWM1LjcgMCAxMC4yLTUgMTAuMi0xMS4xcy00LjUtMTEuMS0xMC4yLTExLjF6Ii8+PHBhdGggY2xhc3M9InN0MCIgZD0iTTE4OS41IDIwaC0xMzRDNDQuMiAyMCAzNSAyOS4yIDM1IDQwLjZ2MTM1LjJjMCAxMS40IDkuMiAyMC42IDIwLjUgMjAuNmgxMTMuNGwtNS4zLTE4LjUgMTIuOCAxMS45IDEyLjEgMTEuMiAyMS41IDE5VjQwLjZjMC0xMS40LTkuMi0yMC42LTIwLjUtMjAuNnptLTM4LjYgMTMwLjZzLTMuNi00LjMtNi42LTguMWMxMy4xLTMuNyAxOC4xLTExLjkgMTguMS0xMS45LTQuMSAyLjctOCA0LjYtMTEuNSA1LjktNSAyLjEtOS44IDMuNS0xNC41IDQuMy05LjYgMS44LTE4LjQgMS4zLTI1LjktLjEtNS43LTEuMS0xMC42LTIuNy0xNC43LTQuMy0yLjMtLjktNC44LTItNy4zLTMuNC0uMy0uMi0uNi0uMy0uOS0uNS0uMi0uMS0uMy0uMi0uNC0uMy0xLjgtMS0yLjgtMS43LTIuOC0xLjdzNC44IDggMTcuNSAxMS44Yy0zIDMuOC02LjcgOC4zLTYuNyA4LjMtMjIuMS0uNy0zMC41LTE1LjItMzAuNS0xNS4yIDAtMzIuMiAxNC40LTU4LjMgMTQuNC01OC4zIDE0LjQtMTAuOCAyOC4xLTEwLjUgMjguMS0xMC41bDEgMS4yYy0xOCA1LjItMjYuMyAxMy4xLTI2LjMgMTMuMXMyLjItMS4yIDUuOS0yLjljMTAuNy00LjcgMTkuMi02IDIyLjctNi4zLjYtLjEgMS4xLS4yIDEuNy0uMiA2LjEtLjggMTMtMSAyMC4yLS4yIDkuNSAxLjEgMTkuNyAzLjkgMzAuMSA5LjYgMCAwLTcuOS03LjUtMjQuOS0xMi43bDEuNC0xLjZzMTMuNy0uMyAyOC4xIDEwLjVjMCAwIDE0LjQgMjYuMSAxNC40IDU4LjMgMCAwLTguNSAxNC41LTMwLjYgMTUuMnoiLz48L3N2Zz4=") center/18px no-repeat;
          mask: url("data:image/svg+xml;base64,PHN2ZyBpZD0iTGF5ZXJfMSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMjQ1IDI0MCI+PHN0eWxlPi5zdDB7ZmlsbDojRkZGRkZGO308L3N0eWxlPjxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0xMDQuNCAxMDMuOWMtNS43IDAtMTAuMiA1LTEwLjIgMTEuMXM0LjYgMTEuMSAxMC4yIDExLjFjNS43IDAgMTAuMi01IDEwLjItMTEuMS4xLTYuMS00LjUtMTEuMS0xMC4yLTExLjF6TTE0MC45IDEwMy45Yy01LjcgMC0xMC4yIDUtMTAuMiAxMS4xczQuNiAxMS4xIDEwLjIgMTEuMWM1LjcgMCAxMC4yLTUgMTAuMi0xMS4xcy00LjUtMTEuMS0xMC4yLTExLjF6Ii8+PHBhdGggY2xhc3M9InN0MCIgZD0iTTE4OS41IDIwaC0xMzRDNDQuMiAyMCAzNSAyOS4yIDM1IDQwLjZ2MTM1LjJjMCAxMS40IDkuMiAyMC42IDIwLjUgMjAuNmgxMTMuNGwtNS4zLTE4LjUgMTIuOCAxMS45IDEyLjEgMTEuMiAyMS41IDE5VjQwLjZjMC0xMS40LTkuMi0yMC42LTIwLjUtMjAuNnptLTM4LjYgMTMwLjZzLTMuNi00LjMtNi42LTguMWMxMy4xLTMuNyAxOC4xLTExLjkgMTguMS0xMS45LTQuMSAyLjctOCA0LjYtMTEuNSA1LjktNSAyLjEtOS44IDMuNS0xNC41IDQuMy05LjYgMS44LTE4LjQgMS4zLTI1LjktLjEtNS43LTEuMS0xMC42LTIuNy0xNC43LTQuMy0yLjMtLjktNC44LTItNy4zLTMuNC0uMy0uMi0uNi0uMy0uOS0uNS0uMi0uMS0uMy0uMi0uNC0uMy0xLjgtMS0yLjgtMS43LTIuOC0xLjdzNC44IDggMTcuNSAxMS44Yy0zIDMuOC02LjcgOC4zLTYuNyA4LjMtMjIuMS0uNy0zMC41LTE1LjItMzAuNS0xNS4yIDAtMzIuMiAxNC40LTU4LjMgMTQuNC01OC4zIDE0LjQtMTAuOCAyOC4xLTEwLjUgMjguMS0xMC41bDEgMS4yYy0xOCA1LjItMjYuMyAxMy4xLTI2LjMgMTMuMXMyLjItMS4yIDUuOS0yLjljMTAuNy00LjcgMTkuMi02IDIyLjctNi4zLjYtLjEgMS4xLS4yIDEuNy0uMiA2LjEtLjggMTMtMSAyMC4yLS4yIDkuNSAxLjEgMTkuNyAzLjkgMzAuMSA5LjYgMCAwLTcuOS03LjUtMjQuOS0xMi43bDEuNC0xLjZzMTMuNy0uMyAyOC4xIDEwLjVjMCAwIDE0LjQgMjYuMSAxNC40IDU4LjMgMCAwLTguNSAxNC41LTMwLjYgMTUuMnoiLz48L3N2Zz4=") center/18px no-repeat;
  background: var(--text-muted);
}
.typeMacOS-3EmCyP.unfocused-1QsMU3 .macButtonClose-MwZ2nf, .typeMacOS-3EmCyP.unfocused-1QsMU3 .macButtonMaximize-2FMHAO, .typeMacOS-3EmCyP.unfocused-1QsMU3 .macButtonMinimize-3EJ6wo {
  background: var(--text-muted);
  opacity: 0.6;
}

html:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .wordmarkWindows-1v0lYD::before,
html:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .typeMacOS-3EmCyP:after,
html:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .winButton-iRh8-Z {
  opacity: 0.6;
}

body #app-mount .container-1r6BKw {
  background: var(--toolbar-background);
  height: var(--toolbar-height);
  border-bottom: 1px solid var(--toolbar-border);
  padding-left: 0;
  position: relative;
  overflow: visible;
}
body #app-mount .container-1r6BKw .children-19S4PO {
  flex: none;
  height: calc(var(--toolbar-height) - 1px);
  min-width: 230px;
  padding: var(--spacing);
  border-right: 1px solid var(--toolbar-border);
  position: relative;
  overflow: visible;
}
body #app-mount .container-1r6BKw .children-19S4PO .followButton-L6L-Us {
  margin: 0;
  margin-left: var(--spacing);
  border-color: var(--toolbar-border);
  background: var(--toolbar-background-hover);
  color: var(--toolbar-text-normal);
  z-index: 1;
}
body #app-mount .container-1r6BKw .children-19S4PO .followButton-L6L-Us:hover {
  background: var(--toolbar-background-hover) !important;
}
body #app-mount .container-1r6BKw .children-19S4PO .followButton-L6L-Us:focus {
  border-color: currentColor !important;
  box-shadow: 0 0 0 1px currentColor !important;
}
body #app-mount .container-1r6BKw .children-19S4PO .input-2A_zIr,
body #app-mount .container-1r6BKw .children-19S4PO .input-cIJ7To {
  background: var(--toolbar-background);
  border: 1px solid var(--toolbar-border) !important;
  color: var(--toolbar-text-normal);
}
body #app-mount .container-1r6BKw .children-19S4PO .input-2A_zIr:hover,
body #app-mount .container-1r6BKw .children-19S4PO .input-cIJ7To:hover {
  border: 1px solid var(--toolbar-background-hover) !important;
}
body #app-mount .container-1r6BKw .children-19S4PO .input-2A_zIr:focus,
body #app-mount .container-1r6BKw .children-19S4PO .input-cIJ7To:focus {
  border: 1px solid var(--accent-solid) !important;
  color: var(--toolbar-text-focus);
}
body #app-mount .container-1r6BKw .children-19S4PO .iconWrapper-2OrFZ1 {
  margin: 0 var(--spacing) 0 0;
}
body #app-mount .container-1r6BKw .children-19S4PO .iconWrapper-2OrFZ1 .icon-22AiRD {
  width: 16px;
  color: var(--toolbar-text-muted);
}
body #app-mount .container-1r6BKw .children-19S4PO .iconWrapper-2OrFZ1 .channelName-qsg_a_ {
  margin: 0;
}
body #app-mount .container-1r6BKw .children-19S4PO h3 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  display: flex;
  flex-direction: column;
  align-items: flex-start;
  color: var(--toolbar-text-normal);
  -webkit-user-select: none;
          user-select: none;
  line-height: normal;
  flex: 1;
}
body #app-mount .container-1r6BKw .children-19S4PO h3:before {
  display: block;
  content: "Current Channel";
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  color: var(--toolbar-text-muted);
}
body #app-mount .container-1r6BKw .children-19S4PO .akaBadge-1M-1Gw,
body #app-mount .container-1r6BKw .children-19S4PO .divider-3FBTu8 {
  display: none;
}
body #app-mount .container-1r6BKw .children-19S4PO .topic-TCb_qw {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
}
body #app-mount .container-1r6BKw .children-19S4PO .topic-TCb_qw a {
  display: none;
}
body #app-mount .container-1r6BKw .children-19S4PO .nicknames-1XK4Zt {
  position: absolute;
  left: var(--spacing);
  font-size: var(--font-size);
  color: var(--text-normal);
  background: var(--background);
  border-radius: var(--border-radius);
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  padding: var(--spacing-half) var(--spacing);
  bottom: -36px;
  margin: 0;
  border: 1px solid var(--base-border);
  box-sizing: border-box;
  box-shadow: var(--elevation-1);
  overflow: visible;
  max-height: 25px;
  display: flex;
  align-items: center;
  opacity: 0;
  pointer-events: none;
  transition: 100ms ease opacity;
}
body #app-mount .container-1r6BKw .children-19S4PO .nicknames-1XK4Zt:after {
  content: "";
  width: 10px;
  height: 10px;
  background: var(--background);
  box-sizing: border-box;
  position: absolute;
  top: -5px;
  left: 8px;
  transform: rotate(45deg);
  border-top: 1px solid var(--base-border);
  border-left: 1px solid var(--base-border);
  -webkit-clip-path: polygon(100% 0, 0% 100%, 0 0);
          clip-path: polygon(100% 0, 0% 100%, 0 0);
  box-shadow: var(--elevation-1);
}
body #app-mount .container-1r6BKw .children-19S4PO .status-1XNdyw {
  position: absolute;
  left: 0;
  padding: var(--spacing) var(--spacing-third);
  margin: 0 var(--spacing);
  box-sizing: border-box;
  background: var(--toolbar-background);
  pointer-events: none;
}
body #app-mount .container-1r6BKw .children-19S4PO:after {
  content: none;
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx {
  height: calc(var(--toolbar-height) - 1px);
  padding: 0;
  border-right: 1px solid var(--toolbar-border);
  background: var(--toolbar-background);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .iconWrapper-2OrFZ1 {
  margin: 0 var(--spacing);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .iconWrapper-2OrFZ1 .iconBadge-qZ4Ksk {
  background: rgb(var(--status-red));
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx a {
  display: none;
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD {
  color: var(--toolbar-text-normal);
  cursor: var(--cursor);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD:hover {
  color: var(--toolbar-text-focus);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M18 9V14C18 15.657 19.344 17 21 17V18H3V17C4.656 17 6 15.657 6 14V9C6 5.686 8.686 3 12 3C15.314 3 18 5.686 18 9ZM11.9999 21C10.5239 21 9.24793 20.19 8.55493 19H15.4449C14.7519 20.19 13.4759 21 11.9999 21Z"] {
  d: path("M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z");
  transform: scale(1.15) translateY(8%) translateX(8%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD .strikethrough-3Wiitd {
  color: rgb(var(--status-red));
  d: path("M14.822.854a.5.5 0 10-.707-.708l-2.11 2.11C10.89 1.483 9.565.926 8.06.926c-5.06 0-8.06 6-8.06 6s1.162 2.323 3.258 4.078l-2.064 2.065a.5.5 0 10.707.707L14.822.854zM4.86 9.403L6.292 7.97A1.999 1.999 0 016 6.925c0-1.11.89-2 2-2 .384 0 .741.106 1.045.292l1.433-1.433A3.98 3.98 0 008 2.925c-2.2 0-4 1.8-4 4 0 .938.321 1.798.859 2.478zm7.005-3.514l1.993-1.992A14.873 14.873 0 0116 6.925s-3 6-7.94 6a6.609 6.609 0 01-2.661-.57l1.565-1.566c.33.089.678.136 1.036.136 2.22 0 4-1.78 4-4 0-.358-.047-.705-.136-1.036zM9.338 8.415l.152-.151a1.996 1.996 0 01-.152.151z");
  fill-rule: evenodd;
  transform: scale(1.15) translateY(12%) translateX(12.5%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD .strikethrough-3Wiitd ~ path {
  display: none;
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M22 12L12.101 2.10101L10.686 3.51401L12.101 4.92901L7.15096 9.87801V9.88001L5.73596 8.46501L4.32196 9.88001L8.56496 14.122L2.90796 19.778L4.32196 21.192L9.97896 15.536L14.222 19.778L15.636 18.364L14.222 16.95L19.171 12H19.172L20.586 13.414L22 12Z"] {
  d: path("M10 1.2V2l.5 1L6 6H2.2c-.44 0-.67.53-.34.86L5 10l-4 5 5-4 3.14 3.14a.5.5 0 00.86-.34V10l3-4.5 1 .5h.8c.44 0 .67-.53.34-.86L10.86.86a.5.5 0 00-.86.34z");
  transform: scale(1.15) translateY(10%) translateX(12.5%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M14 8.00598C14 10.211 12.206 12.006 10 12.006C7.795 12.006 6 10.211 6 8.00598C6 5.80098 7.794 4.00598 10 4.00598C12.206 4.00598 14 5.80098 14 8.00598ZM2 19.006C2 15.473 5.29 13.006 10 13.006C14.711 13.006 18 15.473 18 19.006V20.006H2V19.006Z"] {
  d: path("M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088C9.196 9.369 10 8.999 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z");
  transform: scale(1.15) translateY(10%) translateX(10%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M14 8.00598C14 10.211 12.206 12.006 10 12.006C7.795 12.006 6 10.211 6 8.00598C6 5.80098 7.794 4.00598 10 4.00598C12.206 4.00598 14 5.80098 14 8.00598ZM2 19.006C2 15.473 5.29 13.006 10 13.006C14.711 13.006 18 15.473 18 19.006V20.006H2V19.006Z"] ~ path {
  display: none;
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M19 3H4.99C3.88 3 3.01 3.89 3.01 5L3 19C3 20.1 3.88 21 4.99 21H19C20.1 21 21 20.1 21 19V5C21 3.89 20.1 3 19 3ZM19 15H15C15 16.66 13.65 18 12 18C10.35 18 9 16.66 9 15H4.99V5H19V15Z"] {
  d: path("M14 9l-1.13-7.14c-.08-.48-.5-.86-1-.86H2.13c-.5 0-.92.38-1 .86L0 9v5c0 .55.45 1 1 1h12c.55 0 1-.45 1-1V9zm-3.28.55l-.44.89c-.17.34-.52.56-.91.56H4.61c-.38 0-.72-.22-.89-.55l-.44-.91c-.17-.33-.52-.55-.89-.55H1l1-7h10l1 7h-1.38c-.39 0-.73.22-.91.55l.01.01z");
  transform: scale(1.15) translateY(10%) translateX(14%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M21.526 8.149C21.231 7.966 20.862 7.951 20.553 8.105L18 9.382V7C18 5.897 17.103 5 16 5H4C2.897 5 2 5.897 2 7V17C2 18.104 2.897 19 4 19H16C17.103 19 18 18.104 18 17V14.618L20.553 15.894C20.694 15.965 20.847 16 21 16C21.183 16 21.365 15.949 21.526 15.851C21.82 15.668 22 15.347 22 15V9C22 8.653 21.82 8.332 21.526 8.149Z"] {
  d: path("M15.2 2.09L10 5.72V3c0-.55-.45-1-1-1H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h8c.55 0 1-.45 1-1V9.28l5.2 3.63c.33.23.8 0 .8-.41v-10c0-.41-.47-.64-.8-.41z");
  transform: scale(1.15) translateY(10%) translateX(12.5%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M11 5V3C16.515 3 21 7.486 21 13H19C19 8.589 15.411 5 11 5ZM17 13H15C15 10.795 13.206 9 11 9V7C14.309 7 17 9.691 17 13ZM11 11V13H13C13 11.896 12.105 11 11 11ZM14 16H18C18.553 16 19 16.447 19 17V21C19 21.553 18.553 22 18 22H13C6.925 22 2 17.075 2 11V6C2 5.447 2.448 5 3 5H7C7.553 5 8 5.447 8 6V10C8 10.553 7.553 11 7 11H6C6.063 14.938 9 18 13 18V17C13 16.447 13.447 16 14 16Z"] {
  d: path("M11 10c-1 1-1 2-2 2s-2-1-3-2-2-2-2-3 1-1 2-2-2-4-3-4-3 3-3 3c0 2 2.055 6.055 4 8s6 4 8 4c0 0 3-2 3-3s-3-4-4-3z");
  transform: scale(1.15) translateY(8%) translateX(12.5%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD path[d="M20.998 0V3H23.998V5H20.998V8H18.998V5H15.998V3H18.998V0H20.998ZM2.99805 20V24L8.33205 20H14.998C16.102 20 16.998 19.103 16.998 18V9C16.998 7.896 16.102 7 14.998 7H1.99805C0.894047 7 -0.00195312 7.896 -0.00195312 9V18C-0.00195312 19.103 0.894047 20 1.99805 20H2.99805Z"] {
  d: path("M6 11.5c0-2.363 1.498-4.383 3.594-5.159 0.254-0.571 0.406-1.206 0.406-1.841 0-2.485 0-4.5-3-4.5s-3 2.015-3 4.5c0 1.548 0.898 3.095 2 3.716v0.825c-3.392 0.277-6 1.944-6 3.959h6.208c-0.135-0.477-0.208-0.98-0.208-1.5z M11.5 7c-2.485 0-4.5 2.015-4.5 4.5s2.015 4.5 4.5 4.5c2.485 0 4.5-2.015 4.5-4.5s-2.015-4.5-4.5-4.5zM14 12h-2v2h-1v-2h-2v-1h2v-2h1v2h2v1z");
  transform: scale(1.15) translateY(16%) translateX(12.5%);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .icon-22AiRD .updateIconForeground-3tnNZn {
  transform: scale(1.15) translateY(10%) translateX(17%);
  d: path("M10.236 7.4a4.15 4.15 0 0 1-1.2 3.6 4.346 4.346 0 0 1-5.41.54l1.17-1.14-4.3-.6.6 4.2 1.31-1.26c2.36 1.74 5.7 1.57 7.84-.54a5.876 5.876 0 0 0 1.74-4.46l-1.75-.34zM2.956 5a4.346 4.346 0 0 1 5.41-.54L7.196 5.6l4.3.6-.6-4.2-1.31 1.26c-2.36-1.74-5.7-1.57-7.85.54-1.24 1.23-1.8 2.85-1.73 4.46l1.75.35A4.17 4.17 0 0 1 2.956 5z");
  fill: currentColor;
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .selected-1GqIat .icon-22AiRD {
  color: var(--toolbar-text-focus);
}
body #app-mount .container-1r6BKw .toolbar-1t6TWx .divider-3FBTu8 {
  display: none;
}
body #app-mount .container-1r6BKw .children-19S4PO path[d="M14 8.00598C14 10.211 12.206 12.006 10 12.006C7.795 12.006 6 10.211 6 8.00598C6 5.80098 7.794 4.00598 10 4.00598C12.206 4.00598 14 5.80098 14 8.00598ZM2 19.006C2 15.473 5.29 13.006 10 13.006C14.711 13.006 18 15.473 18 19.006V20.006H2V19.006Z"] {
  d: path("M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088C9.196 9.369 10 8.999 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z");
  transform: scale(1.15) translateY(10%);
}
body #app-mount .container-1r6BKw .children-19S4PO path[d="M14 8.00598C14 10.211 12.206 12.006 10 12.006C7.795 12.006 6 10.211 6 8.00598C6 5.80098 7.794 4.00598 10 4.00598C12.206 4.00598 14 5.80098 14 8.00598ZM2 19.006C2 15.473 5.29 13.006 10 13.006C14.711 13.006 18 15.473 18 19.006V20.006H2V19.006Z"] ~ path {
  display: none;
}
body #app-mount .container-1r6BKw .search-36MZv- {
  position: absolute;
  right: 0;
  margin: 0;
  padding: 0 var(--spacing);
  height: calc(var(--toolbar-height) - 1px);
  display: flex;
  align-items: center;
  background: var(--toolbar-background);
  z-index: 1;
}
body #app-mount .container-1r6BKw .search-36MZv- .focused-31_ccS .searchBar-3dMhjb {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb {
  border-radius: var(--border-radius);
  background: var(--toolbar-search-background);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  border: 1px solid var(--toolbar-search-border);
  color: var(--toolbar-text-normal);
  padding: 0 var(--spacing-half);
  height: var(--input-height);
  box-sizing: border-box;
  width: calc(var(--sidebar-width) / 1.35 - var(--spacing-double));
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .icon-38sknP {
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  order: -1;
  margin-right: var(--spacing-half);
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .icon-38sknP .iconContainer-O4O2CN {
  height: 14px;
  width: 14px;
  cursor: var(--cursor);
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .icon-38sknP .iconContainer-O4O2CN .icon-3cZ1F_ {
  color: var(--toolbar-text-muted);
  transition: none;
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .icon-38sknP .iconContainer-O4O2CN .icon-3cZ1F_ path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"] {
  d: path("M15.7 13.3l-3.81-3.83A5.93 5.93 0 0 0 13 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 0 0 0-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z");
  transform: scale(1.375) translateY(1px);
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .icon-38sknP .iconContainer-O4O2CN .icon-3cZ1F_ path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"] {
  d: path("M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z");
  transform: scale(1.375) translateY(1px) translateX(2.5px);
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .DraftEditor-root {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  padding: 0;
  height: 100%;
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .DraftEditor-root .public-DraftEditorPlaceholder-root {
  padding: 0;
  color: var(--toolbar-text-muted);
  line-height: normal;
  height: 100%;
  display: flex;
  align-items: center;
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .DraftEditor-root .DraftEditor-editorContainer {
  height: 100%;
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .DraftEditor-root .DraftEditor-editorContainer .public-DraftEditor-content {
  padding: 0;
  display: flex;
  align-items: center;
}
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .searchFilter-2ESiM3,
body #app-mount .container-1r6BKw .search-36MZv- .searchBar-3dMhjb .searchAnswer-3Dz2-q {
  margin: 0;
  border-radius: var(--button-border-radius);
  display: inline-flex;
  align-items: center;
  line-height: normal;
  background: var(--toolbar-background-active);
  margin-right: var(--spacing-third);
  font-size: var(--font-size-sm);
  color: var(--toolbar-text-normal);
}
body #app-mount .container-1r6BKw.title-3qD0b- .children-19S4PO:hover {
  background: var(--toolbar-background-hover);
}
body #app-mount .container-1r6BKw.title-3qD0b- .children-19S4PO:hover .title-29uC1r {
  color: var(--toolbar-text-focus);
}
body #app-mount .container-1r6BKw.title-3qD0b- .children-19S4PO:hover .status-1XNdyw {
  background: var(--toolbar-background-hover);
}
body #app-mount .container-1r6BKw.title-3qD0b- .children-19S4PO:hover .nicknames-1XK4Zt {
  opacity: 1;
}

html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1D34oG .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx {
  border: none !important;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1 {
  position: fixed;
  top: 0;
  -webkit-app-region: no-drag;
  height: calc(var(--titlebar-height) - 1px);
  width: auto;
  display: flex;
  align-items: center;
  justify-content: center;
  padding: 0 var(--spacing);
  margin: 0 !important;
  color: var(--toolbar-text-normal);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  cursor: default;
  overflow: hidden;
  text-overflow: ellipsis;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1::after {
  color: inherit;
  font-weight: inherit;
  font-size: inherit;
  white-space: nowrap;
  line-height: normal;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label=Inbox],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label=Inbox],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label=Inbox],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label=Inbox],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label=Inbox] {
  left: 38px;
  width: 50px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label=Inbox]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label=Inbox]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label=Inbox]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label=Inbox]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label=Inbox]::after {
  content: "Inbox";
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="Pinned Messages"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="Pinned Messages"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="Pinned Messages"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="Pinned Messages"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="Pinned Messages"] {
  left: 88px;
  width: 42px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="Pinned Messages"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="Pinned Messages"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="Pinned Messages"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="Pinned Messages"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="Pinned Messages"]::after {
  content: "Pins";
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="Pinned Messages"] .iconBadge-qZ4Ksk,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="Pinned Messages"] .iconBadge-qZ4Ksk,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="Pinned Messages"] .iconBadge-qZ4Ksk,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="Pinned Messages"] .iconBadge-qZ4Ksk,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="Pinned Messages"] .iconBadge-qZ4Ksk {
  top: 4px;
  right: 4px;
  z-index: -1;
  width: 4px;
  height: 4px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="Add Friends to DM"], html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="Add Friends to DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="Add Friends to DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="Add Friends to DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="New Group DM"] {
  left: 130px;
  width: 54px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="Add Friends to DM"]::after, html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="New Group DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="Add Friends to DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="New Group DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="Add Friends to DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="New Group DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="Add Friends to DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="New Group DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"]::after,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="New Group DM"]::after {
  content: "Group";
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"][aria-label="New Group DM"],
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1[aria-label="New Group DM"] {
  left: 88px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox]:hover,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"]:hover,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"]:hover,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"]:hover,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1:hover {
  background: var(--toolbar-background-hover);
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox]:active, html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox].selected-1GqIat,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"]:active,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"].selected-1GqIat,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"]:active,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"].selected-1GqIat,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"]:active,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"].selected-1GqIat,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1:active,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1.selected-1GqIat {
  background: var(--toolbar-background-active);
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox] svg,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"] svg,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"] svg,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"] svg,
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1 svg {
  display: none;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .inviteToolbar-3F-l2g {
  display: block !important;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .inviteToolbar-3F-l2g ~ .anchor-3Z-8Bb .iconWrapper-2OrFZ1 {
  left: 142px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .libraryFilter-31ZUa2 ~ .anchor-3Z-8Bb .iconWrapper-2OrFZ1 {
  left: 88px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"] ~ .anchor-3Z-8Bb .iconWrapper-2OrFZ1 {
  left: 184px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb {
  display: block !important;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb:nth-child(8) .iconWrapper-2OrFZ1 {
  left: 184px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb:nth-child(6) .iconWrapper-2OrFZ1 {
  left: 130px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1 {
  width: auto;
  left: 130px;
}
html.platform-win[lang=en-US] body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1::after {
  content: "Help";
}

html.platform-win[lang=en-US]:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label=Inbox],
html.platform-win[lang=en-US]:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Pinned Messages"],
html.platform-win[lang=en-US]:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="Add Friends to DM"],
html.platform-win[lang=en-US]:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .iconWrapper-2OrFZ1[aria-label="New Group DM"],
html.platform-win[lang=en-US]:not(.app-focused) body:not(.oldTitleBarEnabled-D8ppJQ) .container-1r6BKw.themed-ANHk51 .toolbar-1t6TWx .anchor-3Z-8Bb .iconWrapper-2OrFZ1 {
  opacity: 0.6;
}

#app-mount .tooltip-2QfLtc,
#app-mount .subscribeTooltipWrapper-32-Ce8 {
  padding: var(--spacing-third) var(--spacing);
  border-radius: var(--border-radius);
  background: var(--background);
  color: var(--text-normal);
  box-shadow: var(--elevation-1);
  font-size: var(--font-size);
  border: 1px solid var(--base-border);
  position: relative;
  font-weight: var(--font-weight-semibold);
  transform: none !important;
}
#app-mount .tooltip-2QfLtc.subscribeTooltipWrapper-32-Ce8,
#app-mount .subscribeTooltipWrapper-32-Ce8.subscribeTooltipWrapper-32-Ce8 {
  padding: var(--spacing);
}
#app-mount .tooltip-2QfLtc.subscribeTooltipWrapper-32-Ce8:after,
#app-mount .subscribeTooltipWrapper-32-Ce8.subscribeTooltipWrapper-32-Ce8:after {
  margin: 0;
  margin-left: -5px;
}
#app-mount .tooltip-2QfLtc.subscribeTooltipWrapper-32-Ce8 .subscribeTooltipHeader-2etyUq,
#app-mount .subscribeTooltipWrapper-32-Ce8.subscribeTooltipWrapper-32-Ce8 .subscribeTooltipHeader-2etyUq {
  margin-bottom: var(--spacing-half);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  font-size: var(--font-size-md);
}
#app-mount .tooltip-2QfLtc.subscribeTooltipWrapper-32-Ce8 .subscribeTooltipText-w-pylu,
#app-mount .subscribeTooltipWrapper-32-Ce8.subscribeTooltipWrapper-32-Ce8 .subscribeTooltipText-w-pylu {
  margin: 0;
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
}
#app-mount .tooltip-2QfLtc.subscribeTooltipWrapper-32-Ce8 .subscribeTooltipButton-r9C2rU,
#app-mount .subscribeTooltipWrapper-32-Ce8.subscribeTooltipWrapper-32-Ce8 .subscribeTooltipButton-r9C2rU {
  margin-top: var(--spacing);
}
#app-mount .tooltip-2QfLtc .tooltipContent-bqVLWK,
#app-mount .subscribeTooltipWrapper-32-Ce8 .tooltipContent-bqVLWK {
  padding: 0;
}
#app-mount .tooltip-2QfLtc .tooltipPointer-3ZfirK, #app-mount .tooltip-2QfLtc.subscribeTooltipWrapper-32-Ce8:after,
#app-mount .subscribeTooltipWrapper-32-Ce8 .tooltipPointer-3ZfirK,
#app-mount .subscribeTooltipWrapper-32-Ce8.subscribeTooltipWrapper-32-Ce8:after {
  background: var(--background);
  border: 1px solid var(--base-border);
  width: 8px;
  height: 8px;
  -webkit-clip-path: polygon(100% 0, 0% 100%, 0 0);
          clip-path: polygon(100% 0, 0% 100%, 0 0);
}
#app-mount .tooltip-2QfLtc.tooltipRight-2JM5PQ .tooltipPointer-3ZfirK,
#app-mount .subscribeTooltipWrapper-32-Ce8.tooltipRight-2JM5PQ .tooltipPointer-3ZfirK {
  transform: rotate(-45deg);
  margin-right: -5px;
}
#app-mount .tooltip-2QfLtc.tooltipLeft-3EDOk1 .tooltipPointer-3ZfirK,
#app-mount .subscribeTooltipWrapper-32-Ce8.tooltipLeft-3EDOk1 .tooltipPointer-3ZfirK {
  transform: rotate(135deg);
  margin-left: -5px;
}
#app-mount .tooltip-2QfLtc.tooltipBottom-3ARrEK .tooltipPointer-3ZfirK, #app-mount .tooltip-2QfLtc.subscribeTooltipWrapper-32-Ce8:after,
#app-mount .subscribeTooltipWrapper-32-Ce8.tooltipBottom-3ARrEK .tooltipPointer-3ZfirK,
#app-mount .subscribeTooltipWrapper-32-Ce8.subscribeTooltipWrapper-32-Ce8:after {
  transform: rotate(45deg);
  margin-bottom: -5px;
}
#app-mount .tooltip-2QfLtc.tooltipTop-XDDSxx .tooltipPointer-3ZfirK,
#app-mount .subscribeTooltipWrapper-32-Ce8.tooltipTop-XDDSxx .tooltipPointer-3ZfirK {
  transform: rotate(-135deg);
  margin-top: -5px;
}
#app-mount .tooltip-2QfLtc .size14-e6ZScH,
#app-mount .subscribeTooltipWrapper-32-Ce8 .size14-e6ZScH {
  color: var(--text-normal);
  font-size: var(--font-size);
  line-height: normal;
}
#app-mount .tooltip-2QfLtc .size14-e6ZScH.clickCTA-kIMiUd,
#app-mount .subscribeTooltipWrapper-32-Ce8 .size14-e6ZScH.clickCTA-kIMiUd {
  color: var(--text-muted);
  font-size: var(--font-size-sm);
}
#app-mount .tooltip-2QfLtc .userTooltip-7qZaHD,
#app-mount .subscribeTooltipWrapper-32-Ce8 .userTooltip-7qZaHD {
  font-size: var(--font-size);
  color: var(--text-normal);
}
#app-mount .tooltip-2QfLtc .userTooltip-7qZaHD .avatar-i5C_qp,
#app-mount .subscribeTooltipWrapper-32-Ce8 .userTooltip-7qZaHD .avatar-i5C_qp {
  margin-right: var(--spacing-half);
}
#app-mount .tooltip-2QfLtc .userTooltip-7qZaHD .discriminator-17tNDS,
#app-mount .subscribeTooltipWrapper-32-Ce8 .userTooltip-7qZaHD .discriminator-17tNDS {
  opacity: 1;
  color: var(--text-muted);
}

.userPopout-3XzG_A .wrapper-3t9DeA {
  z-index: 1;
}
.userPopout-3XzG_A .wrapper-3t9DeA svg:not(:root) {
  overflow: visible;
}
.userPopout-3XzG_A .wrapper-3t9DeA foreignObject {
  -webkit-mask: none;
          mask: none;
  overflow: visible;
}
.userPopout-3XzG_A .wrapper-3t9DeA foreignObject:not([mask*=mobile]):after {
  content: none;
}
.userPopout-3XzG_A .wrapper-3t9DeA .dots-3Bkt3k circle:nth-child(1) {
  cy: -8 !important;
  cx: -8.5 !important;
}
.userPopout-3XzG_A .wrapper-3t9DeA .dots-3Bkt3k circle:nth-child(2) {
  cy: -8 !important;
  cx: -2.25 !important;
}
.userPopout-3XzG_A .wrapper-3t9DeA .dots-3Bkt3k circle:nth-child(3) {
  cy: -8 !important;
  cx: 4 !important;
}
.userPopout-3XzG_A .wrapper-3t9DeA .mask-1l8v16 > rect[x="22"] {
  x: 0;
  y: 0;
}
.userPopout-3XzG_A .wrapper-3t9DeA .cursorDefault-dsQJ1n rect {
  x: -49;
  y: -53;
}
.userPopout-3XzG_A .wrapper-3t9DeA .pointerEvents-2zdfdO[x="14.5"] {
  fill: rgba(0, 0, 0, 0.5) !important;
  width: 30px;
  height: 30px;
  x: 1;
  y: 1;
}
.userPopout-3XzG_A .wrapper-3t9DeA img {
  border-radius: var(--rs-avatar-shape);
  -webkit-clip-path: inset(calc(var(--rs-small-spacing) + 1px) calc(var(--rs-small-spacing) + 1px) round var(--rs-avatar-shape));
          clip-path: inset(calc(var(--rs-small-spacing) + 1px) calc(var(--rs-small-spacing) + 1px) round var(--rs-avatar-shape));
}
.userPopout-3XzG_A .wrapper-3t9DeA svg[width="25"][height="15"] > rect {
  rx: calc(var(--rs-avatar-shape) * 2) !important;
  ry: calc(var(--rs-avatar-shape) * 2) !important;
}
.userPopout-3XzG_A .wrapper-3t9DeA rect {
  x: 0;
  y: 0;
  width: 100%;
  height: 100%;
  -webkit-mask: none;
          mask: none;
  display: block !important;
  rx: var(--rs-avatar-shape) !important;
  ry: var(--rs-avatar-shape) !important;
  fill: transparent !important;
  stroke-width: var(--rs-width);
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[fill="#43b581"], .userPopout-3XzG_A .wrapper-3t9DeA rect[fill="rgba(67, 181, 129, 1)"], .userPopout-3XzG_A .wrapper-3t9DeA rect[mask*=online] {
  stroke: rgb(var(--status-green));
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[fill="#faa61a"], .userPopout-3XzG_A .wrapper-3t9DeA rect[fill="rgba(250, 166, 26, 1)"], .userPopout-3XzG_A .wrapper-3t9DeA rect[mask*=idle] {
  stroke: rgb(var(--status-yellow));
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[fill="#f04747"], .userPopout-3XzG_A .wrapper-3t9DeA rect[fill="rgba(240, 71, 71, 1)"], .userPopout-3XzG_A .wrapper-3t9DeA rect[mask*=dnd] {
  stroke: rgb(var(--status-red));
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[fill="#593695"], .userPopout-3XzG_A .wrapper-3t9DeA rect[mask*=streaming] {
  stroke: rgb(var(--status-purple));
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[fill="#747f8d"], .userPopout-3XzG_A .wrapper-3t9DeA rect[mask*=offline], .userPopout-3XzG_A .wrapper-3t9DeA rect[fill=NaN] {
  stroke: rgb(var(--status-grey));
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[mask*=invisible], .userPopout-3XzG_A .wrapper-3t9DeA rect[fill="rgba(116, 127, 141, 1)"] {
  stroke: rgb(var(--status-grey));
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[x="16"] {
  width: 24px;
  height: 24px;
}
.userPopout-3XzG_A .wrapper-3t9DeA rect[x="28"] {
  width: 40px;
  height: 40px;
  overflow: visible;
}
.userPopout-3XzG_A .wrapper-3t9DeA[style*="width: 80px;"] {
  position: relative;
  margin-right: 0 !important;
}
.userPopout-3XzG_A .wrapper-3t9DeA[style*="width: 80px;"] rect {
  width: 80px;
  height: 80px;
  pointer-events: none;
}
.userPopout-3XzG_A .wrapper-3t9DeA[style*="width: 80px;"] img {
  -webkit-clip-path: inset(calc(var(--rs-large-spacing) + 1px) calc(var(--rs-large-spacing) + 1px) round var(--rs-avatar-shape));
          clip-path: inset(calc(var(--rs-large-spacing) + 1px) calc(var(--rs-large-spacing) + 1px) round var(--rs-avatar-shape));
}
.userPopout-3XzG_A .wrapper-3t9DeA[style*="width: 80px;"][style*="width:80px;"]:after {
  left: unset;
  right: -2px;
  top: unset;
  bottom: -2px;
  transform: none;
}
.userPopout-3XzG_A .wrapper-3t9DeA[style*="width: 32px;"] rect {
  width: 32px;
  height: 32px;
  x: -14.5;
  y: -17;
  position: relative;
  z-index: 0;
}
.userPopout-3XzG_A .avatarHint-1qgaV3 foreignObject {
  -webkit-mask: none;
          mask: none;
}
.userPopout-3XzG_A .avatarHint-1qgaV3 .avatarHintInner-Dco91E {
  border-radius: var(--rs-avatar-shape) !important;
  padding-top: 0;
  width: calc(var(--avatar-size-lg) - var(--rs-large-spacing) - var(--rs-width));
  height: calc(var(--avatar-size-lg) - var(--rs-large-spacing) - var(--rs-width));
  margin-top: calc(var(--rs-width) - 1px);
  margin-left: calc(var(--rs-width) - 1px);
  font-size: 0;
  white-space: normal;
  text-align: center;
  box-shadow: none;
  background: rgba(0, 0, 0, 0.5);
  cursor: var(--cursor);
  transition: none;
}
.userPopout-3XzG_A .avatarHint-1qgaV3 .avatarHintInner-Dco91E::after {
  content: "";
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  position: relative;
  background: var(--white);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/18px no-repeat;
}
.userPopout-3XzG_A .message-1PNnaP .mask-1l8v16 img {
  -webkit-clip-path: circle(calc(19px - var(--rs-small-spacing)));
          clip-path: circle(calc(19px - var(--rs-small-spacing)));
}
.userPopout-3XzG_A .memberOffline-2lN7gt img {
  -webkit-clip-path: none !important;
          clip-path: none !important;
}
.userPopout-3XzG_A .header-QKLPzZ .wrapper-3t9DeA {
  margin-right: 20px !important;
}
.userPopout-3XzG_A .offline-3nJYBR img {
  -webkit-clip-path: none !important;
          clip-path: none !important;
}
.userPopout-3XzG_A foreignObject[mask*=mobile] {
  width: calc(100% + 252px);
}
.userPopout-3XzG_A foreignObject[mask*=mobile][width="32"] {
  width: calc(100% + var(--sidebar-width) + var(--spacing-half));
}
.userPopout-3XzG_A foreignObject[mask*=mobile][width="32"] img {
  width: 32px;
}
.userPopout-3XzG_A foreignObject[mask*=mobile][width="80"] img {
  width: 80px;
}
.userPopout-3XzG_A foreignObject[mask*=mobile]:after {
  content: "";
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg aria-hidden="true" focusable="false" data-prefix="fas" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 320 512"><path fill="currentColor" d="M272 0H48C21.5 0 0 21.5 0 48v416c0 26.5 21.5 48 48 48h224c26.5 0 48-21.5 48-48V48c0-26.5-21.5-48-48-48zM160 480c-17.7 0-32-14.3-32-32s14.3-32 32-32 32 14.3 32 32-14.3 32-32 32zm112-108c0 6.6-5.4 12-12 12H60c-6.6 0-12-5.4-12-12V60c0-6.6 5.4-12 12-12h200c6.6 0 12 5.4 12 12v312z"></path></svg>') center/12px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg aria-hidden="true" focusable="false" data-prefix="fas" role="img" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 320 512"><path fill="currentColor" d="M272 0H48C21.5 0 0 21.5 0 48v416c0 26.5 21.5 48 48 48h224c26.5 0 48-21.5 48-48V48c0-26.5-21.5-48-48-48zM160 480c-17.7 0-32-14.3-32-32s14.3-32 32-32 32 14.3 32 32-14.3 32-32 32zm112-108c0 6.6-5.4 12-12 12H60c-6.6 0-12-5.4-12-12V60c0-6.6 5.4-12 12-12h200c6.6 0 12 5.4 12 12v312z"></path></svg>') center/12px no-repeat;
  display: block;
  position: absolute;
  width: 12px;
  height: 100%;
  top: 50%;
  transform: translateY(-50%);
  right: 0;
  background: rgb(var(--status-green));
  z-index: 1;
}

.wrapper-3t9DeA {
  border-radius: calc(var(--avatar-radius) / 2);
  box-shadow: 0 0 0 0.5px var(--base-border);
  background: var(--background-dark);
}
.wrapper-3t9DeA .avatar-VxgULZ[src*="/assets/"] {
  content: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg"/>');
  border-radius: 0;
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/42% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/42% no-repeat;
}
.wrapper-3t9DeA .avatar-VxgULZ:before {
  content: none;
}
.wrapper-3t9DeA .avatar-VxgULZ[src*="/assets/e1fb24a120bdd003a84e021b16ec3bef.png"], .wrapper-3t9DeA .avatar-VxgULZ[src*="/assets/861ab526aa1fabb04c6b7da8074e3e21.png"], .wrapper-3t9DeA .avatar-VxgULZ[src*="/assets/b8912961ea6ab32f0655d583bbc26b4f.png"], .wrapper-3t9DeA .avatar-VxgULZ[src*="/assets/485a854d5171c8dc98088041626e6fea.png"], .wrapper-3t9DeA .avatar-VxgULZ[src*="/assets/f810dc5fedb7175c43a3389aa890534f.png"], .wrapper-3t9DeA .avatar-VxgULZ[src*="/assets/b3150d5cef84b9e82128a1131684f287.png"] {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088A6.78 6.78 0 0 1 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z"/></svg>') center/50% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088A6.78 6.78 0 0 1 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z"/></svg>') center/50% no-repeat;
}
.wrapper-3t9DeA svg:not(:root) {
  overflow: visible;
}
.wrapper-3t9DeA .mask-1l8v16,
.wrapper-3t9DeA foreignObject {
  -webkit-mask: none;
          mask: none;
}
.wrapper-3t9DeA img {
  border-radius: var(--avatar-radius);
}
.wrapper-3t9DeA rect {
  x: 24.5px;
  y: 24.5px;
  stroke: var(--base-border);
  rx: 50;
}
.wrapper-3t9DeA rect[height="15"], .wrapper-3t9DeA rect[height="10"] {
  width: 11px;
  height: 11px;
  x: 24.5px;
  y: 24.5px;
}
.wrapper-3t9DeA rect[height="15"][mask*=mobile], .wrapper-3t9DeA rect[height="10"][mask*=mobile] {
  height: 18px;
  y: 17px;
}
.wrapper-3t9DeA rect[width="8"] {
  width: 8px;
  height: 8px;
  x: 19.5px;
  y: 19.5px;
}
.wrapper-3t9DeA rect[fill="#43b581"], .wrapper-3t9DeA rect[fill="rgba(67, 181, 129, 1)"], .wrapper-3t9DeA rect[mask*=online] {
  fill: rgb(var(--status-green));
}
.wrapper-3t9DeA rect[fill="#faa61a"], .wrapper-3t9DeA rect[fill="rgba(250, 166, 26, 1)"], .wrapper-3t9DeA rect[mask*=idle] {
  fill: rgb(var(--status-yellow));
}
.wrapper-3t9DeA rect[fill="#f04747"], .wrapper-3t9DeA rect[fill="rgba(240, 71, 71, 1)"], .wrapper-3t9DeA rect[mask*=dnd] {
  fill: rgb(var(--status-red));
}
.wrapper-3t9DeA rect[fill="#593695"], .wrapper-3t9DeA rect[mask*=streaming] {
  fill: rgb(var(--status-purple));
}
.wrapper-3t9DeA rect[fill="#747f8d"], .wrapper-3t9DeA rect[mask*=offline], .wrapper-3t9DeA rect[fill=NaN], .wrapper-3t9DeA rect[mask*=invisible], .wrapper-3t9DeA rect[fill="rgba(116, 127, 141, 1)"] {
  fill: rgb(var(--status-grey));
}
.wrapper-3t9DeA rect:not([mask*=mobile]) {
  -webkit-mask: none;
          mask: none;
}
.wrapper-3t9DeA .cursorDefault-dsQJ1n rect {
  y: 8.5px;
  x: 10.5px;
  stroke: var(--base-border);
}
.wrapper-3t9DeA .dots-3Bkt3k circle:nth-child(1) {
  cy: -8 !important;
  cx: -8.5 !important;
}
.wrapper-3t9DeA .dots-3Bkt3k circle:nth-child(2) {
  cy: -8 !important;
  cx: -2.25 !important;
}
.wrapper-3t9DeA .dots-3Bkt3k circle:nth-child(3) {
  cy: -8 !important;
  cx: 4 !important;
}
.wrapper-3t9DeA rect[fill=transparent] {
  stroke: none;
}
.wrapper-3t9DeA rect[mask*=mobile] {
  rx: 2;
}

#app-mount .messagesPopout-24nkyi::-webkit-scrollbar,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar,
#app-mount .scroller-zPkAnE::-webkit-scrollbar,
#app-mount .scroller::-webkit-scrollbar,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar,
#app-mount .scroller-2LSbBU::-webkit-scrollbar,
#app-mount .rolesList-22qj2L::-webkit-scrollbar,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar {
  width: 4px;
  display: none;
  background: transparent !important;
}
#app-mount .messagesPopout-24nkyi::-webkit-scrollbar-track,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar-track,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar-track,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar-track,
#app-mount .scroller-zPkAnE::-webkit-scrollbar-track,
#app-mount .scroller::-webkit-scrollbar-track,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar-track,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar-track,
#app-mount .scroller-2LSbBU::-webkit-scrollbar-track,
#app-mount .rolesList-22qj2L::-webkit-scrollbar-track,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar-track,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar-track,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar-track,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar-track {
  margin: 0;
}
#app-mount .messagesPopout-24nkyi::-webkit-scrollbar-track-piece,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar-track-piece,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar-track-piece,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar-track-piece,
#app-mount .scroller-zPkAnE::-webkit-scrollbar-track-piece,
#app-mount .scroller::-webkit-scrollbar-track-piece,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar-track-piece,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar-track-piece,
#app-mount .scroller-2LSbBU::-webkit-scrollbar-track-piece,
#app-mount .rolesList-22qj2L::-webkit-scrollbar-track-piece,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar-track-piece,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar-track-piece,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar-track-piece,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar-track-piece {
  background: transparent;
  border-color: transparent;
}
#app-mount .messagesPopout-24nkyi::-webkit-scrollbar-thumb,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar-thumb,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar-thumb,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar-thumb,
#app-mount .scroller-zPkAnE::-webkit-scrollbar-thumb,
#app-mount .scroller::-webkit-scrollbar-thumb,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar-thumb,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar-thumb,
#app-mount .scroller-2LSbBU::-webkit-scrollbar-thumb,
#app-mount .rolesList-22qj2L::-webkit-scrollbar-thumb,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar-thumb,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar-thumb,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar-thumb,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar-thumb {
  background-color: var(--scrollbar-background);
  border-radius: 0;
  border-radius: var(--border-radius);
  border: none;
}
#app-mount .messagesPopout-24nkyi::-webkit-scrollbar-thumb:hover,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar-thumb:hover,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar-thumb:hover,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar-thumb:hover,
#app-mount .scroller-zPkAnE::-webkit-scrollbar-thumb:hover,
#app-mount .scroller::-webkit-scrollbar-thumb:hover,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar-thumb:hover,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar-thumb:hover,
#app-mount .scroller-2LSbBU::-webkit-scrollbar-thumb:hover,
#app-mount .rolesList-22qj2L::-webkit-scrollbar-thumb:hover,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar-thumb:hover,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar-thumb:hover,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar-thumb:hover,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar-thumb:hover {
  background-color: var(--scrollbar-background-hover);
}
#app-mount .messagesPopout-24nkyi::-webkit-scrollbar-thumb:active,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar-thumb:active,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar-thumb:active,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar-thumb:active,
#app-mount .scroller-zPkAnE::-webkit-scrollbar-thumb:active,
#app-mount .scroller::-webkit-scrollbar-thumb:active,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar-thumb:active,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar-thumb:active,
#app-mount .scroller-2LSbBU::-webkit-scrollbar-thumb:active,
#app-mount .rolesList-22qj2L::-webkit-scrollbar-thumb:active,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar-thumb:active,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar-thumb:active,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar-thumb:active,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar-thumb:active {
  background-color: var(--scrollbar-background-active);
}
#app-mount .messagesPopout-24nkyi::-webkit-scrollbar-button, #app-mount .messagesPopout-24nkyi::-webkit-scrollbar-corner,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar-button,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG::-webkit-scrollbar-corner,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar-button,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG::-webkit-scrollbar-corner,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar-button,
#app-mount .container-1D34oG .scrollerBase-289Jih::-webkit-scrollbar-corner,
#app-mount .scroller-zPkAnE::-webkit-scrollbar-button,
#app-mount .scroller-zPkAnE::-webkit-scrollbar-corner,
#app-mount .scroller::-webkit-scrollbar-button,
#app-mount .scroller::-webkit-scrollbar-corner,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar-button,
#app-mount .infoScroller-3EYYns::-webkit-scrollbar-corner,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar-button,
#app-mount .listScroller-2_vlfo::-webkit-scrollbar-corner,
#app-mount .scroller-2LSbBU::-webkit-scrollbar-button,
#app-mount .scroller-2LSbBU::-webkit-scrollbar-corner,
#app-mount .rolesList-22qj2L::-webkit-scrollbar-button,
#app-mount .rolesList-22qj2L::-webkit-scrollbar-corner,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar-button,
#app-mount .templatesList-2E6rTe::-webkit-scrollbar-corner,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar-button,
#app-mount .autocompleteScroller-iInVqR::-webkit-scrollbar-corner,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar-button,
#app-mount .keybindGroup--6Qp-w::-webkit-scrollbar-corner,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar-button,
#app-mount .regionSelectModalOptions-2TWQOB::-webkit-scrollbar-corner {
  display: none !important;
}
#app-mount .messagesPopout-24nkyi:hover,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG:hover,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG:hover,
#app-mount .container-1D34oG .scrollerBase-289Jih:hover,
#app-mount .scroller-zPkAnE:hover,
#app-mount .scroller:hover,
#app-mount .infoScroller-3EYYns:hover,
#app-mount .listScroller-2_vlfo:hover,
#app-mount .scroller-2LSbBU:hover,
#app-mount .rolesList-22qj2L:hover,
#app-mount .templatesList-2E6rTe:hover,
#app-mount .autocompleteScroller-iInVqR:hover,
#app-mount .keybindGroup--6Qp-w:hover,
#app-mount .regionSelectModalOptions-2TWQOB:hover {
  overflow: overlay !important;
}
#app-mount .messagesPopout-24nkyi:hover::-webkit-scrollbar,
#app-mount .listWrapper-3kgtQ0 .scroller-2FKFPG:hover::-webkit-scrollbar,
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG:hover::-webkit-scrollbar,
#app-mount .container-1D34oG .scrollerBase-289Jih:hover::-webkit-scrollbar,
#app-mount .scroller-zPkAnE:hover::-webkit-scrollbar,
#app-mount .scroller:hover::-webkit-scrollbar,
#app-mount .infoScroller-3EYYns:hover::-webkit-scrollbar,
#app-mount .listScroller-2_vlfo:hover::-webkit-scrollbar,
#app-mount .scroller-2LSbBU:hover::-webkit-scrollbar,
#app-mount .rolesList-22qj2L:hover::-webkit-scrollbar,
#app-mount .templatesList-2E6rTe:hover::-webkit-scrollbar,
#app-mount .autocompleteScroller-iInVqR:hover::-webkit-scrollbar,
#app-mount .keybindGroup--6Qp-w:hover::-webkit-scrollbar,
#app-mount .regionSelectModalOptions-2TWQOB:hover::-webkit-scrollbar {
  display: block;
}

#app-mount .badge-1Skb69[style*="rgb(240, 71, 71)"],
#app-mount .numberBadge-2s8kKX {
  border-radius: 50px !important;
  font-size: var(--font-size-xsm);
  font-weight: var(--font-weight-normal);
  background: rgb(var(--status-red)) !important;
  color: var(--white);
  line-height: normal;
  height: -webkit-fit-content !important;
  height: -moz-fit-content !important;
  height: fit-content !important;
  width: -webkit-fit-content !important;
  width: -moz-fit-content !important;
  width: fit-content !important;
  padding: calc(var(--spacing-third) / 3.5) calc(var(--spacing-half) / 1.15) !important;
  min-height: unset;
  min-width: unset;
  display: flex;
  align-items: center;
  justify-content: center;
}

#app-mount .spinner-2enMB9 {
  background: var(--text-normal);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M10.236 7.4a4.15 4.15 0 0 1-1.2 3.6 4.346 4.346 0 0 1-5.41.54l1.17-1.14-4.3-.6.6 4.2 1.31-1.26c2.36 1.74 5.7 1.57 7.84-.54a5.876 5.876 0 0 0 1.74-4.46l-1.75-.34zM2.956 5a4.346 4.346 0 0 1 5.41-.54L7.196 5.6l4.3.6-.6-4.2-1.31 1.26c-2.36-1.74-5.7-1.57-7.85.54-1.24 1.23-1.8 2.85-1.73 4.46l1.75.35A4.17 4.17 0 0 1 2.956 5z"/></svg>') center/12px no-repeat;
  animation: rotate 1s linear infinite;
}
#app-mount .spinner-2enMB9 .wanderingCubesItem-WPXqao,
#app-mount .spinner-2enMB9 .chasingDotsItem-2DVNUn,
#app-mount .spinner-2enMB9 .pulsingEllipsis-3YiXRF {
  display: none;
}

.horizontal-1ae9ci > .flex-1xMQg5,
.horizontal-1ae9ci > .flexChild-faoVW3 {
  margin: 0 var(--spacing);
}

.marginTop4-2BNfKC {
  margin-top: var(--spacing-half);
}

.marginBottom4-2qk4Hy {
  margin-bottom: var(--spacing-half);
}

.marginTop8-1DLZ1n {
  margin-top: var(--spacing);
}

.marginLeft4-3VaXdt {
  margin-left: var(--spacing-half);
}

.marginLeft8-1YseBe {
  margin-left: var(--spacing);
}

.marginBottom8-AtZOdT {
  margin-bottom: var(--spacing);
}

.marginTop20-3TxNs6 {
  margin-top: var(--spacing-double);
}

.marginBottom20-32qID7 {
  margin-bottom: var(--spacing-double);
}

.marginTop40-i-78cZ {
  margin-top: calc(var(--spacing) * 4);
}

.marginBottom40-2vIwTv {
  margin-bottom: calc(var(--spacing) * 4);
}

.marginTop60-3PGbtK {
  margin-top: calc(var(--spacing) * 6);
}

.marginBottom60-Gs8NBA {
  margin-bottom: calc(var(--spacing) * 6);
}

#app-mount .indicator-1afSc8[data-tutorial-id=direct-messages] {
  margin-top: 44px;
  margin-left: 13px;
}
#app-mount .indicator-1afSc8[data-tutorial-id=create-first-server] {
  margin-top: -6px;
  margin-left: -22px;
}
#app-mount .outerCircle-2K0c82,
#app-mount [data-tutorial-id=organize-by-topic],
#app-mount [data-tutorial-id=voice-conversations],
#app-mount [data-tutorial-id=instant-invite] {
  display: none;
}
#app-mount .innerCircle-2Tsscg {
  background: var(--accent-solid);
  -webkit-mask: url(/assets/5d7b0c4b2a82d63d829b6ea591853c22.svg) 50% no-repeat;
}
#app-mount .bottom-UE1eOv,
#app-mount .top-3fo3zT {
  display: none;
}

#app-mount .base-3dtUhz .notice-2FJMB4 {
  width: calc(100% - var(--sidebar-width));
  margin-left: var(--sidebar-width);
  height: 36px;
}
#app-mount .base-3dtUhz .notice-2FJMB4 + .content-98HsJk .privateChannels-1nO12o .searchBar-6Kv8R2,
#app-mount .base-3dtUhz .notice-2FJMB4 + .content-98HsJk .privateChannels-1nO12o .scroller-1JbKMe {
  margin-top: -36px;
}
#app-mount .base-3dtUhz .notice-2FJMB4 + .content-98HsJk .header-2o-2hj,
#app-mount .base-3dtUhz .notice-2FJMB4 + .content-98HsJk .scroller-2wx7Hm {
  margin-top: -36px;
}

#app-mount .sidebar-2K8pFh {
  width: var(--sidebar-width);
  border-radius: 0;
  overflow: visible !important;
  display: -webkit-box;
  padding-top: var(--toolbar-height);
  background: transparent;
}
#app-mount .sidebar-2K8pFh .container-PNkimc {
  background: var(--background);
}
#app-mount .sidebar-2K8pFh [class*=scroller-] {
  background: var(--background);
  border-right: 1px solid var(--base-border);
}
#app-mount .sidebar-2K8pFh [class*=scroller-]::-webkit-scrollbar {
  display: none;
}
#app-mount .sidebar-2K8pFh .animatedContainer-1pJv5C {
  box-shadow: none;
  -webkit-mask: linear-gradient(rgba(0, 0, 0, 0.9) 0%, rgba(0, 0, 0, 0) 90%) !important;
          mask: linear-gradient(rgba(0, 0, 0, 0.9) 0%, rgba(0, 0, 0, 0) 90%) !important;
  z-index: 10;
  pointer-events: none;
}
#app-mount .sidebar-2K8pFh .bannerImage-1jOskm {
  width: var(--sidebar-width);
  top: 0;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC {
  border-bottom: 1px solid var(--base-border);
  box-shadow: none;
  border-right: 1px solid var(--base-border);
  background-color: var(--background-light);
  padding: var(--spacing);
  padding-top: calc(16px + var(--spacing-double));
  display: flex;
  flex-direction: column;
  align-items: center;
  background-image: none;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.premiumGuildSubscription-3oKecP {
  padding-top: var(--spacing);
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.premiumGuildSubscription-3oKecP:before {
  content: "";
  position: relative;
  display: block;
  width: 48px;
  height: 48px;
  margin: var(--spacing);
  background: var(--text-normal);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12.17 3.83c-.27-.27-.47-.55-.63-.88-.16-.31-.27-.66-.34-1.02-.58.33-1.16.7-1.73 1.13-.58.44-1.14.94-1.69 1.48-.7.7-1.33 1.81-1.78 2.45H3L0 10h3l2-2c-.34.77-1.02 2.98-1 3l1 1c.02.02 2.23-.64 3-1l-2 2v3l3-3v-3c.64-.45 1.75-1.09 2.45-1.78.55-.55 1.05-1.13 1.47-1.7.44-.58.81-1.16 1.14-1.72-.36-.08-.7-.19-1.03-.34a3.39 3.39 0 0 1-.86-.63zM16 0s-.09.38-.3 1.06c-.2.7-.55 1.58-1.06 2.66-.7-.08-1.27-.33-1.66-.72-.39-.39-.63-.94-.7-1.64C13.36.84 14.23.48 14.92.28 15.62.08 16 0 16 0z"/></svg>') center/cover no-repeat;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.publicUpsell-31ZSJ8 {
  padding-top: var(--spacing);
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.publicUpsell-31ZSJ8:before {
  content: "";
  position: relative;
  display: block;
  width: 48px;
  height: 48px;
  margin: var(--spacing);
  background: var(--text-normal);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M4 13H3v-1h1v1zm8-6v7c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h1V4c0-2.2 1.8-4 4-4s4 1.8 4 4v2h1c.55 0 1 .45 1 1zM3.8 6h4.41V4c0-1.22-.98-2.2-2.2-2.2-1.22 0-2.2.98-2.2 2.2v2H3.8zM11 7H2v7h9V7zM4 8H3v1h1V8zm0 2H3v1h1v-1z"/></svg>') center/cover no-repeat;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.quickswitcher-35bYg4 {
  padding-top: var(--spacing);
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.quickswitcher-35bYg4:before {
  content: "";
  position: relative;
  display: block;
  width: 48px;
  height: 48px;
  margin: var(--spacing);
  background: var(--text-normal);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"/></svg>') center/cover no-repeat;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC .message-3SOT5P {
  display: flex;
  flex-direction: column;
  align-items: center;
  margin: 0;
  color: var(--text-muted);
  font-size: var(--font-size);
  line-height: normal;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC .btn-11C5_u {
  margin: var(--spacing) auto 0;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC .close-relY5R {
  width: 16px;
  height: 16px;
  top: var(--spacing);
  right: var(--spacing);
  color: var(--text-muted);
  background: currentColor;
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/12px no-repeat;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC .close-relY5R path {
  display: none;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC .close-relY5R:hover {
  color: var(--text-normal);
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.invite-OjTXrW {
  background-image: none;
}
#app-mount .sidebar-2K8pFh .channelNotice-1-XFjC.invite-OjTXrW:before {
  content: "";
  position: relative;
  display: block;
  width: 75px;
  height: 80px;
  margin: var(--spacing);
  background: var(--text-normal);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/1.svg") center/cover no-repeat;
}

#app-mount .sidebar-2K8pFh .wrapper-1ucjTd {
  position: relative;
  cursor: var(--cursor);
}
#app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeUnread-1zpFdA .content-3at_AU .name-3_Dsmg, #app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeUnread-1zpFdA .content-3at_AU svg {
  color: var(--text-focus);
  opacity: 1;
}
#app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeUnread-1zpFdA:hover .unread-3zKkbm {
  height: 18px;
}
#app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeMuted-3osy7j .content-3at_AU .name-3_Dsmg, #app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeMuted-3osy7j .content-3at_AU svg {
  opacity: 0.75;
  color: var(--text-muted);
}
#app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeSelected-1zApJ_ .content-3at_AU {
  background: var(--accent-solid);
}
#app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeSelected-1zApJ_ .content-3at_AU .name-3_Dsmg, #app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeSelected-1zApJ_ .content-3at_AU svg {
  opacity: 1;
  color: var(--white);
}
#app-mount .sidebar-2K8pFh .wrapper-1ucjTd.modeSelected-1zApJ_ .content-3at_AU:active {
  background: var(--accent-solid);
}
#app-mount .sidebar-2K8pFh .draggable-1KoBzC {
  height: var(--item-height);
}
#app-mount .sidebar-2K8pFh .containerUserOver-1U5YnL:after {
  left: 0;
  border-radius: var(--border-radius);
  border: 2px solid rgb(var(--status-green));
  background: rgba(var(--status-green), 0.2);
}
#app-mount .sidebar-2K8pFh .unread-3zKkbm {
  border-radius: 0;
  width: 2px;
  height: 12px;
  top: 50%;
  transform: translateY(-50%);
  margin-top: 1px;
  background-color: var(--accent-solid) !important;
  z-index: 1;
}
#app-mount .sidebar-2K8pFh .mainContent-ENyL1r,
#app-mount .sidebar-2K8pFh .voiceUser-14U_Ns {
  cursor: var(--cursor);
}
#app-mount .sidebar-2K8pFh .content-3at_AU {
  margin: 0;
  padding: 0 var(--spacing);
  border-radius: 0;
  height: var(--item-height);
}
#app-mount .sidebar-2K8pFh .content-3at_AU svg {
  cursor: var(--cursor);
  color: var(--text-muted);
}
#app-mount .sidebar-2K8pFh .content-3at_AU svg:active {
  transform: none;
}
#app-mount .sidebar-2K8pFh .content-3at_AU svg path[d="M17 11V7C17 4.243 14.756 2 12 2C9.242 2 7 4.243 7 7V11C5.897 11 5 11.896 5 13V20C5 21.103 5.897 22 7 22H17C18.103 22 19 21.103 19 20V13C19 11.896 18.103 11 17 11ZM12 18C11.172 18 10.5 17.328 10.5 16.5C10.5 15.672 11.172 15 12 15C12.828 15 13.5 15.672 13.5 16.5C13.5 17.328 12.828 18 12 18ZM15 11H9V7C9 5.346 10.346 4 12 4C13.654 4 15 5.346 15 7V11Z"] {
  d: path("M4 13H3v-1h1v1zm8-6v7c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h1V4c0-2.2 1.8-4 4-4s4 1.8 4 4v2h1c.55 0 1 .45 1 1zM3.8 6h4.41V4c0-1.22-.98-2.2-2.2-2.2-1.22 0-2.2.98-2.2 2.2v2H3.8zM11 7H2v7h9V7zM4 8H3v1h1V8zm0 2H3v1h1v-1z");
  fill-rule: evenodd;
  transform: scale(1.5) translateX(2px);
}
#app-mount .sidebar-2K8pFh .content-3at_AU .iconBase-2IHuka {
  margin-left: var(--spacing-half);
}
#app-mount .sidebar-2K8pFh .content-3at_AU .iconBase-2IHuka path[d="M14 2H16V3H14V5H13V3H11V2H13V0H14V2Z"] {
  d: path("M6 11.5c0-2.363 1.498-4.383 3.594-5.159 0.254-0.571 0.406-1.206 0.406-1.841 0-2.485 0-4.5-3-4.5s-3 2.015-3 4.5c0 1.548 0.898 3.095 2 3.716v0.825c-3.392 0.277-6 1.944-6 3.959h6.208c-0.135-0.477-0.208-0.98-0.208-1.5z M11.5 7c-2.485 0-4.5 2.015-4.5 4.5s2.015 4.5 4.5 4.5c2.485 0 4.5-2.015 4.5-4.5s-2.015-4.5-4.5-4.5zM14 12h-2v2h-1v-2h-2v-1h2v-2h1v2h2v1z");
}
#app-mount .sidebar-2K8pFh .content-3at_AU .iconBase-2IHuka path[d="M14 2H16V3H14V5H13V3H11V2H13V0H14V2Z"] ~ path {
  display: none;
}
#app-mount .sidebar-2K8pFh .content-3at_AU .iconBase-2IHuka path[d="M14 7V9C14 9 12.5867 9 12.5733 9.00667C12.42 9.58667 12.1733 10.1267 11.84 10.6067L12.74 11.5067L11.4933 12.7533L10.5933 11.8533C10.1133 12.1867 9.57334 12.44 8.99334 12.5867V14H6.99334V12.58C6.41334 12.4333 5.87334 12.18 5.39334 11.8467L4.49333 12.7467L3.24667 11.5L4.14667 10.6C3.81333 10.1267 3.56 9.58 3.41333 9H2V7H3.41333C3.56 6.42 3.81333 5.88 4.14667 5.4L3.24667 4.5L4.5 3.24667L5.4 4.14667C5.87334 3.81333 6.42 3.56 7 3.41333V2H9V3.41333C9.58 3.56667 10.12 3.81333 10.6 4.14667L11.5067 3.25333L12.7533 4.5L11.8533 5.4C12.1867 5.87334 12.44 6.42 12.5867 7H14ZM8 10C9.10457 10 10 9.10457 10 8C10 6.89543 9.10457 6 8 6C6.89543 6 6 6.89543 6 8C6 9.10457 6.89543 10 8 10Z"] {
  d: path("M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z");
  transform: scale(0.9);
  transform-origin: center;
}
#app-mount .sidebar-2K8pFh .content-3at_AU .icon-1_QxNX {
  margin-right: var(--spacing);
  height: 14px;
  width: auto;
}
#app-mount .sidebar-2K8pFh .content-3at_AU .icon-1_QxNX path[d="M11.383 3.07904C11.009 2.92504 10.579 3.01004 10.293 3.29604L6 8.00204H3C2.45 8.00204 2 8.45304 2 9.00204V15.002C2 15.552 2.45 16.002 3 16.002H6L10.293 20.71C10.579 20.996 11.009 21.082 11.383 20.927C11.757 20.772 12 20.407 12 20.002V4.00204C12 3.59904 11.757 3.23204 11.383 3.07904ZM14 5.00195V7.00195C16.757 7.00195 19 9.24595 19 12.002C19 14.759 16.757 17.002 14 17.002V19.002C17.86 19.002 21 15.863 21 12.002C21 8.14295 17.86 5.00195 14 5.00195ZM14 9.00195C15.654 9.00195 17 10.349 17 12.002C17 13.657 15.654 15.002 14 15.002V13.002C14.551 13.002 15 12.553 15 12.002C15 11.451 14.551 11.002 14 11.002V9.00195Z"] {
  d: path("M12 8.02c0 1.09-.45 2.09-1.17 2.83l-.67-.67c.55-.56.89-1.31.89-2.16 0-.85-.34-1.61-.89-2.16l.67-.67A3.99 3.99 0 0112 8.02zM7.72 2.28L4 6H2c-.55 0-1 .45-1 1v2c0 .55.45 1 1 1h2l3.72 3.72c.47.47 1.28.14 1.28-.53V2.81c0-.67-.81-1-1.28-.53zm5.94.08l-.67.67a6.996 6.996 0 012.06 4.98c0 1.94-.78 3.7-2.06 4.98l.67.67A7.973 7.973 0 0016 8c0-2.22-.89-4.22-2.34-5.66v.02zm-1.41 1.41l-.69.67a5.05 5.05 0 011.48 3.58c0 1.39-.56 2.66-1.48 3.56l.69.67A5.971 5.971 0 0014 8.02c0-1.65-.67-3.16-1.75-4.25z");
  transform: scale(1.25) translateX(2px) translateY(1px);
}
#app-mount .sidebar-2K8pFh .content-3at_AU .name-3_Dsmg {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
}
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe:before,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x:before,
#app-mount .sidebar-2K8pFh .containerDragAfter-1F4fgZ:after,
#app-mount .sidebar-2K8pFh .containerDragBefore-31UGCO:before {
  left: 0;
  border-radius: 0;
  height: 2px;
  background: rgb(var(--status-green));
  box-shadow: none;
}
#app-mount .sidebar-2K8pFh .list-2bwCXU {
  padding-left: 0;
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .content-3xS9Lh {
  border-radius: 0;
  margin: 0;
  height: 100%;
  padding-left: calc(var(--spacing) * 2.5);
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns {
  border-radius: 0;
  height: var(--item-height);
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns .avatarContainer-2inGBK {
  margin-left: var(--spacing);
  border-radius: var(--border-radius);
  height: var(--avatar-size-xsm);
  width: var(--avatar-size-xsm);
  border: 1px solid var(--base-border);
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns .avatarContainer-2inGBK.avatarSpeaking-3MqCHL {
  border-color: rgb(var(--accent));
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.35);
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns .icons-3q-_6z {
  margin-right: var(--spacing);
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns .username-lm8y6T {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns .icon-3BcwQu {
  color: var(--text-normal);
  height: 14px;
  width: 14px;
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns.selected-3TGCSZ .icon-3BcwQu, #app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns.selected-3TGCSZ .username-lm8y6T {
  color: #fff !important;
}
#app-mount .sidebar-2K8pFh .list-2bwCXU .voiceUser-14U_Ns.selected-3TGCSZ .usernameSpeaking-2xbKKh:after {
  background: #fff;
}
#app-mount .sidebar-2K8pFh .list-2bwCXU.collapsed-3x0tkj {
  padding-left: calc(var(--spacing) * 2.5);
}
#app-mount .sidebar-2K8pFh .list-2bwCXU.collapsed-3x0tkj .content-3xS9Lh {
  padding-left: 0;
}
#app-mount .sidebar-2K8pFh .userLimit-64AFxe .wrapper-pZmgj4 {
  color: var(--text-normal);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
}
#app-mount .sidebar-2K8pFh .userLimit-64AFxe .wrapper-pZmgj4 span {
  padding: 0 var(--spacing-half);
  width: auto;
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .sidebar-2K8pFh .userLimit-64AFxe .wrapper-pZmgj4 span.users-i_3-kL {
  background: transparent;
}
#app-mount .sidebar-2K8pFh .userLimit-64AFxe .wrapper-pZmgj4 span.total-3tKGEB {
  background: var(--background-alt);
}
#app-mount .sidebar-2K8pFh .userLimit-64AFxe .wrapper-pZmgj4 span.total-3tKGEB:after {
  content: none;
}

#app-mount .sidebar-2K8pFh .container-2Rl01u {
  background: var(--toolbar-background);
}
#app-mount .sidebar-2K8pFh .container-2Rl01u.selected-WP3kCM .header-2o-2hj {
  background: var(--background);
  border-bottom: 1px solid transparent;
}
#app-mount .sidebar-2K8pFh .container-2Rl01u.selected-WP3kCM .header-2o-2hj .name-3YKhmS {
  color: var(--toolbar-text-normal);
}
#app-mount .sidebar-2K8pFh .container-2Rl01u.selected-WP3kCM .header-2o-2hj .button-1w5pas {
  border-top: 5px solid var(--toolbar-text-normal);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj {
  box-shadow: none;
  border-bottom: 1px solid var(--toolbar-border);
  border-right: 1px solid var(--toolbar-border);
  background-color: var(--toolbar-background);
  height: var(--toolbar-height);
  padding: var(--spacing);
  transition: none;
  position: absolute;
  left: calc(var(--noasw-channel-header) * -1);
  top: calc(var(--toolbar-height) * -1);
  width: calc(100% + var(--noasw-channel-header));
  z-index: 11;
  filter: none;
  cursor: var(--cursor);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt {
  margin-right: var(--spacing);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .disableColor-MwOAZf,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .iconBackgroundTierNone-3MPhMJ,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .iconBackgroundTierOne-2LhaMB,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .iconBackgroundTierThree-3qw3JX,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .iconBackgroundTierTwo-3bCmdc {
  color: var(--toolbar-background-active);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .iconTierNone-3xOaeG {
  color: var(--toolbar-text-muted);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .bannerVisible-14J9lQ .iconBackgroundTierOne-2LhaMB,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .bannerVisible-14J9lQ .iconBackgroundTierThree-3qw3JX,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .bannerVisible-14J9lQ .iconBackgroundTierTwo-3bCmdc,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .iconTierOne-BHC2T8,
#app-mount .sidebar-2K8pFh .header-2o-2hj .guildIconContainer-E1JUVt .iconTierTwo-_1edeM {
  color: var(--toolbar-text-normal);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj h1 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  color: var(--toolbar-text-normal);
  -webkit-user-select: none;
          user-select: none;
  line-height: normal;
}
#app-mount .sidebar-2K8pFh .header-2o-2hj h1:before {
  display: block;
  content: "Current Server";
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  color: var(--toolbar-text-muted);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj .button-1w5pas {
  transform-origin: center;
  transition: none;
  position: absolute;
  margin: 0;
  right: var(--spacing);
  top: calc(var(--toolbar-height) / 2 - 2px);
  width: 0;
  height: 0;
  border-left: 5px solid transparent;
  border-right: 5px solid transparent;
  border-top: 5px solid var(--toolbar-text-muted);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj .button-1w5pas g {
  display: none;
}
#app-mount .sidebar-2K8pFh .header-2o-2hj .button-1w5pas.open-1Te94t {
  transform: rotate(180deg);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj:hover {
  background-color: var(--toolbar-background-hover);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj:hover .name-3YKhmS {
  color: var(--toolbar-text-focus);
}
#app-mount .sidebar-2K8pFh .header-2o-2hj:hover .button-1w5pas {
  border-top: 5px solid var(--toolbar-text-focus);
}

.verified-1eC5dy {
  color: rgb(var(--status-green));
}

.partnered-3nJayh {
  color: var(--accent-solid);
}

.theme-light #app-mount .sidebar-2K8pFh .container-2Rl01u.selected-WP3kCM .header-2o-2hj {
  border-right: none;
}
.theme-light #app-mount .sidebar-2K8pFh .container-2Rl01u.selected-WP3kCM .header-2o-2hj h1 {
  color: var(--text-focus);
}
.theme-light #app-mount .sidebar-2K8pFh .container-2Rl01u.selected-WP3kCM .header-2o-2hj .button-1w5pas {
  border-top: 5px solid var(--text-focus);
}

#app-mount .panels-j1Uci_ {
  background: var(--background-light);
  border-right: 1px solid var(--base-border);
  position: relative;
  box-sizing: border-box;
}
#app-mount .panels-j1Uci_::before {
  content: "";
  top: 0;
  left: 0;
  width: 100%;
  height: 1px;
  border-top: 1px solid var(--base-border);
  position: absolute;
}
#app-mount .panels-j1Uci_ button {
  height: var(--avatar-size-sm);
  flex: 1;
  border-radius: 0;
  transition: none;
  cursor: var(--cursor);
}
#app-mount .panels-j1Uci_ button svg {
  height: 16px;
  color: var(--text-normal);
}
#app-mount .panels-j1Uci_ button svg path[d="M19.738 10H22V14H19.739C19.498 14.931 19.1 15.798 18.565 16.564L20 18L18 20L16.565 18.564C15.797 19.099 14.932 19.498 14 19.738V22H10V19.738C9.069 19.498 8.203 19.099 7.436 18.564L6 20L4 18L5.436 16.564C4.901 15.799 4.502 14.932 4.262 14H2V10H4.262C4.502 9.068 4.9 8.202 5.436 7.436L4 6L6 4L7.436 5.436C8.202 4.9 9.068 4.502 10 4.262V2H14V4.261C14.932 4.502 15.797 4.9 16.565 5.435L18 3.999L20 5.999L18.564 7.436C19.099 8.202 19.498 9.069 19.738 10ZM12 16C14.2091 16 16 14.2091 16 12C16 9.79086 14.2091 8 12 8C9.79086 8 8 9.79086 8 12C8 14.2091 9.79086 16 12 16Z"] {
  d: path("M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z");
  transform: scale(1.35) translateY(1px);
}
#app-mount .panels-j1Uci_ button svg path[d="M12 2.00305C6.486 2.00305 2 6.48805 2 12.0031V20.0031C2 21.1071 2.895 22.0031 4 22.0031H6C7.104 22.0031 8 21.1071 8 20.0031V17.0031C8 15.8991 7.104 15.0031 6 15.0031H4V12.0031C4 7.59105 7.589 4.00305 12 4.00305C16.411 4.00305 20 7.59105 20 12.0031V15.0031H18C16.896 15.0031 16 15.8991 16 17.0031V20.0031C16 21.1071 16.896 22.0031 18 22.0031H20C21.104 22.0031 22 21.1071 22 20.0031V12.0031C22 6.48805 17.514 2.00305 12 2.00305Z"] {
  d: path("M12 8.02c0 1.09-.45 2.09-1.17 2.83l-.67-.67c.55-.56.89-1.31.89-2.16 0-.85-.34-1.61-.89-2.16l.67-.67A3.99 3.99 0 0112 8.02zM7.72 2.28L4 6H2c-.55 0-1 .45-1 1v2c0 .55.45 1 1 1h2l3.72 3.72c.47.47 1.28.14 1.28-.53V2.81c0-.67-.81-1-1.28-.53zm5.94.08l-.67.67a6.996 6.996 0 012.06 4.98c0 1.94-.78 3.7-2.06 4.98l.67.67A7.973 7.973 0 0016 8c0-2.22-.89-4.22-2.34-5.66v.02zm-1.41 1.41l-.69.67a5.05 5.05 0 011.48 3.58c0 1.39-.56 2.66-1.48 3.56l.69.67A5.971 5.971 0 0014 8.02c0-1.65-.67-3.16-1.75-4.25z");
  transform: scale(1.35) translateY(1px);
}
#app-mount .panels-j1Uci_ button svg path[d="M6.16204 15.0065C6.10859 15.0022 6.05455 15 6 15H4V12C4 7.588 7.589 4 12 4C13.4809 4 14.8691 4.40439 16.0599 5.10859L17.5102 3.65835C15.9292 2.61064 14.0346 2 12 2C6.486 2 2 6.485 2 12V19.1685L6.16204 15.0065Z"] {
  d: path("M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z");
  transform: scale(1.35) translateY(1px) translateX(1px);
}
#app-mount .panels-j1Uci_ button svg path[d="M6.16204 15.0065C6.10859 15.0022 6.05455 15 6 15H4V12C4 7.588 7.589 4 12 4C13.4809 4 14.8691 4.40439 16.0599 5.10859L17.5102 3.65835C15.9292 2.61064 14.0346 2 12 2C6.486 2 2 6.485 2 12V19.1685L6.16204 15.0065Z"] ~ path {
  display: none;
}
#app-mount .panels-j1Uci_ button svg .strikethrough-1n4ekb {
  color: currentColor;
}
#app-mount .panels-j1Uci_ button:hover {
  background: var(--accent-solid) !important;
  box-shadow: none;
}
#app-mount .panels-j1Uci_ button:hover svg {
  color: var(--white);
}
#app-mount .panels-j1Uci_ .activityPanel-28dQGo {
  border: none;
}
#app-mount .panels-j1Uci_ .container-1giJp5 {
  position: relative;
  border: none;
}
#app-mount .panels-j1Uci_ .subtext-3CDbHg {
  color: var(--text-focus);
}
#app-mount .panels-j1Uci_ .channel-1TmDQ6 {
  font-size: var(--font-size-sm);
}
#app-mount .panels-j1Uci_ .container-1giJp5 {
  padding: var(--spacing);
}
#app-mount .panels-j1Uci_ .container-1giJp5 .inner-tyMogq {
  flex: 0;
  min-width: 18px;
}
#app-mount .panels-j1Uci_ .container-1giJp5 .horizontal-1ae9ci > .flex-1xMQg5:last-child {
  position: relative;
  z-index: 1;
  display: flex;
  justify-content: flex-end;
  background: var(--background);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  width: calc(100% - 28px);
  box-sizing: border-box;
  overflow: hidden;
}
#app-mount .panels-j1Uci_ .container-1giJp5 .horizontal-1ae9ci > .flex-1xMQg5:last-child button {
  min-width: 41.8px;
  flex: 0;
}
#app-mount .panels-j1Uci_ .container-1giJp5 .disabledButtonWrapper-3wH6-b {
  flex: none;
  margin-right: 0;
}
#app-mount .panels-j1Uci_ .container-1giJp5 .disabledButtonWrapper-3wH6-b button {
  flex: 0;
  width: 100%;
}
#app-mount .panels-j1Uci_ .rtcConnectionStatus-2-jIsi .statusWithPopout-3ZfFol {
  position: absolute;
  font-size: 0;
  top: calc(var(--spacing) + 1px);
  left: 39px;
  background: transparent;
  width: 40.8px;
  height: 24px;
  z-index: 2;
  border-radius: var(--border-radius) 0 0 var(--border-radius);
}
#app-mount .panels-j1Uci_ .rtcConnectionStatus-2-jIsi .statusWithPopout-3ZfFol .contents-18-Yxp {
  font-size: 0;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16"><path fill-rule="evenodd" d="M6 2a.75.75 0 01.696.471L10 10.731l1.304-3.26A.75.75 0 0112 7h3.25a.75.75 0 010 1.5h-2.742l-1.812 4.528a.75.75 0 01-1.392 0L6 4.77 4.696 8.03A.75.75 0 014 8.5H.75a.75.75 0 010-1.5h2.742l1.812-4.529A.75.75 0 016 2z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16"><path fill-rule="evenodd" d="M6 2a.75.75 0 01.696.471L10 10.731l1.304-3.26A.75.75 0 0112 7h3.25a.75.75 0 010 1.5h-2.742l-1.812 4.528a.75.75 0 01-1.392 0L6 4.77 4.696 8.03A.75.75 0 014 8.5H.75a.75.75 0 010-1.5h2.742l1.812-4.529A.75.75 0 016 2z"></path></svg>') center/cover no-repeat;
  background: var(--text-normal);
  width: 16px;
  height: 16px;
}
#app-mount .panels-j1Uci_ .rtcConnectionStatus-2-jIsi .statusWithPopout-3ZfFol:hover .contents-18-Yxp {
  background: var(--white);
}
#app-mount .panels-j1Uci_ .rtcConnectionStatus-2-jIsi + a {
  display: none;
}
#app-mount .panels-j1Uci_ .actionButtons-14eAc_ {
  position: absolute;
  top: var(--spacing);
  left: calc(var(--spacing) + 70px);
  margin-top: 0;
  z-index: 1;
  height: 27px;
}
#app-mount .panels-j1Uci_ .actionButtons-14eAc_ button {
  margin: 1px 0 0;
  padding: 0;
  min-height: var(--avatar-size-sm);
  width: 41.8px;
  font-size: 0;
  min-width: unset;
  border: none;
  background: transparent;
}
#app-mount .panels-j1Uci_ .actionButtons-14eAc_ .buttonIcon-Od8mYw {
  margin-right: 0;
}
#app-mount .panels-j1Uci_ > .container-3baos1 {
  padding: var(--spacing);
  height: auto;
  box-sizing: border-box;
  margin-bottom: 0;
  overflow: visible;
  border-top: 1px solid var(--base-border);
}
#app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp {
  position: absolute;
  left: var(--sidebar-width);
  margin: 0 var(--spacing);
  z-index: 10;
}
#app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp:hover .wrapper-3t9DeA, #app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp[aria-expanded=true] .wrapper-3t9DeA {
  box-shadow: 0 0 0 1px var(--accent-solid);
  transition: 100ms ease;
}
#app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp:hover .wrapper-3t9DeA rect:not([fill=transparent]), #app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp[aria-expanded=true] .wrapper-3t9DeA rect:not([fill=transparent]) {
  transition: 100ms ease;
  stroke: var(--accent-solid);
}
#app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp .wrapper-3t9DeA {
  width: var(--avatar-size-sm) !important;
  height: var(--avatar-size-sm) !important;
  opacity: 1;
  cursor: var(--cursor);
}
#app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp .wrapper-3t9DeA svg[x="14.5"] {
  x: 0;
  y: 0;
}
#app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp .wrapper-3t9DeA svg[x="14.5"] mask rect[x*="8."]:not([x*="7."]) {
  x: 12;
  y: 12.5;
}
#app-mount .panels-j1Uci_ > .container-3baos1 .avatarWrapper-2yR4wp .wrapper-3t9DeA svg[x="14.5"] rect {
  x: 10px;
  y: 8px;
}
#app-mount .panels-j1Uci_ > .container-3baos1 .nameTag-3uD-yy {
  display: none;
}
#app-mount .panels-j1Uci_ > .container-3baos1 .directionRow-3v3tfG {
  display: flex;
  width: 100%;
  background: var(--background);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  overflow: hidden;
}
#app-mount .panels-j1Uci_ .title-eS5yk3 {
  font-size: var(--font-size);
}

#app-mount .sidebar-2K8pFh .unreadTop-73gZ2_ .bar-30k2ka {
  border-bottom: 1px solid var(--base-border);
}
#app-mount .sidebar-2K8pFh .unreadBottom-3hWQ7c .bar-30k2ka {
  border-top: 1px solid var(--base-border);
}
#app-mount .sidebar-2K8pFh .unread-1s3J68 {
  padding: 0;
  height: auto;
}
#app-mount .sidebar-2K8pFh .bar-30k2ka {
  border-radius: 0;
  background: var(--background-light);
  opacity: 1;
  height: auto;
  box-shadow: none;
  line-height: normal;
  padding: var(--spacing-half) 0;
  transform: none !important;
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  text-transform: none;
  position: relative;
  width: 100%;
  border-right: 1px solid var(--base-border);
  box-sizing: border-box;
}
#app-mount .sidebar-2K8pFh .bar-30k2ka.unread-1xRYoj {
  color: var(--text-normal);
}
#app-mount .sidebar-2K8pFh .bar-30k2ka[aria-hidden=true] {
  display: none;
}
#app-mount .sidebar-2K8pFh .bar-30k2ka:before {
  content: none;
}

#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l {
  padding: var(--spacing-half) 0;
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 {
  color: var(--text-normal);
  height: 26px;
  padding-right: var(--spacing);
  padding-left: 20px;
  cursor: var(--cursor);
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 svg, #app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 .name-IbjUBS, #app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 .container-2ax-kl,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 svg,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 .container-2ax-kl,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 svg,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 .container-2ax-kl,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 svg,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 .container-2ax-kl {
  color: var(--text-normal);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 .arrow-gKvcEx,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 .arrow-gKvcEx,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 .arrow-gKvcEx,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 .arrow-gKvcEx {
  left: 4px;
  top: 7px;
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 .container-2ax-kl,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 .container-2ax-kl,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 .container-2ax-kl,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 .container-2ax-kl {
  text-transform: none;
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5.muted-1NRuDm,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5.muted-1NRuDm,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5.muted-1NRuDm,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5.muted-1NRuDm {
  color: var(--text-muted);
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5.muted-1NRuDm svg, #app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5.muted-1NRuDm .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5.muted-1NRuDm svg,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5.muted-1NRuDm .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5.muted-1NRuDm svg,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5.muted-1NRuDm .name-IbjUBS,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5.muted-1NRuDm svg,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5.muted-1NRuDm .name-IbjUBS {
  color: var(--text-muted);
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 .addButton-1BORro,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 .addButton-1BORro,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 .addButton-1BORro,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 .addButton-1BORro {
  height: 14px;
  width: 14px;
}
#app-mount .sidebar-2K8pFh .containerDefault-3GGEv_ .wrapper-CU3qI5 .addButton-1BORro svg,
#app-mount .sidebar-2K8pFh .containerDragAfter-3TEhpe .wrapper-CU3qI5 .addButton-1BORro svg,
#app-mount .sidebar-2K8pFh .containerDragBefore-3Dzc5x .wrapper-CU3qI5 .addButton-1BORro svg,
#app-mount .sidebar-2K8pFh .containerUserOver-1Tcb7l .wrapper-CU3qI5 .addButton-1BORro svg {
  height: 14px;
  width: 14px;
}

#app-mount .privateChannels-1nO12o {
  overflow: visible;
  width: var(--sidebar-width);
  background: var(--background);
}
#app-mount .privateChannels-1nO12o .searchBar-6Kv8R2 {
  background: var(--toolbar-background);
  border-bottom: 1px solid var(--toolbar-border);
  border-right: 1px solid var(--toolbar-border);
  height: var(--toolbar-height);
  box-shadow: none;
  position: absolute;
  left: calc(var(--container) * -1);
  top: calc(var(--toolbar-height) * -1);
  width: calc(var(--sidebar-width) + var(--noasw-channel-header));
  box-sizing: border-box;
  padding: 0 var(--spacing);
}
#app-mount .privateChannels-1nO12o .searchBar-6Kv8R2 button {
  box-sizing: border-box;
  background-color: var(--toolbar-search-background);
  border: 1px solid var(--toolbar-border);
  border-radius: var(--border-radius);
  height: var(--input-height);
  transform: translateZ(0);
  font-size: 0;
  box-shadow: none;
  position: relative;
  cursor: text;
  width: 100%;
  font-weight: var(--font-weight-normal);
  color: var(--toolbar-text-muted);
  padding: 0 var(--spacing-half);
  line-height: normal;
}
#app-mount .privateChannels-1nO12o .searchBar-6Kv8R2 button:before {
  content: "Where would you like to go?";
  font-size: var(--font-size);
}
#app-mount .privateChannels-1nO12o .privateChannelsHeaderContainer-3NB1K1 {
  padding: var(--spacing);
  height: auto;
  color: var(--text-normal);
  font-size: 12px;
  text-transform: none;
}
#app-mount .privateChannels-1nO12o .privateChannelRecipientsInviteButtonIcon-3A3uTc {
  display: none;
}
#app-mount .privateChannels-1nO12o .scroller-1JbKMe {
  background: var(--background);
}
#app-mount .privateChannels-1nO12o .scroller-1JbKMe div[style*="height: 8px"] {
  display: none;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O {
  margin: 0;
  max-width: 100%;
  padding: 0;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O .children-gzQq2t {
  margin-left: var(--spacing-half);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O .layout-2DM8Md {
  border-radius: 0;
  padding: 0 var(--spacing);
  cursor: var(--cursor);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O .name-uJV0GL {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O .avatar-3uk_u9 {
  margin-right: var(--spacing);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O .activityText-OW8WYb,
#app-mount .privateChannels-1nO12o .channel-2QD9_O .subtext-1RtU34 {
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-bold);
  color: var(--text-muted);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"], #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"] {
  border-left: 1px solid var(--base-border);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"] .children-gzQq2t, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"] .children-gzQq2t {
  display: none;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"], #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"], #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"] {
  width: 50%;
  display: inline-block;
  border-radius: 0;
  cursor: var(--cursor);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"] .layout-2DM8Md, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"] .layout-2DM8Md, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"] .layout-2DM8Md {
  justify-content: center;
  height: 30px;
  box-sizing: border-box;
  border-bottom: 1px solid var(--base-border);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"] .layout-2DM8Md .avatar-3uk_u9, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"] .layout-2DM8Md .avatar-3uk_u9, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"] .layout-2DM8Md .avatar-3uk_u9 {
  display: none;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"] .layout-2DM8Md .content-3QAtGj, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"] .layout-2DM8Md .content-3QAtGj, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"] .layout-2DM8Md .content-3QAtGj {
  flex-grow: 0;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"] .layout-2DM8Md:active, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"] .layout-2DM8Md:active, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"] .layout-2DM8Md:active {
  background: var(--background-modifier-hover);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"][href="/store"], #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"][href="/store"], #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"][href="/store"] {
  display: none;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"][href="/channels/@me"] + [href="/store"], #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"][href="/channels/@me"] + [href="/store"], #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"][href="/channels/@me"] + [href="/store"] {
  display: inline-block;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"].selected-aXhQR6 .layout-2DM8Md, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"].selected-aXhQR6 .layout-2DM8Md, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"].selected-aXhQR6 .layout-2DM8Md {
  background: transparent;
  box-shadow: inset 0 -3px 0px var(--accent-solid);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/channels/@me"].selected-aXhQR6 .layout-2DM8Md .name-uJV0GL, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/library"].selected-aXhQR6 .layout-2DM8Md .name-uJV0GL, #app-mount .privateChannels-1nO12o .channel-2QD9_O[href="/store"].selected-aXhQR6 .layout-2DM8Md .name-uJV0GL {
  color: var(--text-normal) !important;
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 {
  color: var(--white);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 .closeButton-2GCmT5 {
  display: block;
  background: var(--white);
}
#app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 .activityText-OW8WYb,
#app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 .name-uJV0GL,
#app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 .subtext-1RtU34 {
  color: var(--white) !important;
}
#app-mount .privateChannels-1nO12o .closeButton-2GCmT5 {
  z-index: 10;
  opacity: 1;
  background: var(--text-muted);
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/11px no-repeat;
}
#app-mount .privateChannels-1nO12o .closeButton-2GCmT5 path {
  display: none;
}
#app-mount .privateChannels-1nO12o .closeButton-2GCmT5:hover {
  background: var(--text-normal);
}
#app-mount .privateChannels-1nO12o .wrapper-3t9DeA {
  width: 26px !important;
  height: 26px !important;
}
#app-mount .privateChannels-1nO12o .wrapper-3t9DeA:before {
  right: -190px;
}
#app-mount .privateChannels-1nO12o .wrapper-3t9DeA:after {
  right: -190px;
}
#app-mount .privateChannels-1nO12o:hover .wrapper-3t9DeA:before {
  background: linear-gradient(90deg, transparent, var(--background-modifier-hover) 50%);
}
#app-mount .privateChannels-1nO12o:active .wrapper-3t9DeA:before {
  background: linear-gradient(90deg, transparent, var(--background-modifier-active) 50%);
}
#app-mount .privateChannels-1nO12o .empty-388osJ {
  display: none;
}

.theme-light #app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 {
  color: #fff;
}
.theme-light #app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 .activityText-OW8WYb,
.theme-light #app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 .name-uJV0GL,
.theme-light #app-mount .privateChannels-1nO12o .channel-2QD9_O.selected-aXhQR6 .subtext-1RtU34 {
  color: #fff !important;
}

#app-mount .guilds-1SWlCJ {
  border-right: 1px solid var(--base-border);
  box-sizing: border-box;
  background: transparent;
}
#app-mount .guilds-1SWlCJ .scroller-2TZvBN {
  background: var(--guilds-background);
  contain: none;
  padding-top: var(--noasw-padding);
}
#app-mount .guilds-1SWlCJ .listItemWrapper-3X98Pc:active,
#app-mount .guilds-1SWlCJ .circleButtonMask-2VNJsN:active,
#app-mount .guilds-1SWlCJ .blobContainer-239gwq:active {
  transform: none;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .childWrapper-anI2G9 {
  background: transparent !important;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL [class*=pill] {
  display: none;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .wrapper-25eVIn {
  display: flex;
  align-items: center;
  height: var(--toolbar-height);
  background: transparent !important;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .wrapper-25eVIn .wrapper-1BJsBx {
  background: transparent !important;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .listItem-2P_4kh {
  margin-bottom: 0;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .svg-1X37T1 {
  height: var(--toolbar-height);
  width: var(--server-icon-size);
  left: 50%;
  transform: translateX(-50%);
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .lowerBadge-29hYVK {
  margin-bottom: 28px;
  margin-right: 5px;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .lowerBadge-29hYVK .numberBadge-2s8kKX {
  box-shadow: 0 0 0 3px var(--guilds-background);
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .upperBadge-2XnnGB {
  top: 5px;
  right: 0px;
  transform: none !important;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .upperBadge-2XnnGB .downloadProgress-3lBtPV {
  top: 0;
  left: 0;
  width: 18px;
  height: 18px;
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .upperBadge-2XnnGB .downloadProgress-3lBtPV .circleBackgroundAlt-Eohdst {
  fill: var(--background);
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .upperBadge-2XnnGB .downloadProgress-3lBtPV .circleBackground-OqqxHM {
  fill: var(--background-light);
  stroke: var(--base-border);
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .upperBadge-2XnnGB .downloadProgress-3lBtPV .circleProgress-1EBmVn {
  stroke: var(--accent-solid);
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .upperBadge-2XnnGB .downloadProgress-3lBtPV .downloadIcon-3TWA3B {
  padding: var(--spacing-half);
  color: var(--text-normal);
}
#app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .upperBadge-2XnnGB .downloadProgress-3lBtPV .downloadIcon-3TWA3B path {
  d: path("M7.47 10.78a.75.75 0 001.06 0l3.75-3.75a.75.75 0 00-1.06-1.06L8.75 8.44V1.75a.75.75 0 00-1.5 0v6.69L4.78 5.97a.75.75 0 00-1.06 1.06l3.75 3.75zM3.75 13a.75.75 0 000 1.5h8.5a.75.75 0 000-1.5h-8.5z");
  transform: scale(1.5);
}
#app-mount .guilds-1SWlCJ .homeIcon-tEMBK1 {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24"><path fill-rule="evenodd" d="M1.75 1A1.75 1.75 0 000 2.75v9.5C0 13.216.784 14 1.75 14H3v1.543a1.457 1.457 0 002.487 1.03L8.061 14h6.189A1.75 1.75 0 0016 12.25v-9.5A1.75 1.75 0 0014.25 1H1.75zM1.5 2.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v9.5a.25.25 0 01-.25.25h-6.5a.75.75 0 00-.53.22L4.5 15.44v-2.19a.75.75 0 00-.75-.75h-2a.25.25 0 01-.25-.25v-9.5z"/><path d="M22.5 8.75a.25.25 0 00-.25-.25h-3.5a.75.75 0 010-1.5h3.5c.966 0 1.75.784 1.75 1.75v9.5A1.75 1.75 0 0122.25 20H21v1.543a1.457 1.457 0 01-2.487 1.03L15.939 20H10.75A1.75 1.75 0 019 18.25v-1.465a.75.75 0 011.5 0v1.465c0 .138.112.25.25.25h5.5a.75.75 0 01.53.22l2.72 2.72v-2.19a.75.75 0 01.75-.75h2a.25.25 0 00.25-.25v-9.5z"/></svg>') center/65% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24"><path fill-rule="evenodd" d="M1.75 1A1.75 1.75 0 000 2.75v9.5C0 13.216.784 14 1.75 14H3v1.543a1.457 1.457 0 002.487 1.03L8.061 14h6.189A1.75 1.75 0 0016 12.25v-9.5A1.75 1.75 0 0014.25 1H1.75zM1.5 2.75a.25.25 0 01.25-.25h12.5a.25.25 0 01.25.25v9.5a.25.25 0 01-.25.25h-6.5a.75.75 0 00-.53.22L4.5 15.44v-2.19a.75.75 0 00-.75-.75h-2a.25.25 0 01-.25-.25v-9.5z"/><path d="M22.5 8.75a.25.25 0 00-.25-.25h-3.5a.75.75 0 010-1.5h3.5c.966 0 1.75.784 1.75 1.75v9.5A1.75 1.75 0 0122.25 20H21v1.543a1.457 1.457 0 01-2.487 1.03L15.939 20H10.75A1.75 1.75 0 019 18.25v-1.465a.75.75 0 011.5 0v1.465c0 .138.112.25.25.25h5.5a.75.75 0 01.53.22l2.72 2.72v-2.19a.75.75 0 01.75-.75h2a.25.25 0 00.25-.25v-9.5z"/></svg>') center/65% no-repeat;
  background: var(--text-normal);
  width: 100%;
  height: 100%;
  transition: 150ms ease;
}
#app-mount .guilds-1SWlCJ .homeIcon-tEMBK1 path {
  display: none;
}
#app-mount .guilds-1SWlCJ .selected-bZ3Lue .homeIcon-tEMBK1 {
  background: var(--text-focus);
}
#app-mount .guilds-1SWlCJ .guildSeparator-3s64Iy {
  background: var(--base-border);
  height: 1px;
}
#app-mount .guilds-1SWlCJ .childWrapper-anI2G9 {
  background: var(--background-light);
  border-radius: var(--server-radius);
  font-size: 1em;
  font-weight: var(--font-weight-normal);
  overflow: hidden;
  cursor: var(--cursor);
}
#app-mount .guilds-1SWlCJ .wrapper-1BJsBx,
#app-mount .guilds-1SWlCJ .wrapper-25eVIn {
  cursor: var(--cursor);
  border-radius: var(--server-radius);
  overflow: hidden;
  background: var(--background-light);
  transition: 150ms ease;
}
#app-mount .guilds-1SWlCJ .wrapper-1BJsBx.selected-bZ3Lue,
#app-mount .guilds-1SWlCJ .wrapper-25eVIn.selected-bZ3Lue {
  background: var(--accent-solid);
}
#app-mount .guilds-1SWlCJ .wrapper-1BJsBx.selected-bZ3Lue .icon-27yU2q[src*="/assets/"],
#app-mount .guilds-1SWlCJ .wrapper-25eVIn.selected-bZ3Lue .icon-27yU2q[src*="/assets/"] {
  background: var(--white);
  transition: 150ms ease;
}
#app-mount .guilds-1SWlCJ .wrapper-1BJsBx.selected-bZ3Lue .childWrapper-anI2G9 {
  background: var(--accent-solid);
  color: var(--text-focus);
}
#app-mount .guilds-1SWlCJ .circleIconButton-jET_ig {
  background: var(--background-light);
  color: var(--text-normal);
  cursor: var(--cursor);
  border-radius: var(--server-radius);
}
#app-mount .guilds-1SWlCJ .circleIconButton-jET_ig path[d="M21 11.001H13V3.00098H11V11.001H3V13.001H11V21.001H13V13.001H21V11.001Z"] {
  d: path("M12 9H7v5H5V9H0V7h5V2h2v5h5v2z");
  transform: scale(1.25) translateX(3px) translateY(2px);
}
#app-mount .guilds-1SWlCJ .circleIconButton-jET_ig.selected-ugP_am {
  background-color: var(--accent-solid) !important;
  color: #fff;
}
#app-mount .guilds-1SWlCJ foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount .guilds-1SWlCJ .expandedFolderBackground-2sPsd- {
  background: var(--background-light);
}
#app-mount .guilds-1SWlCJ .expandedFolderBackground-2sPsd-.collapsed-1GMuSb {
  background: transparent;
}
#app-mount .guilds-1SWlCJ .wrapper-25eVIn {
  overflow: visible;
}
#app-mount .guilds-1SWlCJ .wrapper-25eVIn .numberBadge-2s8kKX {
  position: relative;
  top: 3px;
  left: 3px;
}
#app-mount .guilds-1SWlCJ .wrapper-25eVIn .icon-27yU2q[src*="/assets/"] {
  content: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg"/>');
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/40% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/40% no-repeat;
}
#app-mount .guilds-1SWlCJ .wrapper-25eVIn .icon-27yU2q[src*="/assets/"][src*="/assets/e1fb24a120bdd003a84e021b16ec3bef.png"], #app-mount .guilds-1SWlCJ .wrapper-25eVIn .icon-27yU2q[src*="/assets/"][src*="/assets/861ab526aa1fabb04c6b7da8074e3e21.png"], #app-mount .guilds-1SWlCJ .wrapper-25eVIn .icon-27yU2q[src*="/assets/"][src*="/assets/b8912961ea6ab32f0655d583bbc26b4f.png"], #app-mount .guilds-1SWlCJ .wrapper-25eVIn .icon-27yU2q[src*="/assets/"][src*="/assets/485a854d5171c8dc98088041626e6fea.png"], #app-mount .guilds-1SWlCJ .wrapper-25eVIn .icon-27yU2q[src*="/assets/"][src*="/assets/f810dc5fedb7175c43a3389aa890534f.png"], #app-mount .guilds-1SWlCJ .wrapper-25eVIn .icon-27yU2q[src*="/assets/"][src*="/assets/b3150d5cef84b9e82128a1131684f287.png"] {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088A6.78 6.78 0 0 1 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z"/></svg>') center/42% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088A6.78 6.78 0 0 1 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z"/></svg>') center/42% no-repeat;
}
#app-mount .guilds-1SWlCJ .expandedFolderBackground-2sPsd-,
#app-mount .guilds-1SWlCJ .folderIconWrapper-226oVY,
#app-mount .guilds-1SWlCJ .guildIcon-GuAC7C,
#app-mount .guilds-1SWlCJ .guildIconUnavailable-5PMHDN,
#app-mount .guilds-1SWlCJ .guildsError-b7zR5HX {
  border-radius: var(--server-radius);
}
#app-mount .guilds-1SWlCJ .wrapper-sa6paO {
  height: 100%;
}
#app-mount .guilds-1SWlCJ [class*=pill] span {
  border-radius: 0;
  max-height: 75%;
  background: var(--text-muted);
  width: 7px;
}
#app-mount .guilds-1SWlCJ .iconBadge-2wi9r4,
#app-mount .guilds-1SWlCJ .unavailableBadge-3k7iq_ {
  position: absolute;
  top: 0;
  left: calc(var(--icon) * -1);
  width: var(--icon);
  height: var(--icon);
  background: rgba(0, 0, 0, 0.6) !important;
  border-radius: 0;
}
#app-mount .guilds-1SWlCJ .iconBadge-2wi9r4 .icon-3s6X1M,
#app-mount .guilds-1SWlCJ .unavailableBadge-3k7iq_ .icon-3s6X1M {
  width: 18px;
  color: var(--white);
}
#app-mount .guilds-1SWlCJ .iconBadge-2wi9r4 .icon-3s6X1M path[d="M21.526 8.149C21.231 7.966 20.862 7.951 20.553 8.105L18 9.382V7C18 5.897 17.103 5 16 5H4C2.897 5 2 5.897 2 7V17C2 18.104 2.897 19 4 19H16C17.103 19 18 18.104 18 17V14.618L20.553 15.894C20.694 15.965 20.847 16 21 16C21.183 16 21.365 15.949 21.526 15.851C21.82 15.668 22 15.347 22 15V9C22 8.653 21.82 8.332 21.526 8.149Z"],
#app-mount .guilds-1SWlCJ .unavailableBadge-3k7iq_ .icon-3s6X1M path[d="M21.526 8.149C21.231 7.966 20.862 7.951 20.553 8.105L18 9.382V7C18 5.897 17.103 5 16 5H4C2.897 5 2 5.897 2 7V17C2 18.104 2.897 19 4 19H16C17.103 19 18 18.104 18 17V14.618L20.553 15.894C20.694 15.965 20.847 16 21 16C21.183 16 21.365 15.949 21.526 15.851C21.82 15.668 22 15.347 22 15V9C22 8.653 21.82 8.332 21.526 8.149Z"] {
  d: path("M15.2 2.09L10 5.72V3c0-.55-.45-1-1-1H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h8c.55 0 1-.45 1-1V9.28l5.2 3.63c.33.23.8 0 .8-.41v-10c0-.41-.47-.64-.8-.41z");
  transform: scale(1.45) translateY(1px);
}
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorBottom-BXS58x,
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorTop-gA6RCh {
  padding: 0;
}
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorBottom-BXS58x .active-1SSsBb:active,
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorTop-gA6RCh .active-1SSsBb:active {
  top: 0;
}
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorBottom-BXS58x .bar-30k2ka,
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorTop-gA6RCh .bar-30k2ka {
  width: var(--container);
  border-radius: 0;
  text-transform: capitalize;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  background: rgb(var(--status-red));
  color: var(--white);
  cursor: var(--cursor);
  opacity: 0;
}
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorBottom-BXS58x .bar-30k2ka[style*="translateY(0%)"],
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorTop-gA6RCh .bar-30k2ka[style*="translateY(0%)"] {
  opacity: 0.9;
}
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorBottom-BXS58x .bar-30k2ka[style*="translateY(0%)"]:hover,
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorTop-gA6RCh .bar-30k2ka[style*="translateY(0%)"]:hover {
  opacity: 1;
}
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorBottom-BXS58x {
  height: auto;
  width: auto;
}
#app-mount .guilds-1SWlCJ .unreadMentionsIndicatorTop-gA6RCh {
  top: var(--toolbar-height);
}
#app-mount .guilds-1SWlCJ .dragInner-_SHftW {
  background: var(--background);
  border-radius: var(--border-radius);
  border: 1px dashed var(--base-border);
  box-sizing: border-box;
}
#app-mount .guilds-1SWlCJ .folder-21wGz3.hover-2ji_A7 {
  background: transparent;
}

.theme-light #app-mount .guilds-1SWlCJ .childWrapper-anI2G9,
.theme-light #app-mount .guilds-1SWlCJ .circleIconButton-jET_ig,
.theme-light #app-mount .guilds-1SWlCJ .wrapper-1BJsBx,
.theme-light #app-mount .guilds-1SWlCJ .wrapper-25eVIn {
  background: var(--background-dark);
}
.theme-light #app-mount .guilds-1SWlCJ .wrapper-1BJsBx.selected-bZ3Lue .childWrapper-anI2G9 {
  color: var(--white);
}

#app-mount .chat-3bRxxu {
  background: var(--background-alt);
}
#app-mount .chat-3bRxxu .scroller-2LSbBU {
  overflow-x: hidden !important;
}
#app-mount .chat-3bRxxu .scrollerSpacer-avRLaA {
  display: none;
}
#app-mount .chat-3bRxxu .jumpToPresentBar-G1R9s6 {
  opacity: 1;
  left: calc(var(--spacing) - 2px);
  bottom: 0;
  border-radius: 0;
  min-height: auto;
  background: var(--background);
  padding: 0;
  cursor: var(--cursor);
  position: absolute;
  z-index: 10;
  box-shadow: var(--elevation-1);
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
}
#app-mount .chat-3bRxxu .jumpToPresentBar-G1R9s6 .barButtonMain-3K-jeJ {
  display: none;
}
#app-mount .chat-3bRxxu .jumpToPresentBar-G1R9s6 .barButtonAlt-mYL1lj {
  font-size: var(--font-size-sm);
  color: var(--text-normal);
  font-weight: var(--font-weight);
  padding: 0 var(--spacing);
  border: 1px solid var(--base-border);
  border-bottom: none;
  cursor: var(--cursor);
  border-radius: var(--border-radius) var(--border-radius) 0 0;
}
#app-mount .chat-3bRxxu .jumpToPresentBar-G1R9s6 .barButtonAlt-mYL1lj:hover {
  background: var(--background-modifier-hover);
}
#app-mount .chat-3bRxxu .jumpToPresentBar-G1R9s6 .barButtonAlt-mYL1lj:active {
  background: var(--background-modifier-active);
}
#app-mount .chat-3bRxxu .jumpToPresentBar-G1R9s6 .barButtonAlt-mYL1lj > svg {
  display: none;
}
#app-mount .chat-3bRxxu .jumpToPresentBar-G1R9s6:active {
  margin: 0;
}
#app-mount .chat-3bRxxu .newMessagesBar-265mhP {
  left: 0;
  right: 0;
  border-radius: 0;
  background: var(--background-light);
  border-bottom: 1px solid var(--base-border);
  box-shadow: none;
  opacity: 1;
  z-index: 100;
  min-height: auto;
  cursor: var(--cursor);
}
#app-mount .chat-3bRxxu .newMessagesBar-265mhP:active {
  padding: 0;
}
#app-mount .chat-3bRxxu .newMessagesBar-265mhP button {
  cursor: var(--cursor);
}
#app-mount .chat-3bRxxu .newMessagesBar-265mhP button.barButtonMain-3K-jeJ {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  height: 29px;
  padding: 0 var(--spacing);
  display: flex;
  align-items: center;
  justify-content: space-between;
}
#app-mount .chat-3bRxxu .newMessagesBar-265mhP button.barButtonMain-3K-jeJ:after {
  content: "";
  width: 16px;
  height: 16px;
  background: rgb(var(--status-yellow));
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-labelledby="__Octicon_Title_3" class="octicon status status-modified" version="1.1" viewBox="0 0 16 16"><title id="__Octicon_Title_3">Modified</title><path fill-rule="evenodd" d="M2.75 2.5h10.5a.25.25 0 01.25.25v10.5a.25.25 0 01-.25.25H2.75a.25.25 0 01-.25-.25V2.75a.25.25 0 01.25-.25zM13.25 1H2.75A1.75 1.75 0 001 2.75v10.5c0 .966.784 1.75 1.75 1.75h10.5A1.75 1.75 0 0015 13.25V2.75A1.75 1.75 0 0013.25 1zM8 10a2 2 0 100-4 2 2 0 000 4z"/></svg>') center/contain no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-labelledby="__Octicon_Title_3" class="octicon status status-modified" version="1.1" viewBox="0 0 16 16"><title id="__Octicon_Title_3">Modified</title><path fill-rule="evenodd" d="M2.75 2.5h10.5a.25.25 0 01.25.25v10.5a.25.25 0 01-.25.25H2.75a.25.25 0 01-.25-.25V2.75a.25.25 0 01.25-.25zM13.25 1H2.75A1.75 1.75 0 001 2.75v10.5c0 .966.784 1.75 1.75 1.75h10.5A1.75 1.75 0 0015 13.25V2.75A1.75 1.75 0 0013.25 1zM8 10a2 2 0 100-4 2 2 0 000 4z"/></svg>') center/contain no-repeat;
  position: relative;
  display: inline-block;
}
#app-mount .chat-3bRxxu .newMessagesBar-265mhP button.barButtonAlt-mYL1lj {
  display: none;
}
#app-mount .chat-3bRxxu .hasMore-3e72_v {
  margin: 0;
  box-shadow: none;
  background: var(--background);
  border-top: 1px solid var(--base-border);
  border-bottom: 1px solid var(--base-border);
  border-radius: 0;
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 {
  opacity: 1;
  position: absolute;
  top: 50%;
  left: 50%;
  flex-direction: column;
  background: var(--background);
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-1);
  border: 1px solid var(--base-border);
  height: -webkit-fit-content;
  height: -moz-fit-content;
  height: fit-content;
  width: 340px;
  height: 290px;
  box-sizing: border-box;
  display: flex;
  align-items: center;
  justify-content: center;
  padding: var(--spacing-double);
  pointer-events: none;
  margin-left: -170px;
  margin-top: -145px;
  animation: modal 150ms cubic-bezier(0.175, 0.885, 0.32, 1.275);
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .barButtonMain-3K-jeJ {
  font-size: 0;
  padding: 0;
  overflow: visible;
  margin: var(--spacing) 0;
  height: auto;
  line-height: normal;
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .barButtonMain-3K-jeJ:after {
  content: "Uh oh.";
  font-size: var(--font-size-xxl);
  font-weight: var(--font-weight-light);
  color: var(--text-normal);
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7:before {
  content: "";
  width: 100px;
  height: 100px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/1.svg") center/contain no-repeat;
  margin-bottom: var(--spacing);
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7:after {
  content: "There was a problem loading messages for this channel. Make sure you have a stable internet connection, then try agian.";
  font-size: var(--font-size);
  color: var(--text-muted);
  text-transform: none;
  text-align: center;
  line-height: normal;
  margin-bottom: var(--spacing);
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .barButtonAlt-mYL1lj,
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .spinner-1AwyAQ {
  order: 1;
  pointer-events: all;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--white);
  background-color: rgb(var(--accent));
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .barButtonAlt-mYL1lj:hover,
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .spinner-1AwyAQ:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .barButtonAlt-mYL1lj:focus,
#app-mount .chat-3bRxxu .messagesErrorBar-nyJGU7 .spinner-1AwyAQ:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}

#app-mount .messagesWrapper-1sRNjr {
  background: var(--background-alt);
  z-index: 1;
}
#app-mount .messagesWrapper-1sRNjr .scrollerSpacer-1Rp0XE {
  height: 0;
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg {
  padding: var(--spacing-triple);
  margin: 0;
  justify-content: center;
  flex-grow: 1;
  border: none;
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg h1 {
  margin: 0;
  margin-bottom: var(--spacing);
  font-size: var(--font-size-xxl);
  font-weight: var(--font-weight-light);
  color: var(--text-normal);
  max-width: calc(100% - var(--avatar-size-xl) - var(--spacing-double) - var(--spacing));
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg .description-1sDbzZ {
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  max-width: calc(100% - var(--avatar-size-xl) - var(--spacing-double) - var(--spacing));
  -webkit-user-select: text;
          user-select: text;
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg .wrapper-3t9DeA {
  width: var(--avatar-size-xl) !important;
  height: var(--avatar-size-xl) !important;
  position: absolute;
  right: var(--spacing-double);
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg .emptyChannelIcon-cc932w {
  background: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/cover no-repeat;
  border-radius: 0;
  position: absolute;
  margin: 0;
  right: var(--spacing-triple);
  height: 72px;
  width: 72px;
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg .button-2OOM0p {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  text-decoration: none;
  display: inline-flex;
  align-items: center;
  text-transform: capitalize;
  color: var(--white);
  background-color: rgb(var(--accent));
  margin-top: var(--spacing-half);
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg .button-2OOM0p:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .messagesWrapper-1sRNjr .container-3RCQyg .button-2OOM0p:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM {
  padding: var(--spacing-double) var(--spacing-double) 0;
  padding-top: calc(var(--spacing) * 6);
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .hasDivider-20M1le {
  border: none;
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g {
  max-width: 600px;
  width: 100%;
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g:before {
  content: "";
  width: 90%;
  height: 200px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/3.svg") center/contain no-repeat;
          mask: url("https://discordstyles.github.io/Slate/assets/illustrations/3.svg") center/contain no-repeat;
  margin-bottom: var(--spacing);
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .titleName-3-Lp3Z {
  font-size: var(--font-size-xxl);
  font-weight: var(--font-weight-light);
  line-height: 1.5;
  color: var(--text-normal);
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .titleName-3-Lp3Z p:first-child {
  display: none;
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .subtitle-2UIIw0 {
  margin: 0;
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .cardWrapper-2R6-SX .card-3RzMcx {
  margin: 0;
  border-radius: 0;
  background: transparent;
  border: 1px solid var(--base-border);
  border-top: none;
  padding: var(--spacing-double);
  cursor: var(--cursor);
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .cardWrapper-2R6-SX .card-3RzMcx .icon-2ou77m {
  display: none;
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .cardWrapper-2R6-SX .card-3RzMcx .checkmark-3rush5 {
  background: transparent;
  padding: 0;
  color: rgb(var(--status-green));
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .cardWrapper-2R6-SX .card-3RzMcx .cardHeader-2Wz67Q {
  margin: 0;
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .cardWrapper-2R6-SX .card-3RzMcx.completed-13TrxW .cardHeader-2Wz67Q {
  opacity: 1;
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .cardWrapper-2R6-SX:nth-child(2) .card-3RzMcx {
  border-top: 1px solid var(--base-border);
  border-radius: 3px 3px 0 0;
  margin-top: var(--spacing-double);
}
#app-mount .messagesWrapper-1sRNjr .container-3zqIcM .inner-3GZ54g .cardWrapper-2R6-SX:last-child .card-3RzMcx {
  border-radius: 0 0 3px 3px;
}

#app-mount .chatContent-a9vAAp .divider-JfaTT5 {
  height: auto;
  margin: 0;
  padding: var(--spacing-half) 0;
  border-top: 1px solid var(--base-border);
  background: var(--background);
  top: 0;
}
#app-mount .chatContent-a9vAAp .divider-JfaTT5 .content-1o0f9g {
  background: transparent;
  font-size: var(--font-size-xsm);
  padding: 0 var(--spacing) 0 0;
}
#app-mount .chatContent-a9vAAp .divider-JfaTT5 + .groupStart-23k01U {
  margin-top: 0;
}
#app-mount .chatContent-a9vAAp .divider-JfaTT5.isUnread-3Ef-o9 {
  border-bottom: 1px solid var(--base-border);
}
#app-mount .chatContent-a9vAAp .divider-JfaTT5.isUnread-3Ef-o9 .unreadPill-2HyYtt {
  position: unset;
  background: transparent;
  font-size: var(--font-size-xsm);
  color: rgba(var(--status-red), 1);
  padding: 0;
}
#app-mount .chatContent-a9vAAp .divider-JfaTT5.isUnread-3Ef-o9 .unreadPill-2HyYtt svg {
  display: none;
}
#app-mount .chatContent-a9vAAp .divider-JfaTT5.isUnread-3Ef-o9 + .groupStart-23k01U {
  margin-top: calc(var(--spacing) - 12px);
}

#app-mount .group-spacing-16 .groupStart-23k01U {
  margin: 0;
}
#app-mount .headerText-3Uvj1Y {
  display: flex;
  margin: 0;
}
#app-mount .wrapper-2a6GCs {
  background: transparent !important;
  min-height: unset;
}
#app-mount .wrapper-2a6GCs.groupStart-23k01U {
  border-top: 1px solid var(--base-border);
  min-height: auto;
}
#app-mount .wrapper-2a6GCs.groupStart-23k01U.cozy-3raOZG {
  padding-top: var(--spacing);
}
#app-mount .wrapper-2a6GCs.groupStart-23k01U.compact-T3H92H {
  margin-top: 0;
}
#app-mount .wrapper-2a6GCs .username-1A8OIy {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
  margin: 0;
}
#app-mount .wrapper-2a6GCs .markup-2BOw-j {
  font-size: var(--font-size);
  margin-left: 0;
  padding-left: 0;
  line-height: var(--line-height);
  font-weight: var(--font-weight-normal);
}
#app-mount .wrapper-2a6GCs.mentioned-xhSam7 {
  background: rgba(var(--accent), 0.1) !important;
}
#app-mount .wrapper-2a6GCs.mentioned-xhSam7 + .message-2qnXI6:not(.groupStart-23k01U) {
  margin-top: 0;
  padding-top: 0;
}
#app-mount .wrapper-2a6GCs.mentioned-xhSam7:not(:nth-last-child(2)) {
  padding-bottom: 4px;
}
#app-mount .wrapper-2a6GCs.mentioned-xhSam7:before {
  background-color: var(--accent-solid);
}
#app-mount .wrapper-2a6GCs.mentioned-xhSam7 .mention {
  background: transparent;
}
#app-mount .wrapper-2a6GCs.mentioned-xhSam7 .mention:hover {
  color: var(--text-normal);
}
#app-mount .wrapper-2a6GCs + .message-2qnXI6:not(.groupStart-23k01U) {
  margin-top: calc(var(--spacing) / -1);
  padding-top: 0;
}
#app-mount .wrapper-2a6GCs:last-child {
  padding-bottom: calc(var(--spacing) + 5px);
}
#app-mount .wrapper-2a6GCs .botTag-2WPJ74 {
  font-size: 0;
  padding: 0;
  height: auto;
  width: auto;
  background-color: var(--background-modifier-active);
  border-radius: var(--border-radius);
}
#app-mount .wrapper-2a6GCs .botTag-2WPJ74.botTagCozy-1fFsZk {
  margin: 0 var(--spacing-third);
  margin-right: 0;
  margin-top: 0;
  vertical-align: unset;
  top: 0;
}
#app-mount .wrapper-2a6GCs .botTag-2WPJ74 .botTagVerified-1klIIt {
  display: none;
}
#app-mount .wrapper-2a6GCs .botTag-2WPJ74::before {
  content: "";
  width: 16px;
  height: 16px;
  position: relative;
  display: flex;
  align-items: center;
  justify-content: center;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>') center/12px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>') center/12px no-repeat;
  background: var(--text-normal);
}
#app-mount .wrapper-2a6GCs .timestamp-3ZCmNB,
#app-mount .wrapper-2a6GCs .timestamp-1E3uAL {
  color: var(--text-muted);
  font-size: var(--font-size-xsm);
  margin-left: var(--spacing-half);
  font-weight: var(--font-weight-semibold);
  height: auto;
  line-height: normal;
  top: var(--spacing-third);
}
#app-mount .wrapper-2a6GCs .timestamp-3ZCmNB.latin24CompactTimeStamp-2V7XIQ,
#app-mount .wrapper-2a6GCs .timestamp-1E3uAL.latin24CompactTimeStamp-2V7XIQ {
  width: auto;
}
#app-mount .wrapper-2a6GCs .timestamp-3ZCmNB.alt-1uNpEt,
#app-mount .wrapper-2a6GCs .timestamp-1E3uAL.alt-1uNpEt {
  font-size: var(--font-size-xsm);
  height: auto;
  width: 40px;
  text-align: center;
}
#app-mount .wrapper-2a6GCs .contents-2mQqc9 .scrollableContainer-2NUZem.webkit-HjD9Er {
  padding: 0;
}
#app-mount .wrapper-2a6GCs .contents-2mQqc9 .scrollableContainer-2NUZem.webkit-HjD9Er .markup-2BOw-j {
  padding: 4px var(--spacing-half) 0;
}
#app-mount .wrapper-2a6GCs .edited-3sfAzf {
  color: var(--text-muted);
  font-size: var(--font-size-xsm);
  cursor: var(--cursor);
}
#app-mount .wrapper-2a6GCs .operations-36ENbA {
  font-size: 0;
  margin-top: var(--spacing-half);
  padding: var(--spacing-half) 0;
}
#app-mount .wrapper-2a6GCs .operations-36ENbA a {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  text-decoration: none;
  display: inline-flex;
  align-items: center;
  text-transform: capitalize;
}
#app-mount .wrapper-2a6GCs .operations-36ENbA a:last-child {
  color: var(--white);
  background-color: rgb(var(--accent));
  margin-left: var(--spacing);
}
#app-mount .wrapper-2a6GCs .operations-36ENbA a:last-child:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .wrapper-2a6GCs .operations-36ENbA a:last-child:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .wrapper-2a6GCs .operations-36ENbA a:first-child {
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  cursor: var(--cursor);
}
#app-mount .wrapper-2a6GCs .operations-36ENbA a:first-child:hover {
  border: 1px solid currentColor;
}
#app-mount .wrapper-2a6GCs .operations-36ENbA a:first-child:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG {
  margin: 0;
  padding-left: calc(var(--avatar-size) + var(--spacing) * 2);
  padding-bottom: var(--spacing);
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .container-1ov-mD {
  max-width: 100%;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .header-23xsNx {
  align-items: center;
  display: flex;
  min-height: unset;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .avatar-1BDn8e {
  border-radius: var(--avatar-radius) !important;
  box-shadow: 0 0 0 0.875px var(--base-border);
  margin: 0;
  top: var(--spacing);
  left: var(--spacing);
  width: var(--avatar-size) !important;
  height: var(--avatar-size) !important;
  transition: 100ms ease box-shadow;
  background-color: var(--background);
  position: absolute;
  overflow: hidden !important;
  cursor: var(--cursor);
  filter: none;
  transform: none;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .avatar-1BDn8e:hover {
  box-shadow: 0 0 0 1px var(--accent-solid);
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .avatar-1BDn8e[src*="/assets/"] {
  content: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg"/>');
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .avatar-1BDn8e[src*="/assets/"] + .header-23xsNx + .messageContent-2qWWxC::after {
  content: "";
  top: var(--spacing);
  left: var(--spacing);
  width: var(--avatar-size);
  height: var(--avatar-size);
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/40% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/40% no-repeat;
  position: absolute;
  z-index: 1;
  pointer-events: none;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .wrapper-3t9DeA {
  width: var(--avatar-size) !important;
  height: var(--avatar-size) !important;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .wrapper-3t9DeA foreignObject:after {
  content: none;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .wrapper-3t9DeA img {
  border-radius: 0;
  -webkit-clip-path: none;
          clip-path: none;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .emoji {
  width: calc(var(--font-size) * 1.6);
  height: calc(var(--font-size) * 1.6);
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .emoji.jumboable {
  width: calc(var(--font-size) * 4);
  height: calc(var(--font-size) * 4);
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .emotewrapper:hover::after {
  content: "";
  width: 16px;
  height: 16px;
  top: -7px;
  right: -7px;
  background: var(--background);
  border: 1px solid var(--base-border);
  border-radius: 50%;
  position: absolute;
  box-sizing: border-box;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .emotewrapper .fav {
  position: absolute;
  width: 16px;
  height: 16px;
  top: -7px;
  right: -7px;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24"><path fill-rule="evenodd" d="M12 .25a.75.75 0 01.673.418l3.058 6.197 6.839.994a.75.75 0 01.415 1.279l-4.948 4.823 1.168 6.811a.75.75 0 01-1.088.791L12 18.347l-6.117 3.216a.75.75 0 01-1.088-.79l1.168-6.812-4.948-4.823a.75.75 0 01.416-1.28l6.838-.993L11.328.668A.75.75 0 0112 .25zm0 2.445L9.44 7.882a.75.75 0 01-.565.41l-5.725.832 4.143 4.038a.75.75 0 01.215.664l-.978 5.702 5.121-2.692a.75.75 0 01.698 0l5.12 2.692-.977-5.702a.75.75 0 01.215-.664l4.143-4.038-5.725-.831a.75.75 0 01-.565-.41L12 2.694z"/></svg>') center/70% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24"><path fill-rule="evenodd" d="M12 .25a.75.75 0 01.673.418l3.058 6.197 6.839.994a.75.75 0 01.415 1.279l-4.948 4.823 1.168 6.811a.75.75 0 01-1.088.791L12 18.347l-6.117 3.216a.75.75 0 01-1.088-.79l1.168-6.812-4.948-4.823a.75.75 0 01.416-1.28l6.838-.993L11.328.668A.75.75 0 0112 .25zm0 2.445L9.44 7.882a.75.75 0 01-.565.41l-5.725.832 4.143 4.038a.75.75 0 01.215.664l-.978 5.702 5.121-2.692a.75.75 0 01.698 0l5.12 2.692-.977-5.702a.75.75 0 01.215-.664l4.143-4.038-5.725-.831a.75.75 0 01-.565-.41L12 2.694z"/></svg>') center/70% no-repeat;
  background: var(--text-muted);
  z-index: 1;
  padding: 0;
  box-sizing: border-box;
  border: 1px solid var(--base-border);
  border-radius: 50%;
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .emotewrapper .fav:hover {
  background: var(--text-normal);
}
#app-mount .wrapper-2a6GCs.cozy-3raOZG .emotewrapper .fav.active {
  background: rgb(var(--status-yellow));
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25z"/></svg>') center/70% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16"><path fill-rule="evenodd" d="M8 .25a.75.75 0 01.673.418l1.882 3.815 4.21.612a.75.75 0 01.416 1.279l-3.046 2.97.719 4.192a.75.75 0 01-1.088.791L8 12.347l-3.766 1.98a.75.75 0 01-1.088-.79l.72-4.194L.818 6.374a.75.75 0 01.416-1.28l4.21-.611L7.327.668A.75.75 0 018 .25z"/></svg>') center/70% no-repeat;
}
#app-mount .compact-T3H92H {
  padding: var(--spacing-half) 0;
  padding-left: 70px !important;
}
#app-mount .compact-T3H92H .contents-2mQqc9 {
  padding-left: 0;
  margin: 0;
  overflow: visible !important;
}
#app-mount .compact-T3H92H .emoji {
  width: calc(var(--font-size) * 1.6);
  height: calc(var(--font-size) * 1.6);
}
#app-mount .compact-T3H92H .emoji.jumboable {
  width: calc(var(--font-size) * 2);
  height: calc(var(--font-size) * 2);
}
#app-mount .expanded-13sWhZ {
  background: rgba(var(--status-red), 0.1);
  border-left: 2px solid rgb(var(--status-red));
}
#app-mount .blockedSystemMessage-2Rk1ek .blockedMessageText-1fRjos {
  position: relative;
  top: 3px;
}
#app-mount .blockedIcon-IrnkVA {
  position: relative;
  top: 2px;
}
#app-mount .systemMessage-1I9LCe.compact-T3H92H,
#app-mount .blockedSystemMessage-2Rk1ek.compact-T3H92H {
  padding-left: calc(10px + var(--spacing-double)) !important;
}
#app-mount .systemMessage-1I9LCe .content-2M3n_H,
#app-mount .blockedSystemMessage-2Rk1ek .content-2M3n_H {
  font-size: var(--font-size);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  display: flex;
  align-items: center;
}
#app-mount .systemMessage-1I9LCe .content-2M3n_H a,
#app-mount .blockedSystemMessage-2Rk1ek .content-2M3n_H a {
  color: var(--text-normal);
}
#app-mount .systemMessage-1I9LCe .container-3-pyIM,
#app-mount .blockedSystemMessage-2Rk1ek .container-3-pyIM {
  padding: var(--spacing-third) 0;
}
#app-mount .systemMessage-1I9LCe .iconContainer-3GkGRf,
#app-mount .blockedSystemMessage-2Rk1ek .iconContainer-3GkGRf {
  margin: 0;
  padding: 0;
  width: calc(var(--avatar-size) + var(--spacing) * 2);
  margin-top: 1px;
}
#app-mount .systemMessage-1I9LCe .iconContainer-3GkGRf .iconSize-2tmqqh,
#app-mount .blockedSystemMessage-2Rk1ek .iconContainer-3GkGRf .iconSize-2tmqqh {
  background-size: cover;
  width: var(--font-size-md);
  height: var(--font-size-md);
}
#app-mount .systemMessage-1I9LCe .iconContainer-3GkGRf .blockedIcon-IrnkVA,
#app-mount .blockedSystemMessage-2Rk1ek .iconContainer-3GkGRf .blockedIcon-IrnkVA {
  background: var(--text-muted);
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/12px no-repeat;
}
#app-mount .systemMessage-1I9LCe .iconContainer-3GkGRf .blockedIcon-IrnkVA path,
#app-mount .blockedSystemMessage-2Rk1ek .iconContainer-3GkGRf .blockedIcon-IrnkVA path {
  display: none;
}
#app-mount .systemMessage-1I9LCe .blockedAction-2ZyU8z,
#app-mount .blockedSystemMessage-2Rk1ek .blockedAction-2ZyU8z {
  color: var(--text-link);
}
#app-mount .localBot-GrCgVt {
  background: rgba(var(--accent), 0.1) !important;
}
#app-mount .localBot-GrCgVt.cozyMessage-3V1Y8y:after {
  content: "";
  border-radius: calc(var(--border-radius) / 1.5);
  box-shadow: 0 0 0 0.875px var(--base-border);
  top: var(--spacing);
  left: var(--spacing);
  width: var(--avatar-size);
  height: var(--avatar-size);
  background: var(--background-light);
  position: absolute;
  pointer-events: none;
}
#app-mount .localBot-GrCgVt .botTagRegular-2HEhHi {
  display: none;
}
#app-mount .localBot-GrCgVt .avatar-1BDn8e {
  opacity: 0;
}
#app-mount .localBot-GrCgVt:before {
  background: var(--accent-solid);
}
#app-mount .localBot-GrCgVt .container-1ov-mD {
  display: block;
  padding: 0 !important;
}
#app-mount .localBot-GrCgVt .container-1ov-mD .localBotMessage-3cUzun {
  margin: 0;
  font-size: 0;
}
#app-mount .localBot-GrCgVt .container-1ov-mD .localBotMessage-3cUzun a {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  text-decoration: none;
  display: inline-flex;
  align-items: center;
  text-transform: capitalize;
  color: var(--white);
  background-color: rgb(var(--accent));
  margin-top: var(--spacing-half);
}
#app-mount .localBot-GrCgVt .container-1ov-mD .localBotMessage-3cUzun a:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .localBot-GrCgVt .container-1ov-mD .localBotMessage-3cUzun a:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .wrapper-2aW0bm {
  background: var(--background);
  box-shadow: none;
  height: 24px;
  top: 4px;
  border-radius: var(--border-radius);
  overflow: hidden;
  box-sizing: border-box;
  margin: 0;
}
#app-mount .separator-42rNt0 {
  display: none;
}
#app-mount .container-3npvBV {
  top: -17px;
}
#app-mount .container-3npvBV .button-1ZiXG9 {
  height: 100%;
  padding: 0;
  width: auto;
  color: var(--text-normal);
  border-radius: 0;
  cursor: var(--cursor);
  box-sizing: border-box;
  border-top: 1px solid var(--base-border);
  border-bottom: 1px solid var(--base-border);
}
#app-mount .container-3npvBV .button-1ZiXG9:hover {
  background: var(--background-modifier-hover);
}
#app-mount .container-3npvBV .button-1ZiXG9:active {
  background: var(--background-modifier-active);
}
#app-mount .container-3npvBV .button-1ZiXG9.selected-LCBEAU {
  color: var(--white);
  background: var(--accent-solid);
}
#app-mount .container-3npvBV .button-1ZiXG9:first-child {
  border-left: 1px solid var(--base-border);
  border-radius: var(--border-radius) 0 0 var(--border-radius);
}
#app-mount .container-3npvBV .button-1ZiXG9:last-child {
  border-right: 1px solid var(--base-border);
  border-radius: 0 var(--border-radius) var(--border-radius) 0;
}
#app-mount .container-3npvBV .button-1ZiXG9:only-child {
  border-radius: var(--border-radius);
}
#app-mount .container-3npvBV .button-1ZiXG9 .icon-3Gkjwa {
  width: 14px;
  height: 14px;
}
#app-mount .container-3npvBV .button-1ZiXG9 .icon-3Gkjwa path[d="M7 12.001C7 10.8964 6.10457 10.001 5 10.001C3.89543 10.001 3 10.8964 3 12.001C3 13.1055 3.89543 14.001 5 14.001C6.10457 14.001 7 13.1055 7 12.001ZM14 12.001C14 10.8964 13.1046 10.001 12 10.001C10.8954 10.001 10 10.8964 10 12.001C10 13.1055 10.8954 14.001 12 14.001C13.1046 14.001 14 13.1055 14 12.001ZM19 10.001C20.1046 10.001 21 10.8964 21 12.001C21 13.1055 20.1046 14.001 19 14.001C17.8954 14.001 17 13.1055 17 12.001C17 10.8964 17.8954 10.001 19 10.001Z"] {
  d: path("M1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zm5 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zM13 7.5a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0z");
  transform: scale(1.275) translateX(3px) translateY(2px);
}
#app-mount .container-3npvBV .button-1ZiXG9 .icon-3Gkjwa path[d="M19.2929 9.8299L19.9409 9.18278C21.353 7.77064 21.353 5.47197 19.9409 4.05892C18.5287 2.64678 16.2292 2.64678 14.817 4.05892L14.1699 4.70694L19.2929 9.8299ZM12.8962 5.97688L5.18469 13.6906L10.3085 18.813L18.0201 11.0992L12.8962 5.97688ZM4.11851 20.9704L8.75906 19.8112L4.18692 15.239L3.02678 19.8796C2.95028 20.1856 3.04028 20.5105 3.26349 20.7337C3.48669 20.9569 3.8116 21.046 4.11851 20.9704Z"] {
  d: path("M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 011.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z");
  transform: scale(1.275) translateX(2.5px) translateY(1px);
}
#app-mount .container-3npvBV .button-1ZiXG9 .icon-3Gkjwa path[d="M12.2512 2.00309C12.1677 2.00104 12.084 2 12 2C6.477 2 2 6.477 2 12C2 17.522 6.477 22 12 22C17.523 22 22 17.522 22 12C22 11.916 21.999 11.8323 21.9969 11.7488C21.3586 11.9128 20.6895 12 20 12C15.5817 12 12 8.41828 12 4C12 3.31052 12.0872 2.6414 12.2512 2.00309ZM10 8C10 6.896 9.104 6 8 6C6.896 6 6 6.896 6 8C6 9.105 6.896 10 8 10C9.104 10 10 9.105 10 8ZM12 19C15.14 19 18 16.617 18 14V13H6V14C6 16.617 8.86 19 12 19Z"] {
  d: path("M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z");
  transform: scale(1.275) translateX(2px) translateY(1px);
}
#app-mount .container-3npvBV .button-1ZiXG9 .icon-3Gkjwa path[d="M12.2512 2.00309C12.1677 2.00104 12.084 2 12 2C6.477 2 2 6.477 2 12C2 17.522 6.477 22 12 22C17.523 22 22 17.522 22 12C22 11.916 21.999 11.8323 21.9969 11.7488C21.3586 11.9128 20.6895 12 20 12C15.5817 12 12 8.41828 12 4C12 3.31052 12.0872 2.6414 12.2512 2.00309ZM10 8C10 6.896 9.104 6 8 6C6.896 6 6 6.896 6 8C6 9.105 6.896 10 8 10C9.104 10 10 9.105 10 8ZM12 19C15.14 19 18 16.617 18 14V13H6V14C6 16.617 8.86 19 12 19Z"] + path {
  display: none;
}
#app-mount .zalgo-jN1Ica .messageContent-2qWWxC {
  overflow: visible;
}
#app-mount .attachment-33OFj0 {
  border: 1px solid var(--base-border);
  background-color: var(--background);
  overflow: hidden;
  padding: 0;
}
#app-mount .attachment-33OFj0 .icon-1kp3fr {
  margin-left: var(--spacing);
  width: 24px;
  margin-right: 0;
}
#app-mount .attachment-33OFj0 > .anchor-3Z-8Bb {
  height: 51px;
  display: flex;
  align-items: center;
  padding: 0 var(--spacing-half);
  border-left: 1px solid var(--base-border);
}
#app-mount .attachment-33OFj0 > .anchor-3Z-8Bb svg {
  color: var(--text-muted);
  opacity: 1;
  margin-left: 0;
}
#app-mount .attachment-33OFj0 > .anchor-3Z-8Bb:hover svg {
  color: var(--text-normal);
}
#app-mount .attachmentInner-3vEpKt {
  padding: var(--spacing);
}
#app-mount .wrapper-35wsBm {
  border: 1px solid var(--base-border);
  background-color: var(--background);
  padding: var(--spacing);
}
#app-mount .wrapper-35wsBm h5 {
  margin-bottom: var(--spacing);
}
#app-mount .wrapper-35wsBm .guildIconImage-3qTk45 {
  border-radius: var(--border-radius);
  box-shadow: inset 0 0 0 1px var(--base-border);
  width: var(--avatar-size-lg);
  height: var(--avatar-size-lg);
  margin-right: var(--spacing);
}
#app-mount .wrapper-35wsBm .guildName-2hvnt_ {
  font-size: var(--font-size-md);
}
#app-mount .wrapper-35wsBm .count-30T-5k {
  font-size: var(--font-size);
}
#app-mount .wrapperAudio-1jDe0Q {
  background: var(--background);
  border: 1px solid var(--base-border);
  padding: 0;
}
#app-mount .audioMetadata-3zOuGv:before {
  height: 56px;
  background-position: center;
  background-size: 24px;
  padding: 0 var(--spacing);
}
#app-mount .metadataContent-3c_ZXw {
  padding: var(--spacing);
}
#app-mount .metadataDownload-1fk90V {
  height: 56px;
  display: flex;
  align-items: center;
  padding: 0 var(--spacing-half);
  border-left: 1px solid var(--base-border);
}
#app-mount .metadataDownload-1fk90V svg {
  color: var(--text-muted);
  opacity: 1;
}
#app-mount .metadataDownload-1fk90V:hover svg {
  color: var(--text-normal);
}
#app-mount .audioControls-2HsaU6 {
  border-top: 1px solid var(--base-border);
  border-radius: 0;
  background: transparent;
  margin-top: 0;
}
#app-mount .imageWrapper-2p5ogY {
  border-radius: var(--border-radius);
  outline: none;
  transition: 250ms ease;
}
#app-mount .embedImage-2W1cML img,
#app-mount .embedImage-2W1cML video,
#app-mount .embedThumbnail-2Y84-K img,
#app-mount .embedThumbnail-2Y84-K video,
#app-mount .embedVideo-3nf0O9 img,
#app-mount .embedVideo-3nf0O9 video {
  border-radius: var(--border-radius);
}
#app-mount .embedFull-2tM8-- {
  background-color: var(--background);
  border-top: 1px solid var(--base-border) !important;
  border-right: 1px solid var(--base-border) !important;
  border-bottom: 1px solid var(--base-border) !important;
  border-radius: var(--border-radius);
}
#app-mount .embedFull-2tM8-- .grid-1nZz7S {
  padding: var(--spacing);
}
#app-mount .embedFull-2tM8-- .grid-1nZz7S > div:first-child,
#app-mount .embedFull-2tM8-- .grid-1nZz7S .embedSuppressButton-1FonMn + div {
  margin: 0;
}
#app-mount .embedFull-2tM8-- .embedProvider-3k5pfl {
  font-size: var(--font-size-sm);
  color: var(--text-muted);
}
#app-mount .embedFull-2tM8-- .embedAuthorNameLink-1gVryT {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .embedFull-2tM8-- .embedTitle-3OXDkz,
#app-mount .embedFull-2tM8-- .embedAuthorName-3mnTWj {
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
}
#app-mount .embedFull-2tM8-- .embedMargin-UO5XwE {
  margin-top: var(--spacing-half);
}
#app-mount .embedFull-2tM8-- .embedAuthorIcon--1zR3L {
  margin-right: var(--spacing-half);
  width: var(--avatar-size-xsm);
  height: var(--avatar-size-xsm);
  border-radius: var(--border-radius);
}
#app-mount .embedFull-2tM8-- .embedDescription-1Cuq9a,
#app-mount .embedFull-2tM8-- .embedFieldName-NFrena,
#app-mount .embedFull-2tM8-- .embedFieldValue-nELq2s {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
}
#app-mount .embedFull-2tM8-- .embedFieldName-NFrena {
  font-weight: var(--font-weight-semibold);
}
#app-mount .embedFull-2tM8-- .embedAuthorName-3mnTWj,
#app-mount .embedFull-2tM8-- .embedFieldName-NFrena,
#app-mount .embedFull-2tM8-- .embedTitle-3OXDkz {
  color: var(--text-normal);
}
#app-mount .embedFull-2tM8-- .embedFooterIcon-239O1f {
  border-radius: var(--avatar-radius);
  margin-right: var(--spacing-half);
}
#app-mount .embedFull-2tM8-- a {
  color: var(--text-link) !important;
}
#app-mount .wrapper-2TxpI8 {
  background: var(--background);
  border-radius: var(--border-radius);
}
#app-mount .wrapper-2TxpI8:after {
  content: "";
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background: rgba(0, 0, 0, 0.25);
  pointer-events: none;
  opacity: 0;
  transition: 250ms linear opacity;
}
#app-mount .wrapper-2TxpI8.wrapperPaused-19pWuK:after {
  opacity: 1;
}
#app-mount .wrapper-2TxpI8.wrapperControlsHidden-35Gtol .metadata-13NcHb,
#app-mount .wrapper-2TxpI8.wrapperControlsHidden-35Gtol .videoControls-2kcYic {
  opacity: 0;
}
#app-mount .wrapper-2TxpI8:hover .playCenter-Fe8u3X .wrapper-129saQ .icon-3ZFEtL {
  opacity: 1;
}
#app-mount .wrapper-2TxpI8 .playCenter-Fe8u3X .iconWrapper-21idzA {
  opacity: 1;
}
#app-mount .wrapper-2TxpI8 .playCenter-Fe8u3X .wrapper-129saQ {
  background: transparent;
  padding: 0;
  opacity: 1;
}
#app-mount .wrapper-2TxpI8 .playCenter-Fe8u3X .wrapper-129saQ .icon-3ZFEtL {
  margin: 0;
  cursor: var(--cursor);
  width: 72px;
  height: 72px;
  background: var(--white);
  opacity: 0.65;
  margin-top: 4px;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="75px" height="75px" version="1.1" viewBox="0 0 20 20" x="0px" y="0px"><g><path d="M5 17.066V2.934a.5.5 0 01.777-.416L17 10 5.777 17.482A.5.5 0 015 17.066z"/></g></svg>') center/72px no-repeat;
}
#app-mount .wrapper-2TxpI8 .playCenter-Fe8u3X .wrapper-129saQ .icon-3ZFEtL polygon {
  display: none;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic {
  z-index: 1;
  padding: var(--spacing-half) var(--spacing);
  height: 38px;
  box-sizing: border-box;
  bottom: 0;
  transform: none !important;
  transition: 150ms linear opacity;
  background: transparent;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic:after {
  content: "";
  left: 0;
  bottom: 0;
  width: 100%;
  height: 72px;
  position: absolute;
  z-index: -1;
  background: linear-gradient(0deg, rgba(0, 0, 0, 0.75), transparent);
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .controlIcon-3cRbti {
  margin: 0;
  margin-right: var(--spacing);
  height: 20px;
  width: 20px;
  color: var(--white);
  opacity: 0.65;
  cursor: var(--cursor);
  transform: none;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .controlIcon-3cRbti:hover {
  color: var(--text-link);
  opacity: 1;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .durationTimeWrapper-OugPFt {
  margin: 0;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .durationTimeWrapper-OugPFt .durationTimeDisplay-jww5fr, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .durationTimeWrapper-OugPFt .durationTimeSeparator-2_xpJ7 {
  font-weight: var(--font-weight);
  font-size: var(--font-size-sm);
  color: var(--white);
  font-family: var(--font-family-sans-serif);
  margin: 0;
  -webkit-user-select: text;
          user-select: text;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .durationTimeWrapper-OugPFt .durationTimeDisplay-jww5fr.durationTimeSeparator-2_xpJ7, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .durationTimeWrapper-OugPFt .durationTimeSeparator-2_xpJ7.durationTimeSeparator-2_xpJ7 {
  margin: 0 var(--spacing-third);
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO {
  top: calc(var(--spacing-half) * -1);
  position: absolute;
  left: var(--spacing);
  width: calc(100% - var(--spacing-double));
  display: block;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ {
  margin: 0;
  display: flex;
  align-items: center;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4:hover .buffer-26XPkd, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4:hover .mediaBarPreview-1jfyFs, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4:hover .mediaBarProgress-1xaPtl, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4:active .buffer-26XPkd, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4:active .mediaBarPreview-1jfyFs, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4:active .mediaBarProgress-1xaPtl,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ:hover .buffer-26XPkd,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ:hover .mediaBarPreview-1jfyFs,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ:hover .mediaBarProgress-1xaPtl,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ:active .buffer-26XPkd,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ:active .mediaBarPreview-1jfyFs,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ:active .mediaBarProgress-1xaPtl {
  height: 5px !important;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 {
  background: transparent;
  height: 10px;
  border-radius: 0;
  box-shadow: none;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67 .mediaBarProgress-1xaPtl,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 .mediaBarProgress-1xaPtl {
  background: var(--accent-solid);
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67 .buffer-26XPkd, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67 .mediaBarPreview-1jfyFs, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67 .mediaBarProgress-1xaPtl,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 .buffer-26XPkd,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 .mediaBarPreview-1jfyFs,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 .mediaBarProgress-1xaPtl {
  height: 3px;
  top: 50%;
  transition: 150ms ease height;
  transform: translateY(-50%);
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67 .buffer-26XPkd, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67 .buffer-26XPkd:after, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteraction-37i2O4 .mediaBarWrapper-3D7r67 .buffer-26XPkd:before,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 .buffer-26XPkd,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 .buffer-26XPkd:after,
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarInteractionDragging-2QurIZ .mediaBarWrapper-3D7r67 .buffer-26XPkd:before {
  background: var(--white);
  opacity: 0.3;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .mediaBarGrabber-1FqnbN {
  background: var(--accent-solid);
  transition: none;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .fakeEdges-27pgtp:after, #app-mount .wrapper-2TxpI8 .videoControls-2kcYic .horizontal-3Sq5iO .fakeEdges-27pgtp:before {
  content: none;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic .flex-1O1GKY {
  flex-grow: 1;
  justify-content: flex-end;
}
#app-mount .wrapper-2TxpI8 .videoControls-2kcYic > div:last-child .controlIcon-3cRbti {
  margin: 0;
}
#app-mount .wrapper-2TxpI8 .metadata-13NcHb {
  padding: var(--spacing);
  top: 0;
  z-index: 10;
  height: 72px;
  transform: none !important;
  transition: 150ms ease opacity;
  background: linear-gradient(0deg, transparent, rgba(0, 0, 0, 0.75));
}
#app-mount .wrapper-2TxpI8 .metadata-13NcHb .metadataName-14STf- {
  color: var(--white);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  line-height: normal;
}
#app-mount .wrapper-2TxpI8 .metadata-13NcHb .metadataSize-2UOOLK {
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  color: var(--white);
  opacity: 0.65;
}
#app-mount .wrapper-2TxpI8 .metadata-13NcHb .metadataDownload-1fk90V {
  padding: 0;
  opacity: 1;
  border: none;
  background: var(--white);
  height: 18px;
  width: 18px;
  opacity: 0.75;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24" fill="currentColor" style="display: inline-block; vertical-align: text-bottom;"><path d="M4.97 11.03a.75.75 0 111.06-1.06L11 14.94V2.75a.75.75 0 011.5 0v12.19l4.97-4.97a.75.75 0 111.06 1.06l-6.25 6.25a.75.75 0 01-1.06 0l-6.25-6.25zm-.22 9.47a.75.75 0 000 1.5h14.5a.75.75 0 000-1.5H4.75z"/></svg>') center/18px no-repeat;
}
#app-mount .wrapper-2TxpI8 .metadata-13NcHb .metadataDownload-1fk90V .metadataIcon-2FyCKU {
  display: none;
}
#app-mount .wrapper-2TxpI8 .metadata-13NcHb .metadataDownload-1fk90V:hover {
  opacity: 1;
}
#app-mount .wrapper-2TxpI8 .metadataContent-3c_ZXw {
  padding: 0;
}
#app-mount .blockquoteContainer-U5TVEi {
  background: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  padding: var(--spacing);
  position: relative;
  box-sizing: border-box;
  border-top-left-radius: 0;
  margin: var(--spacing-half) 0;
  margin-left: 13px;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
}
#app-mount .blockquoteContainer-U5TVEi blockquote {
  padding: 0;
  max-width: unset;
}
#app-mount .blockquoteContainer-U5TVEi .blockquoteDivider-2hH8H6 {
  position: absolute;
  top: -1px;
  left: -15px;
  width: 0;
  height: 0;
  width: 15px;
  height: 15px;
  border-radius: 0;
  background: transparent;
  overflow: hidden;
}
#app-mount .blockquoteContainer-U5TVEi .blockquoteDivider-2hH8H6::after {
  content: "";
  position: absolute;
  width: 0;
  height: 0;
  top: 0;
  left: 8px;
  width: 100%;
  height: 100%;
  border-radius: 0;
  background: var(--background);
  border: 1px solid var(--base-border);
  transform: skewX(45deg);
}
#app-mount .backgroundFlash-24qWLN {
  transition: 150ms ease;
  background: rgba(var(--accent), 0.2) !important;
}
#app-mount .backgroundFlash-24qWLN[style*="rgba(114, 137, 218, 0)"] {
  background: transparent !important;
}

.powercord-lines,
.powercord-codeblock-lang {
  display: none;
}

.theme-light #app-mount .message-2qnXI6 .operations-36ENbA a:first-child:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
.theme-light #app-mount .message-2qnXI6 .operations-36ENbA a:first-child:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .form-2fGMdU {
  box-sizing: border-box;
  padding: var(--spacing) var(--spacing) var(--spacing) calc(var(--spacing-double) + var(--avatar-size-sm));
  border-top: 1px solid var(--base-border);
  display: flex;
  align-items: center;
  background: var(--background-light);
  height: auto;
  margin: 0;
  position: relative;
  z-index: 1;
}
#app-mount .form-2fGMdU:before {
  content: none;
}
#app-mount .form-2fGMdU [aria-controls] {
  width: 100%;
}
#app-mount .form-2fGMdU .buttonContainer-3AU1Ij {
  margin: 0;
}
#app-mount .wrapper-39oAo3 {
  margin: 0;
  padding: 0;
  background: transparent;
  height: calc(var(--avatar-size) - 2px);
}
#app-mount .wrapper-39oAo3 .content-c_0cLD {
  height: auto;
  margin: 0;
}
#app-mount .wrapper-39oAo3 .content-c_0cLD img {
  display: none;
}
#app-mount .wrapper-39oAo3 .content-c_0cLD .title-FVgbgL {
  font-size: var(--font-size);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .wrapper-39oAo3 .content-c_0cLD .size12-3cLvbJ {
  line-height: normal;
  color: var(--text-muted);
}
#app-mount .attachWrapper-2TRKBi {
  border-right: 1px solid var(--base-border);
  width: 44px;
}
#app-mount .attachWrapper-2TRKBi button {
  -webkit-mask: url("data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0idXRmLTgiPz4KPCEtLSBHZW5lcmF0ZWQgYnkgSWNvTW9vbi5pbyAtLT4KPCFET0NUWVBFIHN2ZyBQVUJMSUMgIi0vL1czQy8vRFREIFNWRyAxLjEvL0VOIiAiaHR0cDovL3d3dy53My5vcmcvR3JhcGhpY3MvU1ZHLzEuMS9EVEQvc3ZnMTEuZHRkIj4KPHN2ZyB2ZXJzaW9uPSIxLjEiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHdpZHRoPSIxNiIgaGVpZ2h0PSIxNiIgdmlld0JveD0iMCAwIDE2IDE2Ij4KPHBhdGggZmlsbD0iIzAwMDAwMCIgZD0iTTEwLjQwNCA1LjExbC0xLjAxNS0xLjAxNC01LjA3NSA1LjA3NGMtMC44NDEgMC44NDEtMC44NDEgMi4yMDQgMCAzLjA0NHMyLjIwNCAwLjg0MSAzLjA0NSAwbDYuMDkwLTYuMDg5YzEuNDAyLTEuNDAxIDEuNDAyLTMuNjczIDAtNS4wNzRzLTMuNjc0LTEuNDAyLTUuMDc1IDBsLTYuMzk0IDYuMzkzYy0wLjAwNSAwLjAwNS0wLjAxMCAwLjAwOS0wLjAxNCAwLjAxMy0xLjk1NSAxLjk1NS0xLjk1NSA1LjEyMyAwIDcuMDc3czUuMTIzIDEuOTU0IDcuMDc4IDBjMC4wMDQtMC4wMDQgMC4wMDgtMC4wMDkgMC4wMTMtMC4wMTRsMC4wMDEgMC4wMDEgNC4zNjUtNC4zNjQtMS4wMTUtMS4wMTQtNC4zNjUgNC4zNjNjLTAuMDA1IDAuMDA0LTAuMDA5IDAuMDA5LTAuMDEzIDAuMDEzLTEuMzkyIDEuMzkyLTMuNjU2IDEuMzkyLTUuMDQ4IDBzLTEuMzkyLTMuNjU1IDAtNS4wNDdjMC4wMDUtMC4wMDUgMC4wMDktMC4wMDkgMC4wMTQtMC4wMTNsLTAuMDAxLTAuMDAxIDYuMzk1LTYuMzkzYzAuODM5LTAuODQgMi4yMDUtMC44NCAzLjA0NSAwczAuODM5IDIuMjA1IDAgMy4wNDRsLTYuMDkwIDYuMDg5Yy0wLjI4IDAuMjgtMC43MzUgMC4yOC0xLjAxNSAwcy0wLjI4LTAuNzM1IDAtMS4wMTRsNS4wNzUtNS4wNzV6Ij48L3BhdGg+Cjwvc3ZnPgo=") center/14px no-repeat;
          mask: url("data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0idXRmLTgiPz4KPCEtLSBHZW5lcmF0ZWQgYnkgSWNvTW9vbi5pbyAtLT4KPCFET0NUWVBFIHN2ZyBQVUJMSUMgIi0vL1czQy8vRFREIFNWRyAxLjEvL0VOIiAiaHR0cDovL3d3dy53My5vcmcvR3JhcGhpY3MvU1ZHLzEuMS9EVEQvc3ZnMTEuZHRkIj4KPHN2ZyB2ZXJzaW9uPSIxLjEiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHdpZHRoPSIxNiIgaGVpZ2h0PSIxNiIgdmlld0JveD0iMCAwIDE2IDE2Ij4KPHBhdGggZmlsbD0iIzAwMDAwMCIgZD0iTTEwLjQwNCA1LjExbC0xLjAxNS0xLjAxNC01LjA3NSA1LjA3NGMtMC44NDEgMC44NDEtMC44NDEgMi4yMDQgMCAzLjA0NHMyLjIwNCAwLjg0MSAzLjA0NSAwbDYuMDkwLTYuMDg5YzEuNDAyLTEuNDAxIDEuNDAyLTMuNjczIDAtNS4wNzRzLTMuNjc0LTEuNDAyLTUuMDc1IDBsLTYuMzk0IDYuMzkzYy0wLjAwNSAwLjAwNS0wLjAxMCAwLjAwOS0wLjAxNCAwLjAxMy0xLjk1NSAxLjk1NS0xLjk1NSA1LjEyMyAwIDcuMDc3czUuMTIzIDEuOTU0IDcuMDc4IDBjMC4wMDQtMC4wMDQgMC4wMDgtMC4wMDkgMC4wMTMtMC4wMTRsMC4wMDEgMC4wMDEgNC4zNjUtNC4zNjQtMS4wMTUtMS4wMTQtNC4zNjUgNC4zNjNjLTAuMDA1IDAuMDA0LTAuMDA5IDAuMDA5LTAuMDEzIDAuMDEzLTEuMzkyIDEuMzkyLTMuNjU2IDEuMzkyLTUuMDQ4IDBzLTEuMzkyLTMuNjU1IDAtNS4wNDdjMC4wMDUtMC4wMDUgMC4wMDktMC4wMDkgMC4wMTQtMC4wMTNsLTAuMDAxLTAuMDAxIDYuMzk1LTYuMzkzYzAuODM5LTAuODQgMi4yMDUtMC44NCAzLjA0NSAwczAuODM5IDIuMjA1IDAgMy4wNDRsLTYuMDkwIDYuMDg5Yy0wLjI4IDAuMjgtMC43MzUgMC4yOC0xLjAxNSAwcy0wLjI4LTAuNzM1IDAtMS4wMTRsNS4wNzUtNS4wNzV6Ij48L3BhdGg+Cjwvc3ZnPgo=") center/14px no-repeat;
  background: var(--text-muted);
  width: 44px;
  height: 100%;
  cursor: var(--cursor);
  margin-left: 0;
  padding: 0;
}
#app-mount .attachWrapper-2TRKBi button div {
  display: none;
}
#app-mount .attachWrapper-2TRKBi button:hover {
  background: var(--text-focus);
}
#app-mount .sansAttachButton-td2irx {
  padding-left: 0;
}
#app-mount .channelTextArea-rNsIhG {
  margin-bottom: 0;
  background-color: transparent;
  box-sizing: border-box;
  margin-left: 0;
}
#app-mount .channelTextArea-rNsIhG.highlighted-2eSV1B,
#app-mount .channelTextArea-rNsIhG .focused-PMHa7m {
  box-shadow: none;
}
#app-mount .placeholder-37qJjk {
  font-size: var(--font-size);
  padding: 4px var(--spacing) 0;
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  top: 0;
  width: 98%;
}
#app-mount .scrollableContainer-2NUZem {
  padding: 0;
  padding-left: 0;
  width: 100%;
  border-radius: 0;
  background: transparent;
  max-height: unset;
  overflow: visible;
}
#app-mount .scrollableContainer-2NUZem::-webkit-scrollbar {
  display: none;
}
#app-mount .inner-MADQqc {
  background-color: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  transform: translateZ(0);
  box-sizing: border-box;
  height: unset;
}
#app-mount .textArea-12jD-V {
  min-height: var(--avatar-size-sm);
  height: auto;
}
#app-mount .textArea-12jD-V.fontSize16Padding-3Wk7zP {
  padding: 4px var(--spacing);
  color: var(--text-normal);
  font-size: var(--font-size);
  line-height: normal;
  min-height: unset;
}
#app-mount .slateTextArea-1Mkdgw {
  font-size: var(--font-size);
  padding: 4px var(--spacing) 0;
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  top: 0;
  width: 98%;
}
#app-mount .slateTextArea-1Mkdgw:focus:after {
  content: "";
  top: -1px;
  left: -1px;
  position: fixed;
  width: calc(100% + 2px);
  height: calc(100% + 2px);
  background: transparent;
  pointer-events: none;
  box-sizing: border-box;
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
  border-radius: var(--border-radius);
}
#app-mount .buttons-3JBrkn {
  height: auto;
  margin: 0;
  padding: 0 var(--spacing-half);
}
#app-mount .buttons-3JBrkn .buttonWrapper-1ZmCpA {
  display: none;
}
#app-mount .buttons-3JBrkn button {
  transform: scale(0.75);
  transform-origin: center right;
  margin: 0;
}
#app-mount .buttons-3JBrkn .emojiButton-3uL3Aw {
  cursor: var(--cursor);
}
#app-mount .buttons-3JBrkn .emojiButton-3uL3Aw .sprite-2iCowe {
  height: 22px;
  width: 22px;
  filter: none !important;
  transform: none !important;
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 16 16" fill="currentColor" style="display: inline-block; vertical-align: text-bottom;"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z"/></svg>') center/20px no-repeat;
}
#app-mount .buttons-3JBrkn .emojiButton-3uL3Aw:hover .sprite-2iCowe,
#app-mount .buttons-3JBrkn .emojiButton-3uL3Aw .sprite-2iCowe[style*="grayscale(0%)"] {
  background: var(--text-normal);
}
#app-mount .button-318s1X {
  padding: 0;
}
#app-mount .charCounter-7fw40k {
  font-size: var(--font-size-sm);
  color: var(--text-muted);
  opacity: 0.4;
  bottom: -11px;
  right: 1px;
}
#app-mount .base-gE7OpD {
  opacity: 0.65;
  position: absolute;
  left: unset;
  right: var(--spacing);
  height: var(--input-height);
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  background: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--button-border-radius) var(--button-border-radius) 0 0;
  top: calc(var(--input-height) * -1 - 2px);
  transition: 50ms linear;
  padding: 0 var(--spacing-half);
  display: flex;
  justify-content: center;
  border-bottom: none;
}
#app-mount .base-gE7OpD .text-1y-e8- {
  line-height: normal;
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  margin-left: 0;
}
#app-mount .base-gE7OpD .text-1y-e8- strong {
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .base-gE7OpD svg {
  display: none;
}
#app-mount .base-gE7OpD .cooldownWrapper-3joyFc {
  color: var(--text-normal) !important;
  font-size: var(--font-size-sm);
  line-height: normal;
  font-weight: var(--font-weight-semibold);
}
#app-mount .base-gE7OpD .cooldownWrapper-3joyFc[style*="240"] {
  color: rgb(var(--status-red)) !important;
}
#app-mount form:hover .base-gE7OpD {
  opacity: 1;
}
#app-mount form:hover .base-gE7OpD:hover {
  opacity: 1;
}

#app-mount .chat-3bRxxu .wrapper-3vR61M {
  background: var(--background-alt);
  display: flex;
  flex-direction: column;
  justify-content: flex-end;
}
#app-mount .chat-3bRxxu .wrapper-1F5TKx {
  background: transparent;
  padding-top: var(--spacing);
  padding-bottom: var(--spacing);
  padding-left: calc(var(--avatar-size) + var(--spacing) * 2);
}
#app-mount .chat-3bRxxu .wrapper-1F5TKx + :not([style*=margin-top]) {
  margin-top: calc(var(--spacing) / -1);
}
#app-mount .chat-3bRxxu .wrapper-1F5TKx[style*=margin-top] {
  border-top: 1px solid var(--base-border);
  margin-top: 0 !important;
}
#app-mount .chat-3bRxxu .avatar-2daVqv {
  border-radius: var(--avatar-radius);
  width: var(--avatar-size);
  height: var(--avatar-size);
  box-shadow: 0 0 0 0.875px var(--base-border);
  background: var(--background);
  top: var(--spacing);
  left: var(--spacing);
  opacity: 1 !important;
  box-sizing: border-box;
}
#app-mount .chat-3bRxxu .avatar-2daVqv::after {
  content: "";
  position: absolute;
  width: 100%;
  height: 100%;
  top: 0;
  left: 0;
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/40% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/40% no-repeat;
}
#app-mount .chat-3bRxxu .attachment-2p5mHK,
#app-mount .chat-3bRxxu .blob-2w7iIK {
  border-radius: var(--border-radius);
  background: var(--text-muted);
  height: 4px;
}

#app-mount .markup-2BOw-j code,
#app-mount .markup-2BOw-j pre {
  font-family: var(--font-family-monospace);
}
#app-mount .markup-2BOw-j code {
  border: 1px solid var(--base-border);
  background-color: var(--background);
  font-size: 100%;
}
#app-mount .markup-2BOw-j pre {
  margin: var(--spacing) 0;
  background: var(--background);
  position: relative;
  overflow: hidden;
  margin-bottom: 5px;
  border-radius: var(--border-radius);
}
#app-mount .markup-2BOw-j pre:before {
  content: "1\a 2\a 3\a 4\a 5\a 6\a 7\a 8\a 9\a 10\a 11\a 12\a 13\a 14\a 15\a 16\a 17\a 18\a 19\a 20\a 21\a 22\a 23\a 24\a 25\a 26\a 27\a 28\a 29\a 30\a 31\a 32\a 33\a 34\a 35\a 36\a 37\a 38\a 39\a 40\a 41\a 42\a 43\a 44\a 45\a 46\a 47\a 48\a 49\a 50\a 51\a 52\a 53\a 54\a 55\a 56\a 57\a 58\a 59\a 60\a 61\a 62\a 63\a 64\a 65\a 66\a 67\a 68\a 69\a 70\a 71\a 72\a 73\a 74\a 75\a 76\a 77\a 78\a 79\a 80\a 81\a 82\a 83\a 84\a 85\a 86\a 87\a 88\a 89\a 90\a 91\a 92\a 93\a 94\a 95\a 96\a 97\a 98\a 99\a 100\a 101\a 102\a 103\a 104\a 105\a 106\a 107\a 108\a 109\a 110\a 111\a 112\a 113\a 114\a 115\a 116\a 117\a 118\a 119\a 120\a 121\a 122\a 123\a 124\a 125\a 126\a 127\a 128\a 129\a 130\a 131\a 132\a 133\a 134\a 135\a 136\a 137\a 138\a 139\a 140\a 141\a 142\a 143\a 144\a 145\a 146\a 147\a 148\a 149\a 150\a 151\a 152\a 153\a 154\a 155\a 156\a 157\a 158\a 159\a 160\a 161\a 162\a 163\a 164\a 165\a 166\a 167\a 168\a 169\a 170\a 171\a 172\a 173\a 174\a 175\a 176\a 177\a 178\a 179\a 180\a 181\a 182\a 183\a 184\a 185\a 186\a 187\a 188\a 189\a 190\a 191\a 192\a 193\a 194\a 195\a 196\a 197\a 198\a 199\a 200\a 201\a 202\a 203\a 204\a 205\a 206\a 207\a 208\a 209\a 210\a 211\a 212\a 213\a 214\a 215\a 216\a 217\a 218\a 219\a 220\a 221\a 222\a 223\a 224\a 225\a 226\a 227\a 228\a 229\a 230\a 231\a 232\a 233\a 234\a 235\a 236\a 237\a 238\a 239\a 240\a 241\a 242\a 243\a 244\a 245\a 246\a 247\a 248\a 249\a 250\a 251\a 252\a 253\a 254\a 255\a 256\a 257\a 258\a 259\a 260\a 261\a 262\a 263\a 264\a 265\a 266\a 267\a 268\a 269\a 270\a 271\a 272\a 273\a 274\a 275\a 276\a 277\a 278\a 279\a 280\a 281\a 282\a 283\a 284\a 285\a 286\a 287\a 288\a 289\a 290\a 291\a 292\a 293\a 294\a 295\a 296\a 297\a 298\a 299\a 300\a 301\a 302\a 303\a 304\a 305\a 306\a 307\a 308\a 309\a 310\a 311\a 312\a 313\a 314\a 315\a 316\a 317\a 318\a 319\a 320\a 321\a 322\a 323\a 324\a 325\a 326\a 327\a 328\a 329\a 330\a 331\a 332\a 333\a 334\a 335\a 336\a 337\a 338\a 339\a 340\a 341\a 342\a 343\a 344\a 345\a 346\a 347\a 348\a 349\a 350\a 351\a 352\a 353\a 354\a 355\a 356\a 357\a 358\a 359\a 360\a 361\a 362\a 363\a 364\a 365\a 366\a 367\a 368\a 369\a 370\a 371\a 372\a 373\a 374\a 375\a 376\a 377\a 378\a 379\a 380\a 381\a 382\a 383\a 384\a 385\a 386\a 387\a 388\a 389\a 390\a 391\a 392\a 393\a 394\a 395\a 396\a 397\a 398\a 399\a 400\a 401\a 402\a 403\a 404\a 405\a 406\a 407\a 408\a 409\a 410\a 411\a 412\a 413\a 414\a 415\a 416\a 417\a 418\a 419\a 420\a 421\a 422\a 423\a 424\a 425\a 426\a 427\a 428\a 429\a 430\a 431\a 432\a 433\a 434\a 435\a 436\a 437\a 438\a 439\a 440\a 441\a 442\a 443\a 444\a 445\a 446\a 447\a 448\a 449\a 450\a 451\a 452\a 453\a 454\a 455\a 456\a 457\a 458\a 459\a 460\a 461\a 462\a 463\a 464\a 465\a 466\a 467\a 468\a 469\a 470\a 471\a 472\a 473\a 474\a 475\a 476\a 477\a 478\a 479\a 480\a 481\a 482\a 483\a 484\a 485\a 486\a 487\a 488\a 489\a 490\a 491\a 492\a 493\a 494\a 495\a 496\a 497\a 498\a 499\a 500\a 501\a 502\a 503\a 504\a 505\a 506\a 507\a 508\a 509\a 510\a 511\a 512\a 513\a 514\a 515\a 516\a 517\a 518\a 519\a 520\a 521\a 522\a 523\a 524\a 525\a 526\a 527\a 528\a 529\a 530\a 531\a 532\a 533\a 534\a 535\a 536\a 537\a 538\a 539\a 540\a 541\a 542\a 543\a 544\a 545\a 546\a 547\a 548\a 549\a 550\a 551\a 552\a 553\a 554\a 555\a 556\a 557\a 558\a 559\a 560\a 561\a 562\a 563\a 564\a 565\a 566\a 567\a 568\a 569\a 570\a 571\a 572\a 573\a 574\a 575\a 576\a 577\a 578\a 579\a 580\a 581\a 582\a 583\a 584\a 585\a 586\a 587\a 588\a 589\a 590\a 591\a 592\a 593\a 594\a 595\a 596\a 597\a 598\a 599\a 600\a 601\a 602\a 603\a 604\a 605\a 606\a 607\a 608\a 609\a 610\a 611\a 612\a 613\a 614\a 615\a 616\a 617\a 618\a 619\a 620\a 621\a 622\a 623\a 624\a 625\a 626\a 627\a 628\a 629\a 630\a 631\a 632\a 633\a 634\a 635\a 636\a 637\a 638\a 639\a 640\a 641\a 642\a 643\a 644\a 645\a 646\a 647\a 648\a 649\a 650\a 651\a 652\a 653\a 654\a 655\a 656\a 657\a 658\a 659\a 660\a 661\a 662\a 663\a 664\a 665\a 666\a 667\a 668\a 669\a 670\a 671\a 672\a 673\a 674\a 675\a 676\a 677\a 678\a 679\a 680\a 681\a 682\a 683\a 684\a 685\a 686\a 687\a 688\a 689\a 690\a 691\a 692\a 693\a 694\a 695\a 696\a 697\a 698\a 699\a 700\a 701\a 702\a 703\a 704\a 705\a 706\a 707\a 708\a 709\a 710\a 711\a 712\a 713\a 714\a 715\a 716\a 717\a 718\a 719\a 720\a 721\a 722\a 723\a 724\a 725\a 726\a 727\a 728\a 729\a 730\a 731\a 732\a 733\a 734\a 735\a 736\a 737\a 738\a 739\a 740\a 741\a 742\a 743\a 744\a 745\a 746\a 747\a 748\a 749\a 750\a 751\a 752\a 753\a 754\a 755\a 756\a 757\a 758\a 759\a 760\a 761\a 762\a 763\a 764\a 765\a 766\a 767\a 768\a 769\a 770\a 771\a 772\a 773\a 774\a 775\a 776\a 777\a 778\a 779\a 780\a 781\a 782\a 783\a 784\a 785\a 786\a 787\a 788\a 789\a 790\a 791\a 792\a 793\a 794\a 795\a 796\a 797\a 798\a 799\a 800\a 801\a 802\a 803\a 804\a 805\a 806\a 807\a 808\a 809\a 810\a 811\a 812\a 813\a 814\a 815\a 816\a 817\a 818\a 819\a 820\a 821\a 822\a 823\a 824\a 825\a 826\a 827\a 828\a 829\a 830\a 831\a 832\a 833\a 834\a 835\a 836\a 837\a 838\a 839\a 840\a 841\a 842\a 843\a 844\a 845\a 846\a 847\a 848\a 849\a 850\a 851\a 852\a 853\a 854\a 855\a 856\a 857\a 858\a 859\a 860\a 861\a 862\a 863\a 864\a 865\a 866\a 867\a 868\a 869\a 870\a 871\a 872\a 873\a 874\a 875\a 876\a 877\a 878\a 879\a 880\a 881\a 882\a 883\a 884\a 885\a 886\a 887\a 888\a 889\a 890\a 891\a 892\a 893\a 894\a 895\a 896\a 897\a 898\a 899\a 900\a 901\a 902\a 903\a 904\a 905\a 906\a 907\a 908\a 909\a 910\a 911\a 912\a 913\a 914\a 915\a 916\a 917\a 918\a 919\a 920\a 921\a 922\a 923\a 924\a 925\a 926\a 927\a 928\a 929\a 930\a 931\a 932\a 933\a 934\a 935\a 936\a 937\a 938\a 939\a 940\a 941\a 942\a 943\a 944\a 945\a 946\a 947\a 948\a 949\a 950\a 951\a 952\a 953\a 954\a 955\a 956\a 957\a 958\a 959\a 960\a 961\a 962\a 963\a 964\a 965\a 966\a 967\a 968\a 969\a 970\a 971\a 972\a 973\a 974\a 975\a 976\a 977\a 978\a 979\a 980\a 981\a 982\a 983\a 984\a 985\a 986\a 987\a 988\a 989\a 990\a 991\a 992\a 993\a 994\a 995\a 996\a 997\a 998\a 999\a";
  width: 20px;
  padding: 0 var(--spacing-half);
  position: absolute;
  left: 0;
  top: 1px;
  text-align: right;
  padding-top: 25px;
  line-height: var(--line-height);
  height: calc(100% - 25px);
  overflow: hidden;
  color: var(--text-muted);
  background: var(--background-dark);
  font-size: var(--font-size-sm);
}
#app-mount .markup-2BOw-j pre code {
  position: relative;
  box-sizing: border-box;
  padding: 25px 0.25em 0.15em 34px !important;
  background: transparent !important;
  border: 1px solid var(--base-border);
  font-size: var(--font-size-sm);
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  color: var(--syntax-grey-alt);
}
#app-mount .markup-2BOw-j pre code:before {
  content: "Unknown Language";
  width: 100%;
  height: 24px;
  top: 0;
  left: 0;
  color: var(--text-normal);
  border-bottom: 1px solid var(--base-border);
  font-size: 1em;
  font-weight: var(--font-weight-normal);
  padding: 0 calc(var(--spacing) + 20px);
  display: flex;
  align-items: center;
  position: absolute;
  background-color: var(--background-light);
  box-sizing: border-box;
  font-family: var(--font-family-sans-serif);
  line-height: 1;
  white-space: nowrap;
  overflow: hidden;
}
#app-mount .markup-2BOw-j pre code:after {
  content: "";
  width: 24px;
  height: 23px;
  position: absolute;
  top: 0;
  left: 0;
  padding: 0 var(--spacing-third);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="24" height="24"><path fill-rule="evenodd" d="M3 3a2 2 0 012-2h9.982a2 2 0 011.414.586l4.018 4.018A2 2 0 0121 7.018V21a2 2 0 01-2 2H4.75a.75.75 0 010-1.5H19a.5.5 0 00.5-.5V8.5h-4a2 2 0 01-2-2v-4H5a.5.5 0 00-.5.5v6.25a.75.75 0 01-1.5 0V3zm12-.5v4a.5.5 0 00.5.5h4a.5.5 0 00-.146-.336l-4.018-4.018A.5.5 0 0015 2.5z"/><path d="M4.53 12.24a.75.75 0 01-.039 1.06l-2.639 2.45 2.64 2.45a.75.75 0 11-1.022 1.1l-3.23-3a.75.75 0 010-1.1l3.23-3a.75.75 0 011.06.04zm3.979 1.06a.75.75 0 111.02-1.1l3.231 3a.75.75 0 010 1.1l-3.23 3a.75.75 0 11-1.021-1.1l2.639-2.45-2.64-2.45z"/></svg>') center/12px no-repeat;
  background: var(--text-normal);
}
#app-mount .markup-2BOw-j pre code[class~=hljs]:before {
  content: "Plain Text";
}
#app-mount .markup-2BOw-j pre code[class~=diff i]:before {
  content: "Diff";
}
#app-mount .markup-2BOw-j pre code[class~=cs i]:before, #app-mount .markup-2BOw-j pre code[class~=csharp i]:before {
  content: "C#";
}
#app-mount .markup-2BOw-j pre code[class~=ini i]:before {
  content: "Initialization File";
}
#app-mount .markup-2BOw-j pre code[class~=autohotkey i]:before {
  content: "AutoHotkey";
}
#app-mount .markup-2BOw-j pre code[class~=asciidoc i]:before {
  content: "Ascii";
}
#app-mount .markup-2BOw-j pre code[class~=TOML i]:before {
  content: "TOML";
}
#app-mount .markup-2BOw-j pre code[class~=nginx i]:before {
  content: "NGINX";
}
#app-mount .markup-2BOw-j pre code[class~=perl i]:before {
  content: "Perl";
}
#app-mount .markup-2BOw-j pre code[class~=d i]:before {
  content: "d";
}
#app-mount .markup-2BOw-j pre code[class~=javascript i]:before, #app-mount .markup-2BOw-j pre code[class~=js i]:before {
  content: "Javascript";
}
#app-mount .markup-2BOw-j pre code[class~=css i]:before {
  content: "Cascading Style Sheet";
}
#app-mount .markup-2BOw-j pre code[class~=bash i]:before {
  content: "Bash";
}
#app-mount .markup-2BOw-j pre code[class~=markdown i]:before, #app-mount .markup-2BOw-j pre code[class~=md i]:before {
  content: "Markdown";
}
#app-mount .markup-2BOw-j pre code[class~=html i]:before {
  content: "HTML";
}
#app-mount .markup-2BOw-j pre code[class~=xl i]:before {
  content: "eXtensible Language";
}
#app-mount .markup-2BOw-j pre code[class~=coffee i]:before {
  content: "CoffeeScript";
}
#app-mount .markup-2BOw-j pre code[class~=ruby i]:before {
  content: "Ruby";
}
#app-mount .markup-2BOw-j pre code[class~=sql i]:before {
  content: "SQL";
}
#app-mount .markup-2BOw-j pre code[class~=java i]:before {
  content: "Java";
}
#app-mount .markup-2BOw-j pre code[class~=py i]:before, #app-mount .markup-2BOw-j pre code[class~=python i]:before {
  content: "Python";
}
#app-mount .markup-2BOw-j pre code[class~=vb i]:before, #app-mount .markup-2BOw-j pre code[class~=visualbasic i]:before, #app-mount .markup-2BOw-j pre code[class~=vbs i]:before {
  content: "Visual Basic";
}
#app-mount .markup-2BOw-j pre code[class~=lua i]:before {
  content: "Lua";
}
#app-mount .markup-2BOw-j pre code[class~=php i]:before {
  content: "Php";
}
#app-mount .markup-2BOw-j pre code[class~=swift i]:before {
  content: "Swift";
}
#app-mount .markup-2BOw-j pre code[class~=makefile i]:before {
  content: "Makefile";
}
#app-mount .markup-2BOw-j pre code[class~=go i]:before {
  content: "Go";
}
#app-mount .markup-2BOw-j pre code[class~=rust i]:before {
  content: "Rust";
}
#app-mount .markup-2BOw-j pre code[class~=prolog i]:before {
  content: "Prolog";
}
#app-mount .markup-2BOw-j pre code[class~=ts i]:before, #app-mount .markup-2BOw-j pre code[class~=typescript i]:before {
  content: "TypeScript";
}
#app-mount .markup-2BOw-j pre code[class~=http i]:before {
  content: "HyperText Transfer Protocol";
}
#app-mount .markup-2BOw-j pre code[class~=json i]:before {
  content: "JSON";
}
#app-mount .markup-2BOw-j pre code[class~=xml i]:before {
  content: "XML";
}
#app-mount .markup-2BOw-j pre code[class~=less i]:before {
  content: "Less";
}
#app-mount .markup-2BOw-j pre code[class~=sass i]:before, #app-mount .markup-2BOw-j pre code[class~=scss i]:before {
  content: "SCSS";
}
#app-mount .markup-2BOw-j pre code[class~=elm i]:before {
  content: "Elm";
}
#app-mount .markup-2BOw-j pre code[class~=cpp i]:before {
  content: "C++";
}
#app-mount .markup-2BOw-j pre code[class~=hbs i]:before {
  content: "Handlebars";
}
#app-mount .markup-2BOw-j pre code[class~="1c" i]:before {
  content: "1c";
}
#app-mount .markup-2BOw-j pre code[class~=abnf i]:before {
  content: "ABNF";
}
#app-mount .markup-2BOw-j pre code[class~=clojure i]:before {
  content: "Clojure";
}
#app-mount .markup-2BOw-j pre code[class~=objc i]:before {
  content: "Objective-C";
}
#app-mount .markup-2BOw-j pre code[class~=yaml i]:before {
  content: "YAML";
}
#app-mount .markup-2BOw-j pre code[class~=shell i]:before, #app-mount .markup-2BOw-j pre code[class~=sh i]:before {
  content: "Shell";
}
#app-mount .markup-2BOw-j pre code[class~=kotlin i]:before {
  content: "Kotlin";
}
#app-mount .markup-2BOw-j pre code[class~=apache i]:before {
  content: "Apache";
}
#app-mount .markup-2BOw-j pre code[class~=stylus i]:before {
  content: "Stylus";
}
#app-mount .markup-2BOw-j pre code[class~=avrasm i]:before {
  content: "AVR Assembler";
}
#app-mount .markup-2BOw-j pre code[class~=llvm i]:before {
  content: "LLVM iR";
}
#app-mount .markup-2BOw-j pre code[class~=mipsasm i]:before {
  content: "MIPS Assembly";
}
#app-mount .markup-2BOw-j pre code[class~=x86asm i]:before {
  content: "Intel x86 Assembly";
}
#app-mount .markup-2BOw-j pre code[class~=crmsh i]:before {
  content: "crmsh";
}
#app-mount .markup-2BOw-j pre code[class~=dns i]:before {
  content: "DNS Zone File";
}
#app-mount .markup-2BOw-j pre code[class~=dockerfile i]:before {
  content: "Dockerfile";
}
#app-mount .markup-2BOw-j pre code[class~=dsconfig i]:before {
  content: "dsconfig";
}
#app-mount .markup-2BOw-j pre code[class~=jboss-cli i]:before {
  content: "jboss-cli";
}
#app-mount .markup-2BOw-j pre code[class~=ldif i]:before {
  content: "LDIF";
}
#app-mount .markup-2BOw-j pre code[class~="pf.conf" i]:before {
  content: "pf.conf";
}
#app-mount .markup-2BOw-j pre code[class~=puppet i]:before {
  content: "Puppet";
}
#app-mount .markup-2BOw-j pre code[class~=roboconf i]:before {
  content: "Roboconf";
}
#app-mount .markup-2BOw-j pre code[class~=axapta i]:before {
  content: "Microsoft Dynamics AX";
}
#app-mount .markup-2BOw-j pre code[class~=cos i]:before {
  content: "Cache Object Script";
}
#app-mount .markup-2BOw-j pre code[class~=isbl i]:before {
  content: "ISBL";
}
#app-mount .markup-2BOw-j pre code[class~=livecodeserver i]:before {
  content: "LiveCode";
}
#app-mount .markup-2BOw-j pre code[class~=ldif i]:before {
  content: "LDIF";
}
#app-mount .markup-2BOw-j pre code[class~=ruleslanguage i]:before {
  content: "Oracle Rules Language";
}
#app-mount .markup-2BOw-j pre code[class~=clean i]:before {
  content: "Clean";
}
#app-mount .markup-2BOw-j pre code[class~=coq i]:before {
  content: "Coq";
}
#app-mount .markup-2BOw-j pre code[class~=elixir i]:before {
  content: "Elixir";
}
#app-mount .markup-2BOw-j pre code[class~=erlang-repl i]:before {
  content: "Erlang REPL";
}
#app-mount .markup-2BOw-j pre code[class~=erlang i]:before {
  content: "Erlang";
}
#app-mount .markup-2BOw-j pre code[class~=flix i]:before {
  content: "Flix";
}
#app-mount .markup-2BOw-j pre code[class~=fsharp i]:before, #app-mount .markup-2BOw-j pre code[class~=fs i]:before {
  content: "F#";
}
#app-mount .markup-2BOw-j pre code[class~=haskell i]:before {
  content: "Haskell";
}
#app-mount .markup-2BOw-j pre code[class~=ocaml i]:before {
  content: "OCaml";
}
#app-mount .markup-2BOw-j pre code[class~=scala i]:before {
  content: "Scala";
}
#app-mount .markup-2BOw-j pre code[class~=sml i]:before {
  content: "SML (Standard ML)";
}
#app-mount .markup-2BOw-j pre code[class~=xquery i]:before {
  content: "XQuery";
}
#app-mount .markup-2BOw-j pre code[class~=glsl i]:before {
  content: "GLSL";
}
#app-mount .markup-2BOw-j pre code[class~=mel i]:before {
  content: "MEL";
}
#app-mount .markup-2BOw-j pre code[class~=processing i]:before {
  content: "Processing";
}
#app-mount .markup-2BOw-j pre code[class~=rib i]:before {
  content: "RenderMan RIB";
}
#app-mount .markup-2BOw-j pre code[class~=rsl i]:before {
  content: "RenderMan RSL";
}
#app-mount .markup-2BOw-j pre code[class~=armasm i]:before {
  content: "Arm Assembly";
}
#app-mount .markup-2BOw-j pre code[class~=asm i]:before, #app-mount .markup-2BOw-j pre code[class~=assembly i]:before {
  content: "Assembly";
}
#app-mount .markup-2BOw-j pre code .hljs-built_in,
#app-mount .markup-2BOw-j pre code .hljs-doctag,
#app-mount .markup-2BOw-j pre code .hljs-literal,
#app-mount .markup-2BOw-j pre code .hljs-meta .hljs-meta-string,
#app-mount .markup-2BOw-j pre code .hljs-number,
#app-mount .markup-2BOw-j pre code .hljs-regexp,
#app-mount .markup-2BOw-j pre code .hljs-selector-class {
  color: var(--syntax-purple);
}
#app-mount .markup-2BOw-j pre code .hljs-attribute,
#app-mount .markup-2BOw-j pre code .hljs-name,
#app-mount .markup-2BOw-j pre code .hljs-section,
#app-mount .markup-2BOw-j pre code .hljs-selector-class,
#app-mount .markup-2BOw-j pre code .hljs-selector-id,
#app-mount .markup-2BOw-j pre code .hljs-string,
#app-mount .markup-2BOw-j pre code .hljs-title {
  color: var(--syntax-blue);
}
#app-mount .markup-2BOw-j pre code .hljs-attr,
#app-mount .markup-2BOw-j pre code .hljs-attribute,
#app-mount .markup-2BOw-j pre code .hljs-bullet,
#app-mount .markup-2BOw-j pre code .hljs-class,
#app-mount .markup-2BOw-j pre code .hljs-link,
#app-mount .markup-2BOw-j pre code .hljs-meta,
#app-mount .markup-2BOw-j pre code .hljs-meta .hljs-keyword,
#app-mount .markup-2BOw-j pre code .hljs-selector-attr,
#app-mount .markup-2BOw-j pre code .hljs-selector-pseudo,
#app-mount .markup-2BOw-j pre code .hljs-subst,
#app-mount .markup-2BOw-j pre code .hljs-symbol,
#app-mount .markup-2BOw-j pre code .hljs-template-variable,
#app-mount .markup-2BOw-j pre code .hljs-title,
#app-mount .markup-2BOw-j pre code .hljs-type,
#app-mount .markup-2BOw-j pre code .hljs-variable {
  color: var(--syntax-orange);
}
#app-mount .markup-2BOw-j pre code .hljs-addition,
#app-mount .markup-2BOw-j pre code .hljs-keyword,
#app-mount .markup-2BOw-j pre code .hljs-selector-tag {
  color: var(--syntax-green);
}
#app-mount .markup-2BOw-j pre code .hljs-comment,
#app-mount .markup-2BOw-j pre code .hljs-quote {
  color: var(--syntax-grey);
}

#app-mount .reactions-12N0jA {
  margin: 0;
  padding: 0;
}
#app-mount .reactions-12N0jA .reactionBtn-3N03Zj {
  color: var(--text-muted);
  cursor: var(--cursor);
  display: flex;
  align-items: center;
  justify-content: center;
}
#app-mount .reactions-12N0jA .reactionBtn-3N03Zj:hover, #app-mount .reactions-12N0jA .reactionBtn-3N03Zj[aria-expanded=true] {
  color: var(--accent-solid) !important;
}
#app-mount .reactions-12N0jA .reactionBtn-3N03Zj svg {
  width: 12px;
  height: 12px;
  color: inherit;
}
#app-mount .reactions-12N0jA .reactionBtn-3N03Zj svg path {
  d: path("M12 9H7v5H5V9H0V7h5V2h2v5h5v2z");
  transform: scale(1.6) translateX(1px) translateY(-1px);
}
#app-mount .reactions-12N0jA .reaction-1hd86g {
  background: var(--background-light);
  border: 1px solid var(--base-border);
  margin-bottom: var(--spacing-half);
  margin-right: var(--spacing-half);
  border-radius: var(--button-border-radius);
  cursor: var(--cursor);
  box-sizing: border-box;
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
}
#app-mount .reactions-12N0jA .reaction-1hd86g:hover {
  border: 1px solid currentColor;
}
#app-mount .reactions-12N0jA .reaction-1hd86g:active {
  box-shadow: 0 0 0 1px currentColor;
  border: 1px solid currentColor;
}
#app-mount .reactions-12N0jA .reaction-1hd86g .reactionInner-15NvIl {
  padding: 0;
}
#app-mount .reactions-12N0jA .reaction-1hd86g .reactionInner-15NvIl .reactionCount-2mvXRV {
  margin: 0;
  margin-left: var(--spacing-third);
  font-size: var(--font-size-sm);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
}
#app-mount .reactions-12N0jA .reaction-1hd86g .reactionInner-15NvIl .emoji {
  margin: 0;
  width: var(--font-size-md);
  height: var(--font-size-md);
}
#app-mount .reactions-12N0jA .reaction-1hd86g.reactionMe-wv5HKu {
  background: rgba(var(--accent), 0.25);
  border-color: var(--accent-solid);
}
#app-mount .reactions-12N0jA .reaction-1hd86g.reactionMe-wv5HKu .reactionCount-2mvXRV {
  color: var(--text-focus);
}
#app-mount .reactions-12N0jA .reaction-1hd86g.reactionMe-wv5HKu:active {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
}

html.theme-light #app-mount .reactions-12N0jA .reaction-1hd86g:not(.reactionMe-wv5HKu):hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .reactions-12N0jA .reaction-1hd86g:not(.reactionMe-wv5HKu):active {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .wrapper-2qzCYF {
  background: var(--background);
  border-bottom: 1px solid var(--base-border);
  z-index: 100;
}
#app-mount .wrapper-2qzCYF .videoControls-24w7Xp {
  padding: 0 var(--spacing) var(--spacing);
}
#app-mount .wrapper-2qzCYF .gradientContainer-10lXLB {
  opacity: 0.5;
}
#app-mount .wrapper-2qzCYF .videoWrapper-2v09vt {
  background-color: var(--background);
}
#app-mount .wrapper-2qzCYF .rightTrayIcon-3hFoUP {
  margin-left: var(--spacing);
}
#app-mount .wrapper-2qzCYF .bottomControls-lIJyYL {
  z-index: 1000 !important;
  position: relative;
}
#app-mount .wrapper-2qzCYF .root-2sELX6 {
  background: transparent;
}
#app-mount .wrapper-2qzCYF .root-2sELX6 .header-2Zv56X {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .wrapper-2qzCYF .headerWrapper-3NUKsd {
  margin: 0 calc(var(--spacing) * -1);
}
#app-mount .wrapper-2qzCYF .headerWrapper-3NUKsd .button-1xaXFt {
  margin: 0 var(--spacing);
}
#app-mount .wrapper-2qzCYF .headerWrapper-3NUKsd .avatar-EDoEQX {
  margin: 0 var(--spacing-half);
  margin-left: 0;
}
#app-mount .wrapper-2qzCYF .headerWrapper-3NUKsd .playingText-3KIkt6 {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  font-size: var(--font-size-md);
  margin: 0;
}
#app-mount .wrapper-2qzCYF .quickSelect-3BxO0K {
  color: var(--text-normal);
  font-size: var(--font-size);
  margin-top: var(--spacing);
}
#app-mount .wrapper-2qzCYF .quickSelect-3BxO0K .quickSelectLabel-2r3iJ_ {
  line-height: normal;
  text-transform: capitalize;
}
#app-mount .wrapper-2qzCYF .quickSelect-3BxO0K .quickSelectLabel-2r3iJ_:after {
  content: ":";
}
#app-mount .wrapper-2qzCYF .quickSelect-3BxO0K .flex-1xMQg5 {
  margin: 0;
  margin-left: var(--spacing-half);
}
#app-mount .wrapper-2qzCYF .quickSelect-3BxO0K .flex-1xMQg5 .quickSelectValue-lImyM6 {
  margin: 0;
  font-weight: var(--font-weight-semibold);
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 {
  color: var(--text-normal);
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M10 5V3H5.375C4.06519 3 3 4.06519 3 5.375V18.625C3 19.936 4.06519 21 5.375 21H18.625C19.936 21 21 19.936 21 18.625V14H19V19H5V5H10Z"] {
  d: path("M11 10h1v3c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h3v1H1v10h10v-3zM6 2l2.25 2.25L5 7.5 6.5 9l3.25-3.25L12 8V2H6z");
  transform: scale(1.45) translateX(1.5px) translateY(0.5px);
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M10 5V3H5.375C4.06519 3 3 4.06519 3 5.375V18.625C3 19.936 4.06519 21 5.375 21H18.625C19.936 21 21 19.936 21 18.625V14H19V19H5V5H10Z"] ~ path {
  display: none;
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M19,3H14V5h5v5h2V5A2,2,0,0,0,19,3Z"] {
  d: path("M4.75 4.5a.25.25 0 00-.25.25v3.5a.75.75 0 01-1.5 0v-3.5C3 3.784 3.784 3 4.75 3h3.5a.75.75 0 010 1.5h-3.5zM15 3.75a.75.75 0 01.75-.75h3.5c.966 0 1.75.784 1.75 1.75v3.5a.75.75 0 01-1.5 0v-3.5a.25.25 0 00-.25-.25h-3.5a.75.75 0 01-.75-.75zM3.75 15a.75.75 0 01.75.75v3.5c0 .138.112.25.25.25h3.5a.75.75 0 010 1.5h-3.5A1.75 1.75 0 013 19.25v-3.5a.75.75 0 01.75-.75zm16.5 0a.75.75 0 01.75.75v3.5A1.75 1.75 0 0119.25 21h-3.5a.75.75 0 010-1.5h3.5a.25.25 0 00.25-.25v-3.5a.75.75 0 01.75-.75z");
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M19,3H14V5h5v5h2V5A2,2,0,0,0,19,3Z"] ~ path {
  display: none;
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M11.383 3.07904C11.009 2.92504 10.579 3.01004 10.293 3.29604L6 8.00204H3C2.45 8.00204 2 8.45304 2 9.00204V15.002C2 15.552 2.45 16.002 3 16.002H6L10.293 20.71C10.579 20.996 11.009 21.082 11.383 20.927C11.757 20.772 12 20.407 12 20.002V4.00204C12 3.59904 11.757 3.23204 11.383 3.07904ZM14 5.00195V7.00195C16.757 7.00195 19 9.24595 19 12.002C19 14.759 16.757 17.002 14 17.002V19.002C17.86 19.002 21 15.863 21 12.002C21 8.14295 17.86 5.00195 14 5.00195ZM14 9.00195C15.654 9.00195 17 10.349 17 12.002C17 13.657 15.654 15.002 14 15.002V13.002C14.551 13.002 15 12.553 15 12.002C15 11.451 14.551 11.002 14 11.002V9.00195Z"],
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M10.293 3.29604C10.579 3.01004 11.009 2.92504 11.383 3.07904C11.757 3.23204 12 3.59904 12 4.00204V20.002C12 20.407 11.757 20.772 11.383 20.927C11.009 21.082 10.579 20.996 10.293 20.71L6 16.002H3C2.45 16.002 2 15.552 2 15.002V9.00204C2 8.45304 2.45 8.00204 3 8.00204H6L10.293 3.29604ZM14 9.00195C15.654 9.00195 17 10.349 17 12.002C17 13.657 15.654 15.002 14 15.002V13.002C14.551 13.002 15 12.553 15 12.002C15 11.451 14.551 11.002 14 11.002V9.00195Z"] {
  d: path("M11.553 3.064A.75.75 0 0112 3.75v16.5a.75.75 0 01-1.255.555L5.46 16H2.75A1.75 1.75 0 011 14.25v-4.5C1 8.784 1.784 8 2.75 8h2.71l5.285-4.805a.75.75 0 01.808-.13zM10.5 5.445l-4.245 3.86a.75.75 0 01-.505.195h-3a.25.25 0 00-.25.25v4.5c0 .138.112.25.25.25h3a.75.75 0 01.505.195l4.245 3.86V5.445z M18.718 4.222a.75.75 0 011.06 0c4.296 4.296 4.296 11.26 0 15.556a.75.75 0 01-1.06-1.06 9.5 9.5 0 000-13.436.75.75 0 010-1.06z M16.243 7.757a.75.75 0 10-1.061 1.061 4.5 4.5 0 010 6.364.75.75 0 001.06 1.06 6 6 0 000-8.485z");
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M19.73 9L21 10.27l-2.23 2.23L21 14.73 19.73 16l-2.23-2.23L15.27 16 14 14.73l2.23-2.23L14 10.27 15.27 9l2.23 2.23z"] {
  d: path("M12 3.75a.75.75 0 00-1.255-.555L5.46 8H2.75A1.75 1.75 0 001 9.75v4.5c0 .966.784 1.75 1.75 1.75h2.71l5.285 4.805A.75.75 0 0012 20.25V3.75zM6.255 9.305l4.245-3.86v13.11l-4.245-3.86a.75.75 0 00-.505-.195h-3a.25.25 0 01-.25-.25v-4.5a.25.25 0 01.25-.25h3a.75.75 0 00.505-.195z M16.28 8.22a.75.75 0 10-1.06 1.06L17.94 12l-2.72 2.72a.75.75 0 101.06 1.06L19 13.06l2.72 2.72a.75.75 0 101.06-1.06L20.06 12l2.72-2.72a.75.75 0 00-1.06-1.06L19 10.94l-2.72-2.72z");
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M19.73 9L21 10.27l-2.23 2.23L21 14.73 19.73 16l-2.23-2.23L15.27 16 14 14.73l2.23-2.23L14 10.27 15.27 9l2.23 2.23z"] + path {
  display: none;
}
#app-mount .wrapper-2qzCYF .controlIcon-35oS15 path[d="M16.59 8.59004L12 13.17L7.41 8.59004L6 10L12 16L18 10L16.59 8.59004Z"] {
  d: path("M5.22 8.72a.75.75 0 000 1.06l6.25 6.25a.75.75 0 001.06 0l6.25-6.25a.75.75 0 00-1.06-1.06L12 14.44 6.28 8.72a.75.75 0 00-1.06 0z");
}
#app-mount .wrapper-2qzCYF .overlay-1YJlCn {
  margin: 0;
  transition: none;
}
#app-mount .wrapper-2qzCYF .overlay-1YJlCn .status-254fhp {
  border-radius: var(--border-radius);
  margin-left: var(--spacing);
  padding: var(--spacing-half);
  box-sizing: border-box;
  width: 24px;
  height: 24px;
  color: var(--white);
  background: rgba(0, 0, 0, 0.5);
}
#app-mount .wrapper-2qzCYF .overlay-1YJlCn .overlayTitle-8IcS01 {
  padding: var(--spacing-third) var(--spacing);
  border-radius: var(--border-radius);
  background: var(--background);
  color: var(--text-normal);
  box-shadow: var(--elevation-1);
  font-size: var(--font-size);
  border: 1px solid var(--base-border);
  position: relative;
  font-weight: var(--font-weight-semibold);
}
#app-mount .wrapper-2qzCYF .root-2CDANf[style*="padding-left: 0"] .tile-2naSqK {
  margin: 0 !important;
}
#app-mount .wrapper-2qzCYF .root-2CDANf .participantsButton-KYW-IW {
  right: -2px;
  padding: 0;
  border-radius: var(--border-radius);
  background: var(--background);
  transition: none;
  border: 1px solid var(--base-border);
  cursor: var(--cursor);
}
#app-mount .wrapper-2qzCYF .root-2CDANf .participantsButton-KYW-IW:hover {
  background: var(--background-modifier-hover);
}
#app-mount .wrapper-2qzCYF .root-2CDANf .participantsButton-KYW-IW:active {
  background: var(--background-modifier-active);
}
#app-mount .wrapper-2qzCYF .root-2CDANf .members-3RE5jX {
  display: none;
}
#app-mount .wrapper-2qzCYF .root-1EVRXA .tileSizer-3VCNFs {
  margin-bottom: var(--spacing);
  width: 100%;
}
#app-mount .wrapper-2qzCYF .root-1EVRXA .tileSizer-3VCNFs .tile-2gi3tr {
  margin-right: var(--spacing);
}
#app-mount .wrapper-2qzCYF .indicators-3zIm5K {
  top: var(--spacing);
  right: var(--spacing);
}
#app-mount .wrapper-2qzCYF .wrapper-vj0FTk {
  padding: 0 0 0 var(--spacing);
}
#app-mount .wrapper-2qzCYF .tile-2naSqK {
  border-radius: var(--border-radius);
  background: var(--background-alt);
  margin-right: var(--spacing);
  box-sizing: border-box;
}
#app-mount .wrapper-2qzCYF .tile-2naSqK .border-3dQmSY {
  border-radius: var(--border-radius);
}
#app-mount .wrapper-2qzCYF .tile-2naSqK .border-3dQmSY.speaking-WDn8Wm {
  box-shadow: inset 0 0 0 2px rgb(var(--status-green));
}
#app-mount .wrapper-2qzCYF .tile-2naSqK .emptyPreview-2kuSNe {
  background: transparent;
}
#app-mount .wrapper-2qzCYF .tile-2naSqK .selectedScreen-3aLLjg {
  background: rgba(0, 0, 0, 0.5);
}
#app-mount .wrapper-2qzCYF .tile-2naSqK .selectedScreen-3aLLjg .selectedIcon-1Ihli9 {
  color: var(--white);
}
#app-mount .wrapper-2qzCYF .tile-2naSqK .selectedScreen-3aLLjg .selectedIcon-1Ihli9 path {
  d: path("M15.2 2.09L10 5.72V3c0-.55-.45-1-1-1H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h8c.55 0 1-.45 1-1V9.28l5.2 3.63c.33.23.8 0 .8-.41v-10c0-.41-.47-.64-.8-.41z");
  transform: scale(1.45) translateY(1px);
}
#app-mount .wrapper-2qzCYF .pictureInPictureWindow-1B5qSe {
  border-radius: 0;
}
#app-mount .wrapper-2qzCYF .pictureInPictureWindow-1B5qSe .elevationHigh-3A9Xbf {
  box-shadow: none;
}
#app-mount .wrapper-2qzCYF .pictureInPictureWindow-1B5qSe .elevationHigh-3A9Xbf .tile-2naSqK {
  box-shadow: none;
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm {
  padding: 0;
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .wrapper-2QE8vf.ringingIncoming-38YcLn:after,
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .wrapper-2QE8vf.ringingOutgoing-mbXhhQ:after {
  border-radius: var(--border-radius);
  border: 3px solid rgba(var(--status-green), 0.25);
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .border-Jn5IOt {
  border-radius: var(--border-radius);
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .border-Jn5IOt.speaking-B2MXPi {
  box-shadow: inset 0 0 0 2px rgb(var(--status-green)), 0 0 0 4px rgb(var(--status-green), 0.25);
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd {
  margin: 0 var(--spacing);
  width: var(--avatar-size-xl) !important;
  height: var(--avatar-size-xl) !important;
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd .status-1WEaea {
  border-radius: var(--border-radius);
  background: rgb(var(--status-red));
  border: 1px solid var(--base-border);
  box-sizing: border-box;
  height: 24px;
  width: 24px;
  padding: var(--spacing-third);
  bottom: -5px;
  right: -5px;
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd .wrapper-2QE8vf,
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd .callAvatarMask-1SLlRi {
  width: var(--avatar-size-xl) !important;
  height: var(--avatar-size-xl) !important;
  overflow: visible;
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd .wrapper-2QE8vf foreignObject,
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd .callAvatarMask-1SLlRi foreignObject {
  -webkit-mask: none;
          mask: none;
  overflow: visible;
}
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd .wrapper-2QE8vf foreignObject .voiceAvatar-14IynY,
#app-mount .wrapper-2qzCYF .voiceCallWrapper-3kPwHm .participant-1lOCsd .callAvatarMask-1SLlRi foreignObject .voiceAvatar-14IynY {
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  box-sizing: border-box;
}
#app-mount .wrapper-2qzCYF .green-plH-Mj {
  margin: 0;
  background: rgb(var(--status-green));
  cursor: var(--cursor);
  width: 40px;
  height: 40px;
  padding: 0;
  border-radius: 0;
  transition: none;
  color: var(--text-normal);
  background: var(--background-alt);
  border: 1px solid var(--base-border);
  border-radius: 0 var(--border-radius) var(--border-radius) 0;
}
#app-mount .wrapper-2qzCYF .green-plH-Mj .controlIcon-35oS15 {
  height: 18px;
  color: inherit;
}
#app-mount .wrapper-2qzCYF .green-plH-Mj:hover {
  background: var(--background-modifier-hover);
}
#app-mount .wrapper-2qzCYF .green-plH-Mj:active {
  background: var(--background-modifier-active);
}
#app-mount .wrapper-2qzCYF .green-plH-Mj.active-1QRrIS {
  border-right: none;
  border-radius: var(--border-radius) 0 0 var(--border-radius);
}
#app-mount .wrapper-2qzCYF .green-plH-Mj path[d="M21.526 8.149C21.231 7.966 20.862 7.951 20.553 8.105L18 9.382V7C18 5.897 17.103 5 16 5H4C2.897 5 2 5.897 2 7V17C2 18.104 2.897 19 4 19H16C17.103 19 18 18.104 18 17V14.618L20.553 15.894C20.694 15.965 20.847 16 21 16C21.183 16 21.365 15.949 21.526 15.851C21.82 15.668 22 15.347 22 15V9C22 8.653 21.82 8.332 21.526 8.149Z"] {
  d: path("M15.2 2.09L10 5.72V3c0-.55-.45-1-1-1H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h8c.55 0 1-.45 1-1V9.28l5.2 3.63c.33.23.8 0 .8-.41v-10c0-.41-.47-.64-.8-.41z");
  transform: scale(1.45) translateY(1px);
}
#app-mount .wrapper-2qzCYF .green-plH-Mj path[d="M11 5V3C16.515 3 21 7.486 21 13H19C19 8.589 15.411 5 11 5ZM17 13H15C15 10.795 13.206 9 11 9V7C14.309 7 17 9.691 17 13ZM11 11V13H13C13 11.896 12.105 11 11 11ZM14 16H18C18.553 16 19 16.447 19 17V21C19 21.553 18.553 22 18 22H13C6.925 22 2 17.075 2 11V6C2 5.447 2.448 5 3 5H7C7.553 5 8 5.447 8 6V10C8 10.553 7.553 11 7 11H6C6.063 14.938 9 18 13 18V17C13 16.447 13.447 16 14 16Z"] {
  d: path("M11 10c-1 1-1 2-2 2s-2-1-3-2-2-2-2-3 1-1 2-2-2-4-3-4-3 3-3 3c0 2 2.055 6.055 4 8s6 4 8 4c0 0 3-2 3-3s-3-4-4-3z");
  transform: scale(1.3) translateX(2px) translateY(1px);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO {
  border-radius: var(--button-border-radius);
  box-shadow: 0 0 0 0.75px var(--base-border);
  overflow: hidden;
  margin: 0;
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO .controlButton-2MhVEL {
  margin: 0;
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO .contextMenuNub-3yOOYo {
  padding: 0;
  background: transparent;
  border-radius: var(--border-radius);
  color: var(--text-normal);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO .contextMenuNub-3yOOYo:hover, #app-mount .wrapper-2qzCYF .wrapper-3EGhDO .contextMenuNub-3yOOYo.active-1QRrIS {
  background: var(--background-dark);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button {
  margin: 0;
  background: var(--background-alt);
  cursor: var(--cursor);
  width: 40px;
  height: 40px;
  padding: 0;
  border-radius: 0;
  transition: none;
  color: var(--text-normal);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button .controlIcon-35oS15 {
  height: 30px;
  color: inherit;
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M21.526 8.149C21.231 7.966 20.862 7.951 20.553 8.105L18 9.382V7C18 5.897 17.103 5 16 5H4C2.897 5 2 5.897 2 7V17C2 18.104 2.897 19 4 19H16C17.103 19 18 18.104 18 17V14.618L20.553 15.894C20.694 15.965 20.847 16 21 16C21.183 16 21.365 15.949 21.526 15.851C21.82 15.668 22 15.347 22 15V9C22 8.653 21.82 8.332 21.526 8.149Z"] {
  d: path("M15.2 2.09L10 5.72V3c0-.55-.45-1-1-1H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h8c.55 0 1-.45 1-1V9.28l5.2 3.63c.33.23.8 0 .8-.41v-10c0-.41-.47-.64-.8-.41z");
  transform: scale(1.45) translateY(1px);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M2 4.5C2 3.397 2.897 2.5 4 2.5H20C21.103 2.5 22 3.397 22 4.5V15.5C22 16.604 21.103 17.5 20 17.5H13V19.5H17V21.5H7V19.5H11V17.5H4C2.897 17.5 2 16.604 2 15.5V4.5ZM13.2 14.3375V11.6C9.864 11.6 7.668 12.6625 6 15C6.672 11.6625 8.532 8.3375 13.2 7.6625V5L18 9.6625L13.2 14.3375Z"] {
  d: path("M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z");
  transform: scale(1.1) translateX(3px) translateY(3px);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M21.1169 1.11603L22.8839 2.88403L19.7679 6.00003L22.8839 9.11603L21.1169 10.884L17.9999 7.76803L14.8839 10.884L13.1169 9.11603L16.2329 6.00003L13.1169 2.88403L14.8839 1.11603L17.9999 4.23203L21.1169 1.11603ZM18 22H13C6.925 22 2 17.075 2 11V6C2 5.447 2.448 5 3 5H7C7.553 5 8 5.447 8 6V10C8 10.553 7.553 11 7 11H6C6.063 14.938 9 18 13 18V17C13 16.447 13.447 16 14 16H18C18.553 16 19 16.447 19 17V21C19 21.553 18.553 22 18 22Z"] {
  d: path("M11 10c-1 1-1 2-2 2s-2-1-3-2-2-2-2-3 1-1 2-2-2-4-3-4-3 3-3 3c0 2 2.055 6.055 4 8s6 4 8 4c0 0 3-2 3-3s-3-4-4-3z");
  transform: scale(1.1) translateX(3px) translateY(3px);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M14.99 11C14.99 12.66 13.66 14 12 14C10.34 14 9 12.66 9 11V5C9 3.34 10.34 2 12 2C13.66 2 15 3.34 15 5L14.99 11ZM12 16.1C14.76 16.1 17.3 14 17.3 11H19C19 14.42 16.28 17.24 13 17.72V21H11V17.72C7.72 17.23 5 14.41 5 11H6.7C6.7 14 9.24 16.1 12 16.1ZM12 4C11.2 4 11 4.66667 11 5V11C11 11.3333 11.2 12 12 12C12.8 12 13 11.3333 13 11V5C13 4.66667 12.8 4 12 4Z"],
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M6.7 11H5C5 12.19 5.34 13.3 5.9 14.28L7.13 13.05C6.86 12.43 6.7 11.74 6.7 11Z"] {
  d: path("M7.5 11c1.381 0 2.5-1.119 2.5-2.5v-6c0-1.381-1.119-2.5-2.5-2.5s-2.5 1.119-2.5 2.5v6c0 1.381 1.119 2.5 2.5 2.5zM11 7v1.5c0 1.933-1.567 3.5-3.5 3.5s-3.5-1.567-3.5-3.5v-1.5h-1v1.5c0 2.316 1.75 4.223 4 4.472v2.028h-2v1h5v-1h-2v-2.028c2.25-0.249 4-2.156 4-4.472v-1.5h-1z");
  transform: scale(1.5) translateX(1px);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M14.99 11C14.99 12.66 13.66 14 12 14C10.34 14 9 12.66 9 11V5C9 3.34 10.34 2 12 2C13.66 2 15 3.34 15 5L14.99 11ZM12 16.1C14.76 16.1 17.3 14 17.3 11H19C19 14.42 16.28 17.24 13 17.72V21H11V17.72C7.72 17.23 5 14.41 5 11H6.7C6.7 14 9.24 16.1 12 16.1ZM12 4C11.2 4 11 4.66667 11 5V11C11 11.3333 11.2 12 12 12C12.8 12 13 11.3333 13 11V5C13 4.66667 12.8 4 12 4Z"] ~ path,
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M6.7 11H5C5 12.19 5.34 13.3 5.9 14.28L7.13 13.05C6.86 12.43 6.7 11.74 6.7 11Z"] ~ path {
  display: none;
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M14.99 11C14.99 12.66 13.66 14 12 14C10.34 14 9 12.66 9 11V5C9 3.34 10.34 2 12 2C13.66 2 15 3.34 15 5L14.99 11ZM12 16.1C14.76 16.1 17.3 14 17.3 11H19C19 14.42 16.28 17.24 13 17.72V21H11V17.72C7.72 17.23 5 14.41 5 11H6.7C6.7 14 9.24 16.1 12 16.1ZM12 4C11.2 4 11 4.66667 11 5V11C11 11.3333 11.2 12 12 12C12.8 12 13 11.3333 13 11V5C13 4.66667 12.8 4 12 4Z"][d="M6.7 11H5C5 12.19 5.34 13.3 5.9 14.28L7.13 13.05C6.86 12.43 6.7 11.74 6.7 11Z"],
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button path[d="M6.7 11H5C5 12.19 5.34 13.3 5.9 14.28L7.13 13.05C6.86 12.43 6.7 11.74 6.7 11Z"][d="M6.7 11H5C5 12.19 5.34 13.3 5.9 14.28L7.13 13.05C6.86 12.43 6.7 11.74 6.7 11Z"] {
  color: rgb(var(--status-red));
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button:hover {
  background: var(--background-modifier-hover);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button:active {
  background: var(--background-modifier-active);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button.red-33-Lnk {
  background: rgb(var(--status-red));
  border-left: 1px solid var(--base-border);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO button.red-33-Lnk svg {
  color: var(--white);
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO .contextMenuContainer-2HlOMK {
  height: 40px;
  width: 40px;
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO .contextMenuContainer-2HlOMK button {
  height: 56px;
  width: 100%;
}
#app-mount .wrapper-2qzCYF .wrapper-3EGhDO .contextMenuContainer-2HlOMK foreignObject {
  -webkit-mask: none;
          mask: none;
}

#app-mount .membersWrap-2h-GB4 {
  min-width: unset;
}
#app-mount .membersWrap-2h-GB4 .members-1998pB {
  width: var(--sidebar-width);
  border-left: 1px solid var(--base-border);
  background: var(--background);
}
#app-mount .membersWrap-2h-GB4 .members-1998pB > div {
  background: transparent;
}
#app-mount .membersWrap-2h-GB4 .members-1998pB::-webkit-scrollbar {
  display: none;
}

#app-mount .members-1998pB .membersGroup-v9BXpm {
  padding: var(--spacing);
  height: auto;
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  text-transform: none;
}

#app-mount .member-3-YXUe {
  padding: 0;
  margin: 0;
  max-width: 100%;
}
#app-mount .member-3-YXUe.offline-3nJYBR {
  opacity: 0.5;
}
#app-mount .member-3-YXUe .layout-2DM8Md {
  border-radius: 0;
  height: var(--member-height);
  padding: 0 calc(var(--spacing) + 5px);
  cursor: var(--cursor);
}
#app-mount .member-3-YXUe .avatar-3uk_u9 {
  margin-right: var(--spacing);
  width: var(--avatar-size-sm) !important;
  height: var(--avatar-size-sm) !important;
}
#app-mount .member-3-YXUe .name-uJV0GL {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .member-3-YXUe .wrapper-3t9DeA {
  width: var(--avatar-size-sm) !important;
  height: var(--avatar-size-sm) !important;
}
#app-mount .member-3-YXUe .content-3QAtGj {
  overflow: visible;
}
#app-mount .member-3-YXUe .activity-2Gy-9S {
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-semibold);
  color: var(--text-muted);
}
#app-mount .member-3-YXUe .activity-2Gy-9S .icon-15YQ1T {
  margin-left: calc(var(--spacing) / 4);
}
#app-mount .member-3-YXUe .botTag-3W9SuW:not(.tag-wWVHyf) {
  font-size: 0;
  padding: 0;
  height: auto;
  width: auto;
  background-color: var(--background-modifier-active);
  border-radius: var(--border-radius);
  order: -1;
  margin-left: 0;
  margin-top: 0;
  margin-right: var(--spacing-half);
}
#app-mount .member-3-YXUe .botTag-3W9SuW:not(.tag-wWVHyf) span, #app-mount .member-3-YXUe .botTag-3W9SuW:not(.tag-wWVHyf) svg {
  display: none;
}
#app-mount .member-3-YXUe .botTag-3W9SuW:not(.tag-wWVHyf):before {
  content: "";
  width: 16px;
  height: 16px;
  position: relative;
  display: flex;
  align-items: center;
  justify-content: center;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>') center/12px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>') center/12px no-repeat;
  background: var(--text-normal);
}
#app-mount .member-3-YXUe.selected-aXhQR6 .activity-2Gy-9S, #app-mount .member-3-YXUe.selected-aXhQR6 .roleColor-rz2vM0 {
  color: #fff !important;
}
#app-mount .member-3-YXUe.placeholder-3X_lzF {
  padding: 0 var(--spacing);
  animation: none;
}
#app-mount .member-3-YXUe.placeholder-3X_lzF .placeholderAvatar-damqh6 {
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  width: var(--avatar-size-sm);
  height: var(--avatar-size-sm);
  background: var(--background-dark);
}
#app-mount .member-3-YXUe.offline-3nJYBR .wrapper-3t9DeA foreignObject:after {
  content: none;
}

.mulitplePlaceholderUsername-pogq9I,
.placeholderUsername-2B_OA9,
.memberGroupsPlaceholder-3mwPub {
  background: var(--text-muted);
  opacity: 0.2;
  height: 4px;
  animation: none;
  border-radius: var(--border-radius);
}

#app-mount .pageWrapper-1PgVDX {
  background: var(--background-alt);
}
#app-mount .pageWrapper-1PgVDX .scroller-2FKFPG {
  margin-top: var(--toolbar-height);
  padding-top: 50px;
}
#app-mount .pageWrapper-1PgVDX .bg-AYqtMd {
  display: none;
}
#app-mount .pageWrapper-1PgVDX .pageHeader-3615mp {
  height: 0;
}
#app-mount .pageWrapper-1PgVDX .mainHeader-1i17pL {
  display: none;
}
#app-mount .pageWrapper-1PgVDX .body-2lagau:before {
  content: "";
  height: var(--toolbar-height);
  background: var(--toolbar-background);
  width: 100%;
  position: fixed;
  top: 21px;
  left: var(--base-left);
  border-bottom: 1px solid var(--toolbar-border);
  z-index: 10;
}
#app-mount .pageWrapper-1PgVDX .searchHelpText-19imBp {
  display: none;
}
#app-mount .pageWrapper-1PgVDX .search-JQJ-3r {
  position: fixed;
  top: 21px;
  left: var(--base-left);
  z-index: 11;
  margin-bottom: 0;
  align-items: center;
  justify-content: flex-start;
  height: var(--toolbar-height);
}
#app-mount .pageWrapper-1PgVDX .searchBox-26HYGw {
  flex: none;
  width: calc(100% - 196px);
  border-right: 1px solid var(--toolbar-border);
}
#app-mount .pageWrapper-1PgVDX .searchBox-3Y2Vi7 {
  background-color: transparent;
  box-shadow: none;
  border: none;
  border-radius: 0;
  box-sizing: border-box;
}
#app-mount .pageWrapper-1PgVDX .css-zrb2ns-singleValue {
  color: var(--toolbar-text-muted);
}
#app-mount .pageWrapper-1PgVDX .languageSelector-1R8fPE {
  margin-left: 0;
}
#app-mount .pageWrapper-1PgVDX .css-bacguy-container {
  border-radius: 0;
  box-shadow: none;
  background: transparent;
}
#app-mount .pageWrapper-1PgVDX .css-1wqqa50-container {
  border-radius: 0;
  box-shadow: none;
  background: transparent;
}
#app-mount .pageWrapper-1PgVDX .css-1hwfws3 {
  position: relative;
  top: 5px;
}
#app-mount .pageWrapper-1PgVDX .css-1wy0on6 {
  height: auto;
}
#app-mount .pageWrapper-1PgVDX .container-RHl2Ju {
  border-radius: var(--border-radius);
  background: var(--background-dark);
  border: 1px solid var(--base-border);
}
#app-mount .pageWrapper-1PgVDX .card-3DjzTQ {
  background-color: var(--background-dark);
  border: 1px solid var(--base-border);
  box-shadow: none;
  height: auto;
}
#app-mount .pageWrapper-1PgVDX .cardHeader-Int16m {
  margin-bottom: 0;
}
#app-mount .pageWrapper-1PgVDX .description-2QALGo {
  display: none;
}
#app-mount .pageWrapper-1PgVDX .guildInfo-2wGKIg {
  position: absolute;
  bottom: 0;
  width: 100%;
  box-sizing: border-box;
  padding: var(--spacing);
  background: linear-gradient(transparent 10%, rgba(0, 0, 0, 0.9));
}
#app-mount .pageWrapper-1PgVDX .guildInfo-2wGKIg .colorHeaderSecondary-3Sp3Ft {
  color: #fff;
  opacity: 0.7;
}
#app-mount .pageWrapper-1PgVDX .guildIcon-3W0pfo {
  bottom: unset;
  top: var(--spacing);
  left: var(--spacing);
}
#app-mount .pageWrapper-1PgVDX .iconMask-3b8GzQ {
  background: rgba(0, 0, 0, 0.5);
}
#app-mount .pageWrapper-1PgVDX .roundButton-2CW1Hh {
  border-radius: var(--border-radius);
}
#app-mount .pageWrapper-1PgVDX .roundButton-2CW1Hh:hover {
  background: var(--background-dark);
}
#app-mount .pageWrapper-1PgVDX .activeButton-1BJAiN {
  background: var(--accent-solid);
}
#app-mount .pageWrapper-1PgVDX .activeButton-1BJAiN:hover {
  background: var(--accent-solid);
}
#app-mount .pageWrapper-1PgVDX .lookFilled-1Gx00P.colorTransparent-1ewNp9 {
  padding: var(--spacing);
  min-height: unset;
  height: auto;
  background: var(--background-dark);
  border: 1px solid var(--base-border);
}
#app-mount .pageWrapper-1PgVDX .colorHeaderPrimary-26Jzh- {
  color: #fff;
}

#app-mount .container-1D34oG {
  background: var(--background-alt);
}
#app-mount .container-1D34oG .wrapper-3t9DeA {
  width: var(--avatar-size) !important;
  height: var(--avatar-size) !important;
}
#app-mount .container-1D34oG .tabBody-3YRQ8W .base-1x0h_U {
  font-size: var(--font-size);
  line-height: var(--line-height);
}
#app-mount .container-1D34oG .tabBody-3YRQ8W .colorHeaderSecondary-3Sp3Ft,
#app-mount .container-1D34oG .tabBody-3YRQ8W .colorStandard-2KCXvj {
  font-size: var(--font-size-sm);
  color: var(--text-muted);
  line-height: var(--line-height);
}
#app-mount .container-1D34oG .tabBody-3YRQ8W:before {
  content: none;
}
#app-mount .container-1D34oG .topPill-30KHOu {
  position: absolute;
  top: var(--toolbar-height);
  left: 0;
  width: calc(100vw - (var(--sidebar-width) * 2) - var(--noasw-base));
  background: var(--background);
  height: 30px;
  border-bottom: 1px solid var(--base-border);
  box-sizing: border-box;
}
#app-mount .container-1D34oG .topPill-30KHOu .item-3HknzM {
  margin: 0;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  background: transparent !important;
  border-radius: 0;
  cursor: var(--cursor);
  padding: 0 var(--spacing-double);
  color: var(--text-normal) !important;
  border-right: 1px solid var(--base-border);
  flex-grow: 1;
}
#app-mount .container-1D34oG .topPill-30KHOu .item-3HknzM .badge-1Skb69 {
  margin-left: var(--spacing-half);
}
#app-mount .container-1D34oG .topPill-30KHOu .item-3HknzM:hover {
  background: var(--background-light) !important;
}
#app-mount .container-1D34oG .topPill-30KHOu .item-3HknzM.selected-3s45Ha, #app-mount .container-1D34oG .topPill-30KHOu .item-3HknzM[style*="; color: rgb(67, 181, 129)"] {
  box-shadow: inset 0 -3px 0px var(--accent-solid);
  background: transparent !important;
}
@media (max-width: 1200px) {
  #app-mount .container-1D34oG .topPill-30KHOu {
    width: calc(100vw - var(--sidebar-width) - var(--noasw-base));
  }
}
#app-mount .container-1D34oG .peopleColumn-29fq28 {
  padding-top: 30px;
}
#app-mount .container-1D34oG .peopleColumn-29fq28 .scrollerBase-289Jih {
  margin-bottom: calc(var(--avatar-size-sm) + var(--spacing-double) + 3px);
}
#app-mount .container-1D34oG .base-1x0h_U {
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
}
#app-mount .container-1D34oG .title-30qZAO {
  margin: var(--spacing);
  border-bottom: none;
  font-size: var(--font-size);
  color: var(--text-normal);
  line-height: inherit;
  display: grid;
  grid-template-columns: var(--avatar-size) 0.2755fr 1fr;
  grid-gap: var(--spacing);
  display: none;
}
#app-mount .container-1D34oG .title-30qZAO:before {
  content: "";
  display: block;
}
#app-mount .container-1D34oG .title-30qZAO:after {
  content: "Status";
  display: block;
}
#app-mount .container-1D34oG .peopleListItem-2nzedh {
  border-top: none;
  margin: 0;
  padding: var(--spacing-double);
  border-radius: 0;
  cursor: var(--cursor);
  box-sizing: border-box;
}
#app-mount .container-1D34oG .peopleListItem-2nzedh:not(:first-child) {
  border-bottom: 1px solid var(--base-border);
}
#app-mount .container-1D34oG .peopleListItem-2nzedh:last-child {
  border-bottom: none;
}
#app-mount .container-1D34oG .peopleListItem-2nzedh.peopleListItem-2nzedh.active-rhSpJJ, #app-mount .container-1D34oG .peopleListItem-2nzedh.peopleListItem-2nzedh:hover {
  background: var(--background-modifier-hover);
}
#app-mount .container-1D34oG .peopleListItem-2nzedh:active {
  background: var(--background-modifier-active) !important;
}
#app-mount .container-1D34oG .userInfo-2zN2z8 {
  overflow: visible;
  width: 100%;
  flex: 1;
}
#app-mount .container-1D34oG .nameTag-m8r81H {
  line-height: var(--line-height);
}
#app-mount .container-1D34oG .username-31C1TQ {
  font-weight: var(--font-weight-normal);
  line-height: normal;
  font-size: var(--font-size);
  color: var(--text-focus);
  align-items: center;
}
#app-mount .container-1D34oG .discriminator-22Okc1 {
  font-size: var(--font-size-sm);
}
#app-mount .container-1D34oG .text-3MU_QQ {
  font-size: var(--font-size-sm);
  color: var(--text-muted);
  line-height: normal;
}
#app-mount .container-1D34oG .subtext-24R4-w {
  color: var(--text-muted);
}
#app-mount .container-1D34oG .actions-1SQwjn {
  margin-left: var(--spacing);
}
#app-mount .container-1D34oG .actionButton-uPB8Fs {
  color: var(--text-normal);
  background: var(--background-light);
  min-height: var(--input-height);
  height: var(--input-height);
  width: var(--input-height);
  padding: 0;
  border-radius: var(--button-border-radius);
  border: 1px solid var(--base-border);
  cursor: var(--cursor);
  box-shadow: none !important;
}
#app-mount .container-1D34oG .actionButton-uPB8Fs svg {
  width: 16px;
  height: 16px;
}
#app-mount .container-1D34oG .actionButton-uPB8Fs path[d="M4.79805 3C3.80445 3 2.99805 3.8055 2.99805 4.8V15.6C2.99805 16.5936 3.80445 17.4 4.79805 17.4H7.49805V21L11.098 17.4H19.198C20.1925 17.4 20.998 16.5936 20.998 15.6V4.8C20.998 3.8055 20.1925 3 19.198 3H4.79805Z"] {
  d: path("M14 1H2c-.55 0-1 .45-1 1v8c0 .55.45 1 1 1h2v3.5L7.5 11H14c.55 0 1-.45 1-1V2c0-.55-.45-1-1-1zm0 9H7l-2 2v-2H2V2h12v8z");
  transform: scale(1.45) translateY(1px);
}
#app-mount .container-1D34oG .actionButton-uPB8Fs:hover {
  border-color: currentColor;
}
#app-mount .container-1D34oG .actionButton-uPB8Fs:focus {
  border-color: currentColor;
  box-shadow: 0 0 0 1px currentColor !important;
}
#app-mount .container-1D34oG .nowPlayingColumn-2sl4cE {
  border-left: 1px solid var(--base-border);
  background: var(--background);
  min-width: unset;
  max-width: unset;
  flex: 0 0 var(--sidebar-width);
  width: var(--sidebar-width);
}
#app-mount .container-1D34oG .nowPlayingScroller-2XrVUt {
  height: calc(100vh - var(--titlebar-height) - var(--toolbar-height));
  padding: 0 !important;
}
#app-mount .container-1D34oG .consentCard-1iSxB_ {
  background: var(--background);
  border-radius: 0;
  padding: var(--spacing-double);
  border-bottom: 1px solid var(--base-border);
  margin: 0;
}
#app-mount .container-1D34oG .consentCard-1iSxB_ .header-nbFv8R {
  margin-bottom: var(--spacing-half);
  font-weight: var(--font-weight-semibold);
}
#app-mount .container-1D34oG .consentCard-1iSxB_ button {
  margin-left: 0;
}
#app-mount .container-1D34oG .emptyCard-1RJw8n {
  border-radius: 0;
  background: transparent;
  padding: var(--spacing-double);
}
#app-mount .container-1D34oG .emptyCard-1RJw8n .emptyText-2zjpZr {
  font-size: var(--font-size);
  color: var(--text-muted);
}
#app-mount .container-1D34oG .emptyCard-1RJw8n .base-1x0h_U:before {
  content: "";
  width: 100px;
  height: 100px;
  display: block;
  background: var(--text-muted);
  margin-bottom: var(--spacing-double);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
#app-mount .container-1D34oG .header-13Cw0- {
  display: flex;
  align-items: center;
  padding: var(--spacing);
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  border-bottom: 1px solid var(--base-border);
  height: auto;
  width: 100%;
  text-transform: none;
  box-sizing: border-box;
}
#app-mount .container-1D34oG .headerFull-1dyyvV {
  grid-template-columns: var(--avatar-size) minmax(20px, auto) 24px;
  height: auto;
  grid-gap: var(--spacing);
}
#app-mount .container-1D34oG .wrapper-3D2qGf {
  background: transparent;
  border-radius: 0;
  padding: var(--spacing);
  margin: 0;
  cursor: var(--cursor);
}
#app-mount .container-1D34oG .wrapper-3D2qGf:not(:first-child) {
  border-bottom: 1px solid var(--base-border);
}
#app-mount .container-1D34oG .wrapper-3D2qGf:hover {
  background: var(--background-modifier-hover);
}
#app-mount .container-1D34oG .wrapper-3D2qGf.active-1xchHY {
  background: rgb(var(--accent));
}
#app-mount .container-1D34oG .wrapper-3D2qGf.active-1xchHY .colorHeaderSecondary-3Sp3Ft,
#app-mount .container-1D34oG .wrapper-3D2qGf.active-1xchHY .size16-1P40sf {
  color: var(--white);
}
#app-mount .container-1D34oG .wrapper-3D2qGf:last-child {
  border-bottom: 1px solid var(--base-border);
}
#app-mount .container-1D34oG .inset-3sAvek {
  background: var(--background-dark);
  border: 1px solid var(--base-border);
  margin-top: var(--spacing);
  border-radius: var(--border-radius);
}
#app-mount .container-1D34oG .separator-XqIyoz {
  background: var(--base-border);
}
#app-mount .container-1D34oG .section-2gLsgF {
  padding: var(--spacing-half);
}
#app-mount .container-1D34oG .voiceSection-1uiU7a {
  grid-gap: var(--spacing);
}
#app-mount .container-1D34oG .voiceSectionAssets-1gjfmz {
  border-radius: 0;
  width: var(--avatar-size);
  height: var(--avatar-size);
}
#app-mount .container-1D34oG .voiceSectionGuildImage-3HwnfL,
#app-mount .container-1D34oG .voiceSectionNoGuildImageWrapper-TicZR3 {
  width: var(--avatar-size);
  height: var(--avatar-size);
  -webkit-mask: none;
          mask: none;
  -webkit-mask: none;
          mask: none;
  border-radius: var(--border-radius);
}
#app-mount .container-1D34oG .voiceSectionIconWrapper-FO7UEY {
  bottom: -1px;
  right: -1px;
  background: var(--background-dark);
  border-radius: var(--border-radius) 0 0;
}
#app-mount .container-1D34oG .voiceSectionDetails-2DQTfs {
  cursor: var(--cursor);
}
#app-mount .container-1D34oG .partyMember-1CzxeX {
  height: var(--avatar-size-sm) !important;
  width: var(--avatar-size-sm) !important;
  -webkit-mask: none;
          mask: none;
}
#app-mount .container-1D34oG .partyMemberOverflow-lXnzvu {
  height: var(--avatar-size-sm);
  width: var(--avatar-size-sm);
  min-width: auto;
  padding: 0;
  font-size: var(--font-size-sm);
  background: var(--background);
  box-shadow: inset 0 0 0 1px var(--base-border);
  border-radius: var(--border-radius);
}
#app-mount .container-1D34oG .image-1GzsFd {
  margin: 0;
  width: 175px !important;
  height: 175px !important;
  background: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat !important;
}
#app-mount .container-1D34oG .text-GwUZgS {
  display: none;
}

#app-mount .container-3Mxszk {
  background: var(--background-alt);
}
#app-mount .container-3Mxszk .container-19hC9u:before {
  content: none;
}
#app-mount .container-3Mxszk .children-19S4PO {
  padding-right: 0;
}
#app-mount .container-3Mxszk .children-19S4PO:hover {
  background: transparent;
}
#app-mount .container-3Mxszk .scroller-1IIF0A {
  background: var(--background-alt);
  overflow: hidden;
}
#app-mount .container-3Mxszk .scroller-1IIF0A::-webkit-scrollbar {
  width: 12px;
  display: none;
  background: transparent;
  border-left: 1px solid var(--base-border);
}
#app-mount .container-3Mxszk .scroller-1IIF0A::-webkit-scrollbar-track-piece {
  background: transparent;
  border-color: transparent;
}
#app-mount .container-3Mxszk .scroller-1IIF0A::-webkit-scrollbar-thumb {
  border-style: solid;
  border-color: transparent;
  border-left-width: 4px;
  border-right-width: 3px;
  background-clip: padding-box;
  background-color: var(--scrollbar-background);
}
#app-mount .container-3Mxszk .scroller-1IIF0A:hover {
  overflow: overlay;
}
#app-mount .container-3Mxszk .scroller-1IIF0A:hover::-webkit-scrollbar {
  display: block;
}
#app-mount .container-3Mxszk .searchBar-TUoVPN {
  background: var(--background);
  border: 1px solid var(--base-border);
}
#app-mount .container-3Mxszk .header-39GIC8 {
  padding: var(--spacing);
  background: var(--background-alt);
  border-bottom-color: var(--base-border);
  width: 100%;
}
#app-mount .container-3Mxszk .rowWrapper-2fB6P0 {
  margin: 0;
  border-bottom: 1px solid var(--base-border);
  border-radius: 0;
  padding-bottom: 0;
}
#app-mount .container-3Mxszk .rowWrapper-2fB6P0 .bodyCell-9xKjWE {
  padding: var(--spacing);
}
#app-mount .container-3Mxszk .rowWrapper-2fB6P0:hover {
  background: var(--background-light);
}
#app-mount .container-3Mxszk .scroller-2XE8rp {
  background-color: var(--background-alt);
}

#app-mount .applicationStore-1pNvnv .scrollerWrap-2lJEkd:before {
  content: none;
}
#app-mount .applicationStore-1pNvnv .scroller-9moviB {
  background-color: var(--background-alt);
}
#app-mount .applicationStore-1pNvnv .detailsBlock-FoDTGA {
  background: var(--background);
  border: 1px solid var(--base-border);
}

.app-2rEoOp:active + .container-16j22k {
  display: none;
}

#app-mount .container-16j22k {
  background: var(--background-alt);
  flex-direction: column;
  justify-content: flex-start;
  top: 0;
  padding: 0;
}
#app-mount .container-16j22k .content-1-zrf2 {
  flex-grow: 1;
  display: flex;
  align-items: center;
  justify-content: center;
  flex-direction: column;
}
#app-mount .container-16j22k .content-1-zrf2 video {
  display: none;
}
#app-mount .container-16j22k .content-1-zrf2:before {
  content: "Connecting";
  font-size: var(--font-size-xxl);
  font-weight: var(--font-weight-light);
  color: var(--text-normal);
  margin-bottom: var(--spacing-double);
}
#app-mount .container-16j22k .content-1-zrf2 .keybindShortcut-1BD6Z1 span {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  text-transform: capitalize;
  flex-grow: 0;
  display: inline-flex;
  align-items: center;
  box-shadow: none;
  border: none;
  margin-right: var(--spacing-half);
  -webkit-user-select: none;
          user-select: none;
  height: 23px;
}
#app-mount .container-16j22k .content-1-zrf2 .text-3c9Zq1 {
  top: 0;
  display: flex;
  justify-content: center;
  flex-direction: row;
  flex-wrap: wrap;
  max-width: 80vw;
}
#app-mount .container-16j22k .content-1-zrf2 .text-3c9Zq1:before {
  content: "";
  width: 100%;
  height: 9px;
  margin-bottom: var(--spacing);
  display: block;
  animation: progress-indeterminate 5s linear infinite;
  background-image: linear-gradient(-45deg, transparent 33%, var(--text-normal) 33%, var(--text-normal) 66%, transparent 66%);
  background-size: 25px 10px, 100% 100%, 100% 100%;
  background-color: var(--background);
}
#app-mount .container-16j22k .content-1-zrf2 .text-3c9Zq1 .tipTitle-GL9qAt {
  max-width: 100%;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  margin: 0;
  margin-right: var(--spacing-half);
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  text-transform: none;
  display: flex;
  align-items: center;
}
#app-mount .container-16j22k .content-1-zrf2 .text-3c9Zq1 .tipTitle-GL9qAt:after {
  content: ":";
}
#app-mount .container-16j22k .content-1-zrf2 .text-3c9Zq1 .tip-2cgoli {
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  max-width: 100%;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  display: inline-block;
}
#app-mount .container-16j22k .problems-3mgf6w {
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  border-radius: var(--border-radius);
  padding: 0;
  left: 50%;
  transform: translateY(200%) translateX(-50%);
  margin: 0 var(--spacing);
  margin-bottom: var(--spacing-double);
  transition: none;
}
#app-mount .container-16j22k .problems-3mgf6w.slideIn-sCvzGz {
  transform: translateX(-50%);
}
#app-mount .container-16j22k .problems-3mgf6w .problemsText-1Yx-Kl {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  margin-bottom: var(--spacing);
}
#app-mount .container-16j22k .problems-3mgf6w a {
  display: inline-flex;
  align-items: center;
  justify-content: center;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  opacity: 1;
  text-decoration: none;
  margin: 0;
}
#app-mount .container-16j22k .problems-3mgf6w a svg {
  display: none;
}
#app-mount .container-16j22k .problems-3mgf6w a.twitterLink-3NsWMp {
  margin-right: var(--spacing);
  color: var(--white);
  background-color: rgb(var(--accent));
}
#app-mount .container-16j22k .problems-3mgf6w a.twitterLink-3NsWMp:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .container-16j22k .problems-3mgf6w a.twitterLink-3NsWMp:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .container-16j22k .problems-3mgf6w a.statusLink-gFXhrL {
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
}
#app-mount .container-16j22k .problems-3mgf6w a.statusLink-gFXhrL:hover {
  border: 1px solid currentColor;
}
#app-mount .container-16j22k .problems-3mgf6w a.statusLink-gFXhrL:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .container-16j22k .problems-3mgf6w a:before {
  content: none;
}

html.theme-light #app-mount .container-16j22k .problems-3mgf6w a.statusLink-gFXhrL:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .container-16j22k .problems-3mgf6w a.statusLink-gFXhrL:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .perksModal-fSYqOq {
  background: var(--background);
  top: var(--titlebar-height);
}
#app-mount .perksModal-fSYqOq [class*=header] {
  display: none;
}
#app-mount .perksModal-fSYqOq .ctaBar-2UsjF2 {
  background: var(--background-dark);
  border: 1px solid var(--base-border);
  padding: var(--spacing);
}
#app-mount .perksModal-fSYqOq .guildIcon-3raYf3 {
  width: 32px;
  height: 32px;
}
#app-mount .perksModal-fSYqOq .guildName-39nwo0 {
  margin: 0 10px 0 0;
  font-size: var(--font-size-md);
  line-height: normal;
}
#app-mount .perksModal-fSYqOq .guildDetails-oP2_kA {
  display: flex;
  align-items: center;
}
#app-mount .perksModal-fSYqOq .actions-2fUYl0 {
  display: flex;
  flex-direction: row;
}
#app-mount .perksModal-fSYqOq .actions-2fUYl0 button {
  margin: 0 0 0 var(--spacing);
}
#app-mount .perksModal-fSYqOq .barBackground-2EEiLw {
  background: var(--background-dark);
  border: 1px solid var(--base-border);
}
#app-mount .perksModal-fSYqOq .tierMarkerBackground-3q29am {
  background: transparent;
}
#app-mount .perksModal-fSYqOq .tierMarker-5HkGJ_ {
  box-shadow: none;
  border-radius: var(--border-radius);
  box-shadow: inset 0 0 0 1px var(--base-border);
}
#app-mount .perksModal-fSYqOq .tierWrapper-W9ajqp {
  box-shadow: none !important;
  border: 1px solid var(--base-border);
}
#app-mount .perksModal-fSYqOq .tierHeaderLocked-1s2JJz {
  background: var(--background-dark);
  border-bottom: 1px solid var(--base-border);
}
#app-mount .perksModal-fSYqOq .tierBody-16Chc9 {
  background: var(--background-dark);
}
#app-mount .perksModal-fSYqOq .perks-3OsGy8, #app-mount .perksModal-fSYqOq .subscriberPerksHeader-2a50UC {
  display: none;
}

#app-mount .wrapper-3Q5DdO {
  position: fixed;
  background: var(--background-dark);
}
#app-mount .wrapper-3Q5DdO .canvas-3XuBXe,
#app-mount .wrapper-3Q5DdO .colorHeaderSecondary-3Sp3Ft,
#app-mount .wrapper-3Q5DdO .fallbackImage-31Sk4m,
#app-mount .wrapper-3Q5DdO .image-2jyRAK,
#app-mount .wrapper-3Q5DdO .needAccount-23l_Wh,
#app-mount .wrapper-3Q5DdO .verticalSeparator-3huAjp {
  display: none;
}
#app-mount .wrapper-3Q5DdO .rightSplit-2US0xy {
  background: url("https://discordstyles.github.io/Slate/assets/illustrations/2.svg") center/50%;
  box-shadow: inset 0 0 0 100vmax rgba(0, 0, 0, 0.4);
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx {
  padding: 0;
  max-width: 400px;
  background: var(--background);
  box-shadow: var(--elevation-2);
  border-radius: var(--border-radius);
  border: 1px solid var(--border-color);
  position: relative;
  left: -100px;
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .defaultMarginh3-2iptLs,
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .defaultMarginh5-2mL-bP {
  margin-bottom: var(--spacing-third);
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 {
  margin: 0;
  padding: var(--spacing-double);
  box-sizing: border-box;
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .lookLink-9FtZy- {
  margin: var(--spacing) 0;
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .smallRegisterLink-2LCrMe {
  margin-bottom: 0;
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .lookFilled-1Gx00P,
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .marginTop4-2BNfKC:last-child {
  margin: 0;
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .title-3sZWYQ {
  font-size: var(--font-size);
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .subText-1XkjIB {
  color: var(--text-muted);
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .inputs-14Hc7m {
  margin-bottom: 0;
  width: auto;
  justify-content: flex-start;
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .inputs-14Hc7m div[tabindex] {
  flex-grow: 1;
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .inputs-14Hc7m .inputMonth-IGgn-0,
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .inputs-14Hc7m .inputDay-18OXiE,
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 .inputs-14Hc7m .inputYear-2J502p {
  width: auto;
  margin-right: var(--spacing-half);
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .block-egJnc0 a {
  color: var(--text-link);
}
#app-mount .wrapper-3Q5DdO .authBox-hW6HRx .marginBottom20-32qID7 {
  margin-bottom: var(--spacing);
}
#app-mount .wrapper-3Q5DdO .wrapper-6URcxg {
  transform: none !important;
  width: 100vw !important;
  height: 100vh !important;
  min-width: unset;
  min-height: unset;
}
#app-mount .wrapper-3Q5DdO .title-jXR8lp {
  width: 100%;
  height: 50px;
  padding: var(--spacing-double);
  box-sizing: border-box;
  display: flex;
  align-items: center;
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size-md);
  border-bottom: 1px solid var(--base-border);
  margin: 0;
  color: var(--text-normal);
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt {
  position: absolute;
  left: 100%;
  background: var(--background);
  box-shadow: var(--elevation-2);
  border-radius: var(--border-radius);
  border: 1px solid var(--border-color);
  margin-left: var(--spacing);
  height: auto;
  width: auto;
  top: 0;
  padding: 0;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .qrLoginInner-c_7ePj {
  justify-content: flex-start;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .qrLoginInner-c_7ePj .qrCodeContainer-3sXarj {
  padding: var(--spacing-double);
  margin: 0;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .qrAvatar-8_WYAf {
  padding: var(--spacing-double);
  margin-bottom: var(--spacing);
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .startOverButton-3q0wUV {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .startOverButton-3q0wUV:hover {
  border: 1px solid currentColor;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .startOverButton-3q0wUV:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .qrCodeOverlay-qgtlTP {
  height: 176px;
  width: 176px;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .title-jXR8lp {
  order: -1;
}
#app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .qrCodeContainer-3sXarj {
  margin: 0;
}
#app-mount .wrapper-3Q5DdO img[src="/assets/0f4d1ff76624bb45a3fee4189279ee92.svg"] {
  display: none;
}
#app-mount .wrapper-3Q5DdO .g-recaptcha {
  margin: var(--spacing-double) 0;
}

html.theme-light #app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .startOverButton-3q0wUV:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .wrapper-3Q5DdO .qrLogin-1AOZMt .startOverButton-3q0wUV:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

.applicationStore-1pNvnv .scroller-2FKFPG, .container-1D34oG .scroller-2FKFPG {
  margin-bottom: calc(var(--avatar-size-sm) + var(--spacing-double) + 3px);
}
.applicationStore-1pNvnv:before, .container-1D34oG:before {
  content: "";
  position: absolute;
  bottom: 0;
  height: calc(var(--avatar-size-sm) + var(--spacing-double) + 3px);
  border-top: 1px solid var(--base-border);
  background: var(--background-light);
  width: 100%;
  z-index: 1;
  box-sizing: border-box;
}

#app-mount .noChannel-Z1DQK7 {
  background: var(--background-alt);
  display: flex;
  flex-direction: column;
}
#app-mount .noChannel-Z1DQK7::before {
  content: "";
  width: 100%;
  height: var(--toolbar-height);
  display: block;
  position: relative;
  background: var(--toolbar-background);
  border-bottom: 1px solid var(--toolbar-border);
  box-sizing: border-box;
}
#app-mount .noChannel-Z1DQK7::after {
  content: "";
  width: 100%;
  height: var(--toolbar-height);
  display: block;
  position: relative;
  background: var(--background-light);
  border-top: 1px solid var(--base-border);
  box-sizing: border-box;
}
#app-mount .noChannel-Z1DQK7 .wrapper-r-6rrt {
  width: 100%;
  height: calc(100% - var(--toolbar-height) * 2);
  margin: 0;
  max-width: unset;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/4.svg") center/50% no-repeat;
}
#app-mount .noChannel-Z1DQK7 .wrapper-r-6rrt .image-1GzsFd,
#app-mount .noChannel-Z1DQK7 .wrapper-r-6rrt .flexChild-faoVW3 {
  display: none;
}

#app-mount .errorPage-u8SYh4 {
  background: var(--background);
  box-sizing: border-box;
  order: 1;
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 {
  justify-content: flex-start;
  align-items: flex-start;
  padding: calc(var(--spacing) * 4);
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .image-3zK3Wt {
  position: absolute;
  right: var(--spacing);
  bottom: var(--spacing);
  height: 490px;
  width: 290px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/11.svg") center/contain no-repeat;
          mask: url("https://discordstyles.github.io/Slate/assets/illustrations/11.svg") center/contain no-repeat;
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm {
  width: 100%;
  margin-bottom: var(--spacing-double);
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm .note-450gs3,
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm .title-3trS3_ {
  text-align: left;
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm .title-3trS3_ {
  font-weight: var(--font-weight-light);
  font-size: var(--font-size-xxl);
  margin-bottom: var(--spacing);
  line-height: normal;
  display: flex;
  align-items: center;
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm .title-3trS3_::before {
  content: "";
  height: 50vh;
  width: 50vh;
  position: absolute;
  bottom: -12.5vh;
  left: -12.5vh;
  z-index: 0;
  transform: rotate(25deg);
  display: block;
  margin-right: var(--spacing);
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M10 1H4L0 5v6l4 4h6l4-4V5l-4-4zm3 9.5L9.5 14h-5L1 10.5v-5L4.5 2h5L13 5.5v5zM6 4h2v5H6V4zm0 6h2v2H6v-2z"/></svg>') center/contain no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M10 1H4L0 5v6l4 4h6l4-4V5l-4-4zm3 9.5L9.5 14h-5L1 10.5v-5L4.5 2h5L13 5.5v5zM6 4h2v5H6V4zm0 6h2v2H6v-2z"/></svg>') center/contain no-repeat;
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm .note-450gs3 {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  width: 500px;
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm .note-450gs3:after {
  line-height: 1.5;
  content: "Discord encountered a unexpected error that caused it to crash. If this is your first time seeing this screen, reload the app. If you continue seeing this after reloading, uninstall and reinstall Discord. If the issue still persists, consider contacting support.";
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 .text-NLHgOm .note-450gs3 p {
  display: none;
}
#app-mount .errorPage-u8SYh4 .flex-1xMQg5 button {
  position: absolute;
  bottom: 0;
  right: 0;
  margin: calc(var(--spacing) * 4);
  min-width: 150px;
}

#app-mount .loading-Ags1CY {
  background: var(--background-alt);
  display: flex;
  align-items: center;
  justify-content: center;
}
#app-mount .loading-Ags1CY:before {
  content: "";
  width: 24px;
  height: 24px;
  background: var(--text-normal);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M10.236 7.4a4.15 4.15 0 0 1-1.2 3.6 4.346 4.346 0 0 1-5.41.54l1.17-1.14-4.3-.6.6 4.2 1.31-1.26c2.36 1.74 5.7 1.57 7.84-.54a5.876 5.876 0 0 0 1.74-4.46l-1.75-.34zM2.956 5a4.346 4.346 0 0 1 5.41-.54L7.196 5.6l4.3.6-.6-4.2-1.31 1.26c-2.36-1.74-5.7-1.57-7.85.54-1.24 1.23-1.8 2.85-1.73 4.46l1.75.35A4.17 4.17 0 0 1 2.956 5z"/></svg>') center/12px no-repeat;
  animation: rotate 1s linear infinite;
  position: relative;
}

#app-mount .scale-3iLZhb {
  transform: none !important;
  transition: none !important;
}
#app-mount #guild-header-popout {
  position: fixed;
  top: calc(var(--titlebar-height) + var(--toolbar-height));
  left: 0;
  top: calc(var(--toolbar-height) + var(--titlebar-height));
  padding: 0;
  border-radius: 0;
  box-shadow: none;
  height: calc(100vh - var(--toolbar-height) - var(--titlebar-height));
  width: calc(var(--sidebar-width) + var(--noasw-base));
  background: var(--background);
  border-right: 1px solid var(--base-border);
}
#app-mount #guild-header-popout .scroller-3BxosC {
  padding: var(--spacing-half) 0 0;
}
#app-mount #guild-header-popout .scroller-3BxosC::-webkit-scrollbar {
  display: none;
}
#app-mount #guild-header-popout .labelContainer-1BLJti {
  justify-content: flex-start;
}
#app-mount #guild-header-popout .item-1tOPte {
  margin: 0;
  padding: 0 var(--spacing);
  color: var(--text-normal);
  border-radius: 0;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  height: var(--item-height);
  cursor: var(--cursor);
  box-sizing: border-box;
}
#app-mount #guild-header-popout .item-1tOPte .label-22pbtT {
  flex: unset;
}
#app-mount #guild-header-popout .item-1tOPte .icon-LYJorE, #app-mount #guild-header-popout .item-1tOPte .iconContainer-2-XQPY {
  width: 14px;
  height: 14px;
}
#app-mount #guild-header-popout .item-1tOPte .icon-LYJorE foreignObject, #app-mount #guild-header-popout .item-1tOPte .iconContainer-2-XQPY foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount #guild-header-popout .item-1tOPte .badge-3lkhh2 {
  border-radius: 50px;
  width: 4px;
  height: 4px;
  background: rgb(var(--status-red));
  right: -2px;
}
#app-mount #guild-header-popout .item-1tOPte .iconContainer-2-XQPY {
  order: -1;
  margin: 0 var(--spacing) 0 0;
}
#app-mount #guild-header-popout .item-1tOPte:hover {
  color: var(--text-focus);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-premium-subscribe {
  color: rgb(var(--discord-pink));
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-premium-subscribe .icon-LYJorE {
  color: rgb(var(--discord-pink));
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-premium-subscribe .icon-LYJorE path[d="M4 0L0 4V8L4 12L8 8V4L4 0ZM7 7.59L4 10.59L1 7.59V4.41L4 1.41L7 4.41V7.59Z"] {
  d: path("M5.05.31c.81 2.17.41 3.38-.52 4.31C3.55 5.67 1.98 6.45.9 7.98c-1.45 2.05-1.7 6.53 3.53 7.7-2.2-1.16-2.67-4.52-.3-6.61-.61 2.03.53 3.33 1.94 2.86 1.39-.47 2.3.53 2.27 1.67-.02.78-.31 1.44-1.13 1.81 3.42-.59 4.78-3.42 4.78-5.56 0-2.84-2.53-3.22-1.25-5.61-1.52.13-2.03 1.13-1.89 2.75.09 1.08-1.02 1.8-1.86 1.33-.67-.41-.66-1.19-.06-1.78C8.18 5.31 8.68 2.45 5.05.32L5.03.3l.02.01z");
  transform: scale(0.7);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-premium-subscribe .icon-LYJorE path[d="M4 0L0 4V8L4 12L8 8V4L4 0ZM7 7.59L4 10.59L1 7.59V4.41L4 1.41L7 4.41V7.59Z"] ~ path {
  display: none;
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-premium-subscribe:hover {
  color: rgb(var(--discord-pink));
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-invite-people {
  color: var(--text-link);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-invite-people:hover {
  color: var(--text-link);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-invite-people path {
  d: path("M6 11.5c0-2.363 1.498-4.383 3.594-5.159 0.254-0.571 0.406-1.206 0.406-1.841 0-2.485 0-4.5-3-4.5s-3 2.015-3 4.5c0 1.548 0.898 3.095 2 3.716v0.825c-3.392 0.277-6 1.944-6 3.959h6.208c-0.135-0.477-0.208-0.98-0.208-1.5z M11.5 7c-2.485 0-4.5 2.015-4.5 4.5s2.015 4.5 4.5 4.5c2.485 0 4.5-2.015 4.5-4.5s-2.015-4.5-4.5-4.5zM14 12h-2v2h-1v-2h-2v-1h2v-2h1v2h2v1z");
  transform: scale(1.4);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-leave {
  color: rgb(var(--status-red));
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-leave:hover {
  color: rgb(var(--status-red));
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-notifications path {
  d: path("M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z");
  transform: scale(1.4) translateX(1px) translateY(1px);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-settings path {
  d: path("M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z");
  transform: scale(1.4) translateX(2px);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-create-channel path {
  d: path("M12 9H7v5H5V9H0V7h5V2h2v5h5v2z");
  transform: scale(1.4) translateX(2px);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-create-category path {
  d: path("M12 8V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v12c0 .55.45 1 1 1h2v2l1.5-1.5L6 16v-4H3v1H1v-2h7v-1H2V1h9v7h1zM4 2H3v1h1V2zM3 4h1v1H3V4zm1 2H3v1h1V6zm0 3H3V8h1v1zm6 3H8v2h2v2h2v-2h2v-2h-2v-2h-2v2z");
  transform: scale(1.2) translateX(4px) translateY(2px);
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-privacy path {
  d: path("M0 2l7-2 7 2v6.02C14 12.69 8.69 16 7 16c-1.69 0-7-3.31-7-7.98V2zm1 .75L7 1l6 1.75v5.268C13 12.104 8.449 15 7 15c-1.449 0-6-2.896-6-6.982V2.75zm1 .75L7 2v12c-1.207 0-5-2.482-5-5.985V3.5z");
  transform: scale(1.2) translateX(2px) translateY(2px);
  fill-rule: evenodd;
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-change-nickname path {
  d: path("M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 011.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z");
  transform: scale(1.3) translateX(2px) translateY(1px);
  fill-rule: evenodd;
}
#app-mount #guild-header-popout .item-1tOPte#guild-header-popout-leave path {
  d: path("M11 10h1v3c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h3v1H1v10h10v-3zM6 2l2.25 2.25L5 7.5 6.5 9l3.25-3.25L12 8V2H6z");
  transform: scale(1.4) translateX(2px) translateY(1px);
  fill-rule: evenodd;
}
#app-mount #guild-header-popout .item-1tOPte.focused-3afm-j {
  background: unset;
}
#app-mount #guild-header-popout .item-1tOPte:hover {
  background-color: var(--background-modifier-hover);
}
#app-mount #guild-header-popout .item-1tOPte:active {
  background-color: var(--background-modifier-active);
}
#app-mount #guild-header-popout .separator-2I32lJ {
  display: none;
}
#app-mount #guild-header-popout:before {
  content: "";
  position: fixed;
  top: calc(var(--toolbar-height) + var(--titlebar-height) - 1);
  left: calc(var(--sidebar-width) + var(--noasw-base));
  width: 100vw;
  height: 100vh;
  background: var(--backdrop);
  z-index: -1;
  pointer-events: none;
}

#app-mount #status-picker {
  background: var(--background);
  width: var(--sidebar-width);
  padding: 0;
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-1);
  box-sizing: border-box;
  max-width: 200px;
  position: relative;
  top: 3px;
  z-index: 1;
}
#app-mount #status-picker .scroller-3BxosC {
  padding: 0;
  overflow: visible !important;
  max-height: unset;
  max-width: 100%;
}
#app-mount #status-picker .scroller-3BxosC:after {
  content: "";
  width: 10px;
  height: 10px;
  background: var(--background);
  box-sizing: border-box;
  position: absolute;
  bottom: -5px;
  left: 8px;
  transform: rotate(45deg);
  border-bottom: 1px solid var(--base-border);
  border-right: 1px solid var(--base-border);
  -webkit-clip-path: polygon(0 100%, 100% 100%, 100% 0);
          clip-path: polygon(0 100%, 100% 100%, 100% 0);
  box-shadow: var(--elevation-1);
}
#app-mount #status-picker .scroller-3BxosC .description-2L932D, #app-mount #status-picker .scroller-3BxosC .separator-2I32lJ {
  display: none;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte {
  margin: 0;
  padding: var(--spacing);
  border-radius: 0;
  color: var(--text-normal);
  font-size: var(--font-size);
  cursor: var(--cursor);
  height: 32px;
  display: flex;
  align-items: center;
  width: 100%;
  overflow: hidden;
  position: relative;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte .statusItem-33LqPf {
  padding: 0;
  max-height: unset;
  display: flex;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte .statusItem-33LqPf .status-1AY8sU[style="background-color: rgb(67, 181, 129);"] {
  background: rgb(var(--status-green)) !important;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte .statusItem-33LqPf .status-1AY8sU[style="background-color: rgb(250, 166, 26);"] {
  background: rgb(var(--status-yellow)) !important;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte .statusItem-33LqPf .status-1AY8sU[style="background-color: rgb(240, 71, 71);"] {
  background: rgb(var(--status-red)) !important;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte .statusItem-33LqPf .status-1AY8sU[style="background-color: rgb(116, 127, 141);"] {
  background: rgb(var(--status-grey)) !important;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte .statusIconText-3b4TkH {
  height: auto;
  font-size: var(--font-size);
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte .status-1fhblQ {
  margin-left: var(--spacing);
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte:first-child {
  border-radius: var(--border-radius) var(--border-radius) 0 0;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte:nth-last-child(2) {
  z-index: 10;
  border-radius: 0 0 var(--border-radius) var(--border-radius) !important;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte.focused-3afm-j {
  background: var(--accent-solid) !important;
  color: #fff !important;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte.focused-3afm-j .customEmojiPlaceholder-37iZ_j {
  background: #fff !important;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte:active, #app-mount #status-picker .scroller-3BxosC .item-1tOPte:hover {
  background: transparent;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status > div {
  max-width: 100%;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .customEmoji-2_2FwB {
  margin: 0;
  margin-right: var(--spacing-half);
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .customEmojiPlaceholder-37iZ_j, #app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .status-3Kz6VS {
  width: 10px;
  height: 10px;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .customEmojiPlaceholder-37iZ_j {
  background: var(--text-normal);
  -webkit-mask: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0naHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmcnIHdpZHRoPScxMicgaGVpZ2h0PScxNicgdmlld0JveD0nMCAwIDEyIDE2Jz48cGF0aCBmaWxsLXJ1bGU9J2V2ZW5vZGQnIGQ9J00xMiA5SDd2NUg1VjlIMFY3aDVWMmgydjVoNXYyeic+PC9wYXRoPjwvc3ZnPg==") center/cover no-repeat;
          mask: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0naHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmcnIHdpZHRoPScxMicgaGVpZ2h0PScxNicgdmlld0JveD0nMCAwIDEyIDE2Jz48cGF0aCBmaWxsLXJ1bGU9J2V2ZW5vZGQnIGQ9J00xMiA5SDd2NUg1VjlIMFY3aDVWMmgydjVoNXYyeic+PC9wYXRoPjwvc3ZnPg==") center/cover no-repeat;
  margin: 0;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .clearStatusButton-1Mxs1q {
  order: -1;
  margin-right: var(--spacing);
  color: currentColor;
  cursor: var(--cursor);
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .clearStatusIcon-3-MDNF {
  width: 10px;
  height: 10px;
  margin-left: 0;
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .clearStatusIcon-3-MDNF path {
  d: path("M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z");
}
#app-mount #status-picker .scroller-3BxosC .item-1tOPte#status-picker-custom-status .customStatusContentIcon-2sionu {
  margin-left: 0;
}

#app-mount .userPopout-3XzG_A {
  box-shadow: var(--elevation-1);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  background: var(--background);
  overflow: visible;
  transform: translateZ(0) !important;
}
#app-mount .userPopout-3XzG_A .state-Tt0LO3 {
  display: none;
}
#app-mount .userPopout-3XzG_A .bodyNormal-2D39hT {
  align-items: center;
  position: relative;
  z-index: 1;
}
#app-mount .userPopout-3XzG_A .wrapper-3t9DeA {
  width: var(--avatar-size-lg) !important;
  height: var(--avatar-size-lg) !important;
}
#app-mount .userPopout-3XzG_A .wrapper-3t9DeA foreignObject[mask*=mobile] {
  width: calc(100% + 320px);
}
#app-mount .userPopout-3XzG_A .wrapper-3t9DeA foreignObject[mask*=mobile]:after {
  width: 24px;
  -webkit-mask-size: 16px;
          mask-size: 16px;
}
#app-mount .userPopout-3XzG_A .discriminator {
  font-size: var(--font-size-sm);
}
#app-mount .userPopout-3XzG_A .activityName-1IaRLn,
#app-mount .userPopout-3XzG_A .nameNormal-2lqVQK,
#app-mount .userPopout-3XzG_A .nameWrap-3Z4G_9,
#app-mount .userPopout-3XzG_A .textRow-19NEd_ {
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .userPopout-3XzG_A .activityName-1IaRLn {
  font-weight: var(--font-weight-semibold);
}
#app-mount .userPopout-3XzG_A .rolesList-22qj2L {
  margin: 0;
  margin-bottom: var(--spacing-half);
  padding: 0 var(--spacing);
  max-height: 172px;
  overflow: auto;
  position: static;
}
#app-mount .userPopout-3XzG_A .member-perm,
#app-mount .userPopout-3XzG_A .role-2irmRk {
  border: none;
  position: relative;
  border-radius: 50px;
  overflow: hidden;
  padding: var(--spacing-half) calc(var(--spacing) / 1.5);
  margin: 0 var(--spacing-half) var(--spacing-half) 0;
  height: auto;
  height: 22px;
}
#app-mount .userPopout-3XzG_A .member-perm:hover .roleCircle-3xAZ1j, #app-mount .userPopout-3XzG_A .member-perm:active .roleCircle-3xAZ1j,
#app-mount .userPopout-3XzG_A .role-2irmRk:hover .roleCircle-3xAZ1j,
#app-mount .userPopout-3XzG_A .role-2irmRk:active .roleCircle-3xAZ1j {
  opacity: 1;
  box-sizing: border-box;
}
#app-mount .userPopout-3XzG_A .member-perm:hover .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW, #app-mount .userPopout-3XzG_A .member-perm:active .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW,
#app-mount .userPopout-3XzG_A .role-2irmRk:hover .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW,
#app-mount .userPopout-3XzG_A .role-2irmRk:active .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW {
  opacity: 1;
}
#app-mount .userPopout-3XzG_A .member-perm .perm-circle,
#app-mount .userPopout-3XzG_A .member-perm .roleCircle-3xAZ1j,
#app-mount .userPopout-3XzG_A .role-2irmRk .perm-circle,
#app-mount .userPopout-3XzG_A .role-2irmRk .roleCircle-3xAZ1j {
  margin: 0;
  border-radius: var(--border-radius);
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  opacity: 0.75;
  border-radius: 50px;
}
#app-mount .userPopout-3XzG_A .member-perm .perm-circle .roleRemoveIcon-2-TeGW,
#app-mount .userPopout-3XzG_A .member-perm .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW,
#app-mount .userPopout-3XzG_A .role-2irmRk .perm-circle .roleRemoveIcon-2-TeGW,
#app-mount .userPopout-3XzG_A .role-2irmRk .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW {
  position: relative;
  z-index: 10;
  background: inherit;
  width: 100%;
  height: 100%;
  padding: var(--spacing-third);
  box-sizing: border-box;
  opacity: 0;
  border-radius: 50px;
}
#app-mount .userPopout-3XzG_A .member-perm .perm-circle .roleRemoveIcon-2-TeGW path,
#app-mount .userPopout-3XzG_A .member-perm .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW path,
#app-mount .userPopout-3XzG_A .role-2irmRk .perm-circle .roleRemoveIcon-2-TeGW path,
#app-mount .userPopout-3XzG_A .role-2irmRk .roleCircle-3xAZ1j .roleRemoveIcon-2-TeGW path {
  fill: var(--white);
  transform: scale(0.75);
  transform-origin: center;
}
#app-mount .userPopout-3XzG_A .member-perm .member-perm .name,
#app-mount .userPopout-3XzG_A .member-perm .roleName-32vpEy,
#app-mount .userPopout-3XzG_A .role-2irmRk .member-perm .name,
#app-mount .userPopout-3XzG_A .role-2irmRk .roleName-32vpEy {
  overflow: hidden;
  line-height: normal;
  position: relative;
  z-index: 1;
  margin-right: 0;
  color: var(--white);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
}
#app-mount .userPopout-3XzG_A .actionButton-VzECiy {
  position: absolute;
  top: 0;
  right: 0;
  padding: 0;
  margin: 0 var(--spacing);
  height: 28px;
  border-radius: var(--border-radius);
  color: var(--text-muted);
  cursor: var(--cursor);
}
#app-mount .userPopout-3XzG_A .actionButton-VzECiy .addButtonIcon-1NMJ8u {
  height: var(--font-size);
  width: var(--font-size);
  cursor: var(--cursor);
}
#app-mount .userPopout-3XzG_A .actionButton-VzECiy:hover, #app-mount .userPopout-3XzG_A .actionButton-VzECiy[aria-expanded=true] {
  color: var(--text-normal);
}
#app-mount .userPopout-3XzG_A .bodyTitle-Y0qMQz,
#app-mount .userPopout-3XzG_A .headerText-1HLrL7 {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  font-size: var(--font-size);
  padding: 0 var(--spacing);
  text-transform: none;
  background: var(--background-light);
  border-bottom: 1px solid var(--base-border);
  border-top: 1px solid var(--base-border);
  margin-bottom: var(--spacing);
  height: 28px;
  box-sizing: border-box;
  display: flex;
  align-items: center;
}
#app-mount .userPopout-3XzG_A .headerTop-3C2Zn0 {
  background: var(--background-dark);
  display: grid;
  grid-template-columns: auto 1fr;
  grid-template-areas: "avatar info" "status status" "last last" "join join" "date date";
  align-items: center;
  justify-content: flex-start;
  padding: var(--spacing);
  box-sizing: border-box;
  transform: translateZ(0);
}
#app-mount .userPopout-3XzG_A .headerTop-3C2Zn0 .botTag-2WPJ74 {
  margin: 0;
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: 1px var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  -webkit-user-select: none;
          user-select: none;
  height: auto;
}
#app-mount .userPopout-3XzG_A .headerTop-3C2Zn0 .botTag-2WPJ74 .botText-1526X_ {
  font-size: var(--font-size-xsm) !important;
  font-weight: var(--font-weight-semibold);
  line-height: normal;
  text-transform: capitalize;
}
#app-mount .userPopout-3XzG_A .headerTag-2pZJzA {
  font-weight: var(--font-weight-semibold);
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  justify-content: flex-start;
}
#app-mount .userPopout-3XzG_A .headerTag-2pZJzA.headerTagNoNickname-ENx6no {
  font-size: var(--font-size-md);
}
#app-mount .userPopout-3XzG_A .headerTag-2pZJzA span:not(.botText-1526X_):not(.username-2b1r56) {
  font-size: var(--font-size);
  margin-right: var(--spacing-third);
}
#app-mount .userPopout-3XzG_A .headerNormal-T_seeN,
#app-mount .userPopout-3XzG_A .headerSpotify-zpWxgT {
  background: var(--background-dark);
}
#app-mount .userPopout-3XzG_A .headerPlaying-j0WQBV {
  background: rgba(var(--accent), 0.1);
}
#app-mount .userPopout-3XzG_A .headerPlaying-j0WQBV .activity-11LB_k > .buttonsWrapper-2eYbM0 {
  margin-top: 0;
  padding: 0 var(--spacing);
  position: relative;
}
#app-mount .userPopout-3XzG_A .headerPlaying-j0WQBV .activity-11LB_k > .buttonsWrapper-2eYbM0 > .listeningActionsUserPopout-Ga2V_N {
  height: var(--item-height);
  position: absolute;
  top: var(--spacing);
  left: calc(var(--spacing) / -1 + 1px);
  width: calc(100% + var(--spacing-double));
  border-bottom: none;
  border-top: 1px solid var(--base-border);
  background: var(--background);
}
#app-mount .userPopout-3XzG_A .headerStreaming-2FjmGz {
  background: rgba(var(--status-purple), 0.1);
}
#app-mount .userPopout-3XzG_A .avatarWrapper-3H_478 {
  -ms-grid-row: 1;
  -ms-grid-column: 1;
  cursor: var(--cursor);
  grid-area: avatar;
  margin-bottom: 0;
}
#app-mount .userPopout-3XzG_A .headerText-2sdzFM {
  -ms-grid-row: 1;
  -ms-grid-column: 2;
  grid-area: info;
  margin-left: var(--spacing);
  display: block;
  max-width: 80%;
}
#app-mount .userPopout-3XzG_A .headerText-2sdzFM > div {
  width: 100%;
  text-align: left;
  line-height: normal;
  align-items: center;
}
#app-mount .userPopout-3XzG_A .headerNameWrapper-3res2c {
  overflow: hidden;
  text-overflow: ellipsis;
}
#app-mount .userPopout-3XzG_A .headerNameWrapper-3res2c .headerName-fajvi9 {
  font-size: var(--font-size-md);
  white-space: nowrap;
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .userPopout-3XzG_A .headerTagUsernameNoNickname-2_H881 {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  overflow: hidden;
  white-space: nowrap;
  text-overflow: ellipsis;
}
#app-mount .userPopout-3XzG_A .activity-11LB_k {
  background: transparent;
  position: relative;
  padding: 0;
}
#app-mount .userPopout-3XzG_A .body-ZAhrcj {
  padding: 0 var(--spacing) var(--spacing);
}
#app-mount .userPopout-3XzG_A .customStatus-1bh2V9 {
  -ms-grid-row: 2;
  -ms-grid-column: 1;
  -ms-grid-column-span: 2;
  margin-top: var(--spacing);
  grid-area: status;
  text-align: left;
  color: var(--text-normal);
}
#app-mount .userPopout-3XzG_A .customStatusSoloEmoji-XOvnMc {
  height: var(--avatar-size);
  width: var(--avatar-size);
}
#app-mount .userPopout-3XzG_A .creationDate,
#app-mount .userPopout-3XzG_A .joinedAtDate,
#app-mount .userPopout-3XzG_A .lastMessageDate {
  margin-top: var(--spacing);
  margin-bottom: 0;
}
#app-mount .userPopout-3XzG_A .creationDate + div:not(.customStatus-1bh2V9),
#app-mount .userPopout-3XzG_A .joinedAtDate + div:not(.customStatus-1bh2V9),
#app-mount .userPopout-3XzG_A .lastMessageDate + div:not(.customStatus-1bh2V9) {
  margin-top: 0;
}
#app-mount .userPopout-3XzG_A .creationDate-CJwdKT {
  -ms-grid-row: 5;
  -ms-grid-column: 1;
  -ms-grid-column-span: 2;
  grid-area: date;
}
#app-mount .userPopout-3XzG_A .joinedAtDate-IawR02 {
  -ms-grid-row: 4;
  -ms-grid-column: 1;
  -ms-grid-column-span: 2;
  grid-area: join;
}
#app-mount .userPopout-3XzG_A .lastMessageDate-ocEw13 {
  -ms-grid-row: 3;
  -ms-grid-column: 1;
  -ms-grid-column-span: 2;
  grid-area: last;
}
#app-mount .userPopout-3XzG_A .actionsStreamPreview-2JlX14,
#app-mount .userPopout-3XzG_A .listeningActionsUserPopout-Ga2V_N {
  position: absolute;
  bottom: calc(var(--item-height) * -1 - 1px);
  left: 0;
  width: 100%;
  box-sizing: border-box;
  margin-top: 0;
  display: flex;
  align-items: center;
  justify-content: center;
  height: var(--item-height);
  padding: 0 var(--spacing-half);
}
#app-mount .userPopout-3XzG_A .actionsStreamPreview-2JlX14 > span,
#app-mount .userPopout-3XzG_A .actionsStreamPreview-2JlX14 .contents-18-Yxp,
#app-mount .userPopout-3XzG_A .listeningActionsUserPopout-Ga2V_N > span,
#app-mount .userPopout-3XzG_A .listeningActionsUserPopout-Ga2V_N .contents-18-Yxp {
  margin: 0;
}
#app-mount .userPopout-3XzG_A .actionsStreamPreview-2JlX14 .iconButton-285DXF,
#app-mount .userPopout-3XzG_A .listeningActionsUserPopout-Ga2V_N .iconButton-285DXF {
  max-width: 62px;
}
#app-mount .userPopout-3XzG_A .assetsLargeImageStreamPreview-1A9lfF,
#app-mount .userPopout-3XzG_A .assetsLargeImageUserPopout-3Pp8BK,
#app-mount .userPopout-3XzG_A .assetsLargeImageUserPopoutXbox-2hgKt0 {
  width: var(--avatar-size-lg);
  height: var(--avatar-size-lg);
  border-radius: var(--border-radius);
}
#app-mount .userPopout-3XzG_A .customStatusText-3YJeRZ {
  font-size: var(--font-size);
}
#app-mount .userPopout-3XzG_A .headerStreaming-2FjmGz {
  margin-bottom: calc(var(--item-height) + 1px);
}
#app-mount .userPopout-3XzG_A .headerSpotify-zpWxgT {
  margin-bottom: calc(var(--item-height) + 1px);
}
#app-mount .userPopout-3XzG_A .headerSpotify-zpWxgT .activityUserPopout-2yItg2 {
  background: rgba(var(--status-green), 0.2);
}
#app-mount .userPopout-3XzG_A .timeBarUserPopout-AWPFf2 {
  position: absolute;
  top: 28px;
  left: 0;
  margin-top: 0;
  width: 100%;
  height: calc(100% - 28px);
  z-index: 0;
}
#app-mount .userPopout-3XzG_A .bar-3urHkF {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  border-radius: 0;
  background: transparent;
  z-index: 0;
}
#app-mount .userPopout-3XzG_A .bar-3urHkF + .horizontal-2EEEnY {
  position: absolute;
  height: 28px;
  top: -28px;
  right: var(--spacing);
  align-items: center;
}
#app-mount .userPopout-3XzG_A .barInner-3NDaY_ {
  border-radius: 0;
  background: rgba(var(--status-green), 0.5);
}
#app-mount .userPopout-3XzG_A .text-AOoUen {
  font-size: var(--font-size-sm);
  color: var(--text-normal);
}
#app-mount .userPopout-3XzG_A .textLeft-3EZXG6 {
  flex: 0 !important;
}
#app-mount .userPopout-3XzG_A .textLeft-3EZXG6:after {
  content: "/";
  margin: 0 5px;
}
#app-mount .userPopout-3XzG_A .body-3iLsc4 {
  flex: 1;
  background: transparent;
  padding: 0;
}
#app-mount .userPopout-3XzG_A .body-3iLsc4::-webkit-scrollbar {
  display: none;
}
#app-mount .userPopout-3XzG_A .bodyInnerWrapper-Z8WDxe {
  padding-right: 0;
}
#app-mount .userPopout-3XzG_A .note-3HfJZ5 {
  margin: 0 var(--spacing) var(--spacing);
}
#app-mount .userPopout-3XzG_A .note-3HfJZ5 textarea {
  box-sizing: border-box;
  background-color: var(--background-dark);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  transform: translateZ(0);
  max-height: calc(var(--input-height) * 2);
  padding: var(--spacing-half);
  line-height: var(--line-height);
}
#app-mount .userPopout-3XzG_A .note-3HfJZ5 textarea:focus {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
  border-radius: var(--border-radius);
}
#app-mount .userPopout-3XzG_A div[style="position: absolute; pointer-events: none; min-height: 0px; min-width: 1px; flex: 0 0 auto; height: 10px;"] {
  display: none;
}
#app-mount .userPopout-3XzG_A .footer-1fjuF6 {
  border: none;
  background: transparent;
  padding: 0;
}
#app-mount .userPopout-3XzG_A .inputWrapper-31_8H8 {
  padding: 0 var(--spacing) var(--spacing);
}
#app-mount .userPopout-3XzG_A .quickMessage-1yeL4E {
  box-sizing: border-box;
  background-color: var(--background-dark);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  transform: translateZ(0);
  width: calc(100% - (var(--spacing) * 2));
  height: var(--input-height);
  padding: 0 var(--spacing);
  margin: 0 var(--spacing) var(--spacing);
}
#app-mount .userPopout-3XzG_A .quickMessage-1yeL4E::placeholder {
  font-size: var(--font-size);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
}
#app-mount .userPopout-3XzG_A .quickMessage-1yeL4E:focus {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
  border-radius: var(--border-radius);
}
#app-mount .userPopout-3XzG_A .protip-YaFfgO {
  display: none;
}
#app-mount .userPopout-3XzG_A .wumpusWrapper-yrvoR3 {
  position: fixed;
  width: 65px;
  height: 65px;
  top: 0;
  right: 0;
  margin: 0;
  z-index: 1;
}
#app-mount .userPopout-3XzG_A .wumpusWrapper-yrvoR3 .wumpus-3VDMUi {
  margin: 0;
  animation: none;
  transition: none;
  transform: none;
  width: 100%;
  height: 100%;
  left: 0;
}
#app-mount .userPopout-3XzG_A .wumpusWrapper-yrvoR3 .wumpus-3VDMUi img {
  display: none;
}
#app-mount .userPopout-3XzG_A .wumpusWrapper-yrvoR3 .wumpus-3VDMUi .wumpusTooltip-65YlMT {
  font-size: 0;
  background: rgb(var(--status-red));
  position: absolute;
  width: 100%;
  height: 100%;
  padding: 0;
  top: 0;
  left: 0;
  display: flex;
  justify-content: center;
  border-radius: 0;
  -webkit-clip-path: polygon(0% 0%, 50% 0, 100% 50%, 100% 100%);
          clip-path: polygon(0% 0%, 50% 0, 100% 50%, 100% 100%);
  animation: none;
  opacity: 1;
}
#app-mount .userPopout-3XzG_A .wumpusWrapper-yrvoR3 .wumpus-3VDMUi .wumpusTooltip-65YlMT:before {
  content: "New";
  font-size: var(--font-size-sm);
  color: var(--white);
  position: relative;
  transform: rotate(45deg);
  transform-origin: center;
  top: 10px;
  left: -10px;
}

.userPopout-3XzG_A .wrapper-3t9DeA::after {
  content: "";
  position: fixed;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: -1;
  pointer-events: none;
  opacity: 0.25;
  background-size: cover;
  background-repeat: no-repeat;
  background-position: var(--user-popout-position) center;
  background-image: var(--user-background);
  border-radius: var(--border-radius) var(--border-radius) 0 0;
  box-sizing: border-box;
}
.userPopout-3XzG_A .header-2BwW8b,
.userPopout-3XzG_A .headerText-2sdzFM,
.userPopout-3XzG_A .customStatus-1bh2V9 {
  z-index: 1;
}

html.theme-light #app-mount .userPopout-3XzG_A .note-3HfJZ5 textarea {
  background: var(--background);
}

#app-mount .messagesPopoutWrap-1MQ1bW {
  position: absolute;
  margin-left: -42px;
  border: none;
  box-shadow: none;
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  background: var(--background);
}
#app-mount .header-ykumBX {
  background: var(--background-dark);
  padding: var(--spacing);
  border-bottom: 1px solid var(--base-border);
  box-shadow: none;
}
#app-mount .header-ykumBX h3 {
  font-size: var(--font-size-md);
}
#app-mount .messagesPopout-24nkyi {
  padding: 0;
}
#app-mount .messagesPopout-24nkyi::-webkit-scrollbar {
  display: none;
}
#app-mount .messageGroupWrapper-o-Zw7G {
  border-radius: 0;
  border: none;
  border-bottom: 1px solid var(--base-border);
  background: transparent;
}
#app-mount .messageGroupWrapper-o-Zw7G:hover .jumpButton-3DTcS_ {
  opacity: 1;
}
#app-mount .jumpButton-3DTcS_ {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  height: 20px;
  display: flex;
  align-items: center;
  opacity: 0;
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--white);
  background-color: var(--accent-solid);
}
#app-mount .jumpButton-3DTcS_:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .jumpButton-3DTcS_:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}

#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 {
  margin-top: 8px;
  background: var(--background);
  box-shadow: var(--elevation-1);
  border: 1px solid var(--base-border);
}
z #app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09:empty {
  height: auto;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  padding: var(--spacing);
}
z #app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09:empty:after {
  content: "";
  width: 72px;
  height: 72px;
  display: block;
  position: relative;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09::before {
  content: "";
  position: absolute;
  right: 10px;
  top: 4px;
  height: 10px;
  width: 10px;
  background: var(--background);
  transform: translateX(-50%);
  transform: rotate(-135deg);
  border-bottom: 1px solid var(--base-border);
  border-right: 1px solid var(--base-border);
  -webkit-clip-path: polygon(0 100%, 100% 100%, 100% 0);
  clip-path: polygon(0 100%, 100% 100%, 100% 0);
  box-shadow: var(--elevation-1);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW- {
  background: var(--background);
  border-bottom: 1px solid var(--base-border);
  box-sizing: border-box;
  padding: var(--spacing);
  height: auto;
  align-items: center;
  cursor: var(--cursor);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW-:hover {
  background: var(--background-modifier-hover);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW-:active {
  background: var(--background-modifier-active);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW-:only-child {
  border: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW- .keybindShortcutSearchPopout-1MAfqq {
  height: auto;
  width: auto;
  margin-left: var(--spacing);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW- .keybindShortcutSearchPopout-1MAfqq span {
  margin: 0;
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  box-shadow: none;
  text-transform: capitalize;
  -webkit-user-select: none;
          user-select: none;
  border: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW- .queryText-3xoOY7 {
  line-height: normal;
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  color: var(--text-muted);
  text-transform: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .queryContainer-RKFJW- .queryText-3xoOY7 strong {
  font-size: inherit;
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN {
  margin: 0;
  padding: 0;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN::before {
  content: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .header-2N-gMV {
  color: var(--text-normal);
  font-size: var(--font-size);
  text-transform: none;
  font-weight: var(--font-weight-semibold);
  padding: var(--spacing);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .searchLearnMore-3SQUAj,
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .searchClearHistory-2cSSMO {
  color: var(--text-muted);
  opacity: 1;
  right: var(--spacing);
  top: calc(var(--spacing) * .95);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .searchLearnMore-3SQUAj a,
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .searchClearHistory-2cSSMO a {
  color: inherit;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .searchLearnMore-3SQUAj:hover,
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .searchClearHistory-2cSSMO:hover {
  color: var(--text-normal);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q {
  margin: 0;
  padding: 0 var(--spacing);
  height: var(--item-height);
  font-size: var(--font-size);
  border-radius: 0;
  cursor: var(--cursor);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q:after {
  background: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q.selected-rZcOL- {
  background: var(--background-modifier-hover);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q.selected-rZcOL-:after {
  background: linear-gradient(90deg, transparent, var(--background-modifier-hover));
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q:active {
  background: var(--background-modifier-active);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q:active:after {
  background: linear-gradient(90deg, transparent, var(--background-modifier-active));
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q strong {
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .displayAvatar-1wWlVM {
  border-radius: var(--border-radius);
  width: var(--avatar-size-xsm);
  height: var(--avatar-size-xsm);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .nonText-3CRkO0 {
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  margin-right: var(--spacing-half);
  line-height: normal;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .displayedNick-3xxvzU {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  margin: 0 var(--spacing-half);
  line-height: normal;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .displayUsername-Qekxml,
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .searchResultChannelCategory-1l0lSn,
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .searchResultChannelIcon-1DnTme {
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  text-transform: none;
  line-height: normal;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .searchResultChannelCategory-1l0lSn {
  top: 0;
  margin-left: var(--spacing-half);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .filter-3Y_im- {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .answer-1n6g43 {
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  margin-left: 0;
  margin-right: var(--spacing-half);
  line-height: normal;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .searchResultChannelIcon-1DnTme {
  display: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .searchResultChannelIcon-1DnTme + strong::before {
  content: "#";
  color: var(--text-muted);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .plusIcon-v0BTrL {
  right: var(--spacing);
  opacity: 1;
  background: var(--text-muted);
  top: 8px;
  height: 16px;
  width: 16px;
  -webkit-mask: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0naHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmcnIHdpZHRoPScxMicgaGVpZ2h0PScxNicgdmlld0JveD0nMCAwIDEyIDE2Jz48cGF0aCBmaWxsLXJ1bGU9J2V2ZW5vZGQnIGQ9J00xMiA5SDd2NUg1VjlIMFY3aDVWMmgydjVoNXYyeic+PC9wYXRoPjwvc3ZnPg==") center/10px no-repeat;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .plusIcon-v0BTrL polygon {
  display: none;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .resultsGroup-r_nuzN .option-96V44q .plusIcon-v0BTrL:hover {
  background: var(--text-normal);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .datePickerHint-3Q1Udw {
  padding: var(--spacing);
  margin: 0;
  display: flex;
  align-items: center;
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .datePickerHint-3Q1Udw .hint-165cR4 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-muted);
}
#app-mount .layer-v9HyYc[style*=left][style*=top] .container-3ayLPN.elevationBorderHigh-2WYJ09 .datePickerHint-3Q1Udw .hintValue-29ny8Z {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  -webkit-user-select: none;
          user-select: none;
}

#app-mount .styleFlexible-wGDiIL,
#app-mount .submenu-2-ysNh {
  background: var(--background);
  box-shadow: var(--elevation-1);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  overflow: hidden;
}
#app-mount .styleFlexible-wGDiIL .scroller-3BxosC,
#app-mount .submenu-2-ysNh .scroller-3BxosC {
  padding: 0;
}
#app-mount .styleFlexible-wGDiIL .scroller-3BxosC::-webkit-scrollbar,
#app-mount .submenu-2-ysNh .scroller-3BxosC::-webkit-scrollbar {
  width: 0;
}
#app-mount .styleFlexible-wGDiIL .separator-2I32lJ,
#app-mount .submenu-2-ysNh .separator-2I32lJ {
  margin: 0;
  border-color: var(--base-border);
}
#app-mount .styleFlexible-wGDiIL .groupLabel-2t5iuZ,
#app-mount .submenu-2-ysNh .groupLabel-2t5iuZ {
  font-size: var(--font-size);
  color: var(--text-muted);
  font-weight: var(--font-weight-semibold);
  margin: 0;
  padding: var(--spacing-half) var(--spacing);
  box-sizing: border-box;
  height: 32px;
  text-transform: none;
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte,
#app-mount .submenu-2-ysNh .item-1tOPte {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  margin: 0;
  padding: var(--spacing-half) var(--spacing);
  box-sizing: border-box;
  border-radius: 0;
  height: 32px;
  cursor: var(--cursor);
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte .labelContainer-1BLJti,
#app-mount .submenu-2-ysNh .item-1tOPte .labelContainer-1BLJti {
  padding: 0 var(--spacing);
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte.focused-3afm-j,
#app-mount .submenu-2-ysNh .item-1tOPte.focused-3afm-j {
  background: var(--background-modifier-hover);
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte:active:not(.hideInteraction-1iHO1O),
#app-mount .submenu-2-ysNh .item-1tOPte:active:not(.hideInteraction-1iHO1O) {
  background: var(--background-modifier-active);
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte.colorDanger-2qLCe1,
#app-mount .submenu-2-ysNh .item-1tOPte.colorDanger-2qLCe1 {
  color: rgb(var(--status-red));
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte.colorBrand-ROmMP1,
#app-mount .submenu-2-ysNh .item-1tOPte.colorBrand-ROmMP1 {
  color: var(--text-link);
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte.hideInteraction-1iHO1O,
#app-mount .submenu-2-ysNh .item-1tOPte.hideInteraction-1iHO1O {
  height: auto;
  padding: 0;
}
#app-mount .styleFlexible-wGDiIL .item-1tOPte .iconContainer-2-XQPY,
#app-mount .submenu-2-ysNh .item-1tOPte .iconContainer-2-XQPY {
  color: var(--text-muted);
  margin-left: var(--spacing);
}
#app-mount .wrapper-3_530D {
  padding: 0;
  border-bottom: 1px solid var(--base-border);
  overflow: hidden;
  border-radius: var(--border-radius) var(--border-radius) 0 0;
}
#app-mount .button-F9qN4n {
  padding: 0;
  width: 45px;
  flex-grow: 1;
  border-radius: 0;
  background: transparent;
  cursor: var(--cursor);
}
#app-mount .button-F9qN4n:hover {
  background: var(--background-modifier-hover);
}
#app-mount .button-F9qN4n:active {
  background: var(--background-modifier-active);
}
#app-mount .submenuContainer-2gbm7M .layer-v9HyYc[style*=right] {
  margin-right: -4px;
}
#app-mount .submenuContainer-2gbm7M .layer-v9HyYc[style*=left] {
  margin-left: -4px;
}

#app-mount .autocomplete-1vrmpx {
  background: var(--background);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  box-shadow: var(--elevation-1);
  margin-left: calc((var(--spacing-double) + var(--avatar-size-sm)) * -1 + var(--spacing));
  bottom: calc(100% + var(--spacing-double));
  overflow: visible;
}
#app-mount .autocomplete-1vrmpx .wrapper-3t9DeA {
  height: var(--avatar-size-xsm) !important;
  width: var(--avatar-size-xsm) !important;
}
#app-mount .autocomplete-1vrmpx .base-1pYU8j {
  border-radius: 0;
  height: var(--item-height);
  align-items: center;
  display: flex;
  padding: 0 var(--spacing);
}
#app-mount .autocomplete-1vrmpx .base-1pYU8j .contentTitle-2tG_sM {
  color: var(--text-normal);
  text-transform: none;
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
  padding: 0;
}
#app-mount .autocomplete-1vrmpx .base-1pYU8j .contentTitle-2tG_sM strong {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  flex-grow: 0;
  display: inline-flex;
  -webkit-user-select: none;
          user-select: none;
  margin-left: var(--spacing-half);
}
#app-mount .autocomplete-1vrmpx .autocompleteInner-zh20B_ {
  padding-bottom: 0;
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa {
  padding: 0;
  border-radius: 0;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .selectable-3dP3y- {
  cursor: var(--cursor);
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .selectable-3dP3y-:hover, #app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .selectable-3dP3y-.selected-1Tbx07 {
  background: var(--background-modifier-hover);
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .selectable-3dP3y-:active {
  background: var(--background-modifier-active);
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .selectable-3dP3y- .content-Qb0rXO {
  color: var(--text-normal);
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .iconForeground-1w5n7R {
  fill: var(--text-muted);
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .size14-e6ZScH {
  font-size: var(--font-size);
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .size14-e6ZScH[style*=color] {
  font-weight: var(--font-weight-semibold);
  border: 1px solid currentColor;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  flex-grow: 0 !important;
  padding: var(--spacing-third);
  border-radius: var(--border-radius);
  font-size: var(--font-size-sm);
  line-height: normal;
}
#app-mount .autocomplete-1vrmpx .autocompleteRow-2OthDa .size14-e6ZScH[style*=color] + .description-11DmNu {
  background: transparent !important;
  margin: 0;
  margin-left: auto;
  padding: 0;
  color: var(--text-muted);
}
#app-mount .autocomplete-1vrmpx .flexChild-faoVW3 {
  display: flex;
  align-items: center;
}
#app-mount .autocomplete-1vrmpx .colorStandard-2KCXvj.flexChild-faoVW3 {
  margin: 0;
}
#app-mount .autocomplete-1vrmpx .divider-23swzi {
  background: var(--base-border);
}
#app-mount .autocomplete-1vrmpx .selector-2IcQBU {
  border-radius: 0;
  padding: 0 var(--spacing);
  display: flex;
  align-items: center;
  height: var(--item-height);
}
#app-mount .autocomplete-1vrmpx .selector-2IcQBU.selectorSelected-1_M1WV {
  background: var(--background-modifier-hover);
}
#app-mount .autocomplete-1vrmpx .marginLeft4-3VaXdt {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  margin-left: var(--spacing);
}
#app-mount .autocomplete-1vrmpx .description-11DmNu {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  flex-grow: 0;
  display: inline-flex;
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .autocomplete-1vrmpx .description-11DmNu .colorStandard-2KCXvj {
  color: inherit;
  font-size: inherit;
  font-weight: inherit;
  line-height: normal;
}

#app-mount .channelTextAreaUpload-3t7EIx .autocomplete-1vrmpx {
  margin: 0 !important;
  bottom: unset;
  top: calc(100% + var(--spacing-half) + 5px);
}
#app-mount .channelTextAreaUpload-3t7EIx .autocomplete-1vrmpx::before {
  content: "";
  top: -5.5px;
  transform: translateX(-50%);
  transform: rotate(-135deg);
  position: absolute;
  left: 50%;
  height: 10px;
  width: 10px;
  background: var(--background);
  border-bottom: 1px solid var(--base-border);
  border-right: 1px solid var(--base-border);
  -webkit-clip-path: polygon(0 100%, 100% 100%, 100% 0);
  clip-path: polygon(0 100%, 100% 100%, 100% 0);
  box-shadow: var(--elevation-1);
}

#app-mount ::-webkit-scrollbar {
  display: none;
}
#app-mount .wrapper-1rqM3x {
  z-index: 10;
}
#app-mount .emojiPicker-3PwZFl {
  height: 442px;
  grid-template-rows: 46px auto 49px;
  grid-template-columns: 38px auto;
  background: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
}
#app-mount .contentWrapper-SvZHNd {
  grid-gap: 0;
  padding-top: 0;
  border-radius: var(--border-radius);
  display: block;
  overflow: visible;
  box-shadow: var(--elevation-1);
}
#app-mount .contentWrapper-SvZHNd .scroller-2FKFPG {
  height: 396px;
}
#app-mount .nav-7UD0KD {
  padding: 0;
  position: absolute;
  z-index: 101;
  top: var(--spacing);
  left: var(--spacing);
}
#app-mount .navItem-3Wp_oJ[aria-controls] {
  width: auto;
}
#app-mount .navItem-3Wp_oJ[aria-controls] + div {
  margin-left: var(--spacing);
}
#app-mount .navItem-3Wp_oJ[aria-controls] button {
  padding: 0;
  height: var(--input-height);
  width: var(--input-height);
  transition: none;
  cursor: var(--cursor);
  border-radius: var(--border-radius);
}
#app-mount .navItem-3Wp_oJ[aria-controls] button .contents-18-Yxp {
  font-size: 0;
  height: 16px;
  width: 16px;
  background: var(--text-muted);
}
#app-mount .navItem-3Wp_oJ[aria-controls] button.navButtonActive-1MkytQ {
  background: rgb(var(--accent));
}
#app-mount .navItem-3Wp_oJ[aria-controls] button.navButtonActive-1MkytQ .contents-18-Yxp {
  opacity: 1;
  background: var(--white);
}
#app-mount .navItem-3Wp_oJ[aria-controls]:first-child button .contents-18-Yxp {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16"><path fill-rule="evenodd" d="M1.75 2.5a.25.25 0 00-.25.25v10.5c0 .138.112.25.25.25h.94a.76.76 0 01.03-.03l6.077-6.078a1.75 1.75 0 012.412-.06L14.5 10.31V2.75a.25.25 0 00-.25-.25H1.75zm12.5 11H4.81l5.048-5.047a.25.25 0 01.344-.009l4.298 3.889v.917a.25.25 0 01-.25.25zm1.75-.25V2.75A1.75 1.75 0 0014.25 1H1.75A1.75 1.75 0 000 2.75v10.5C0 14.216.784 15 1.75 15h12.5A1.75 1.75 0 0016 13.25zM5.5 6a.5.5 0 11-1 0 .5.5 0 011 0zM7 6a2 2 0 11-4 0 2 2 0 014 0z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16"><path fill-rule="evenodd" d="M1.75 2.5a.25.25 0 00-.25.25v10.5c0 .138.112.25.25.25h.94a.76.76 0 01.03-.03l6.077-6.078a1.75 1.75 0 012.412-.06L14.5 10.31V2.75a.25.25 0 00-.25-.25H1.75zm12.5 11H4.81l5.048-5.047a.25.25 0 01.344-.009l4.298 3.889v.917a.25.25 0 01-.25.25zm1.75-.25V2.75A1.75 1.75 0 0014.25 1H1.75A1.75 1.75 0 000 2.75v10.5C0 14.216.784 15 1.75 15h12.5A1.75 1.75 0 0016 13.25zM5.5 6a.5.5 0 11-1 0 .5.5 0 011 0zM7 6a2 2 0 11-4 0 2 2 0 014 0z"></path></svg>') center/cover no-repeat;
}
#app-mount .navItem-3Wp_oJ[aria-controls]:last-child button .contents-18-Yxp {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16"><path fill-rule="evenodd" d="M1.326 1.973a1.2 1.2 0 011.49-.832c.387.112.977.307 1.575.602.586.291 1.243.71 1.7 1.296.022.027.042.056.061.084A13.22 13.22 0 018 3c.67 0 1.289.037 1.861.108l.051-.07c.457-.586 1.114-1.004 1.7-1.295a9.654 9.654 0 011.576-.602 1.2 1.2 0 011.49.832c.14.493.356 1.347.479 2.29.079.604.123 1.28.07 1.936.541.977.773 2.11.773 3.301C16 13 14.5 15 8 15s-8-2-8-5.5c0-1.034.238-2.128.795-3.117-.08-.712-.034-1.46.052-2.12.122-.943.34-1.797.479-2.29zM8 13.065c6 0 6.5-2 6-4.27C13.363 5.905 11.25 5 8 5s-5.363.904-6 3.796c-.5 2.27 0 4.27 6 4.27z"></path><path d="M4 8a1 1 0 012 0v1a1 1 0 01-2 0V8zm2.078 2.492c-.083-.264.146-.492.422-.492h3c.276 0 .505.228.422.492C9.67 11.304 8.834 12 8 12c-.834 0-1.669-.696-1.922-1.508zM10 8a1 1 0 112 0v1a1 1 0 11-2 0V8z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16"><path fill-rule="evenodd" d="M1.326 1.973a1.2 1.2 0 011.49-.832c.387.112.977.307 1.575.602.586.291 1.243.71 1.7 1.296.022.027.042.056.061.084A13.22 13.22 0 018 3c.67 0 1.289.037 1.861.108l.051-.07c.457-.586 1.114-1.004 1.7-1.295a9.654 9.654 0 011.576-.602 1.2 1.2 0 011.49.832c.14.493.356 1.347.479 2.29.079.604.123 1.28.07 1.936.541.977.773 2.11.773 3.301C16 13 14.5 15 8 15s-8-2-8-5.5c0-1.034.238-2.128.795-3.117-.08-.712-.034-1.46.052-2.12.122-.943.34-1.797.479-2.29zM8 13.065c6 0 6.5-2 6-4.27C13.363 5.905 11.25 5 8 5s-5.363.904-6 3.796c-.5 2.27 0 4.27 6 4.27z"></path><path d="M4 8a1 1 0 012 0v1a1 1 0 01-2 0V8zm2.078 2.492c-.083-.264.146-.492.422-.492h3c.276 0 .505.228.422.492C9.67 11.304 8.834 12 8 12c-.834 0-1.669-.696-1.922-1.508zM10 8a1 1 0 112 0v1a1 1 0 11-2 0V8z"></path></svg>') center/cover no-repeat;
}
#app-mount #gif-picker-tab-panel .header-1TOWci {
  padding-left: 80px;
}
#app-mount .nav-7UD0KD + .wrapper-1rqM3x .header-1TOWci, #app-mount .nav-7UD0KD + .wrapper-1rqM3x .header-8ilj5e {
  padding-left: 80px;
}
#app-mount .header-1TOWci, #app-mount .header-8ilj5e {
  padding: var(--spacing);
  box-shadow: none;
  border-bottom: 1px solid var(--base-border);
  grid-template-columns: auto 20px;
  grid-gap: var(--spacing);
}
#app-mount .container-2XeR5Z, #app-mount .container-cMG81i {
  background: transparent;
  border-radius: 0;
  overflow: visible;
}
#app-mount .inner-2P4tQO, #app-mount .inner-3ErfOT {
  padding: 0;
}
#app-mount .input-1Rv96N, #app-mount .input-3Xdcic {
  box-sizing: border-box;
  height: var(--input-height);
  background-color: var(--background-dark);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  font-size: var(--font-size);
  padding: 0 var(--spacing) 0 calc(var(--spacing) + 14px);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  margin: 0;
  z-index: 1;
}
#app-mount .input-1Rv96N:focus, #app-mount .input-3Xdcic:focus {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
}
#app-mount .header-8ilj5e .iconLayout-1WxHy4,
#app-mount .header-1TOWci .iconLayout-3OgqU3 {
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  order: -1;
  position: absolute;
  height: var(--input-height);
  left: var(--spacing-half);
}
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-O4O2CN,
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-2wXvy1,
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-O4O2CN,
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-2wXvy1 {
  height: 14px;
  width: 14px;
  cursor: var(--cursor);
}
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-3cZ1F_,
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-1S6UIr,
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-2wXvy1 .icon-3cZ1F_,
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-2wXvy1 .icon-1S6UIr,
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-O4O2CN .icon-3cZ1F_,
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-O4O2CN .icon-1S6UIr,
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-2wXvy1 .icon-3cZ1F_,
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-2wXvy1 .icon-1S6UIr {
  color: var(--toolbar-text-muted);
  transition: none;
}
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-3cZ1F_ path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"],
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-1S6UIr path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"],
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-2wXvy1 .icon-3cZ1F_ path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"],
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-2wXvy1 .icon-1S6UIr path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-O4O2CN .icon-3cZ1F_ path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-O4O2CN .icon-1S6UIr path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-2wXvy1 .icon-3cZ1F_ path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-2wXvy1 .icon-1S6UIr path[d="M21.707 20.293L16.314 14.9C17.403 13.504 18 11.799 18 10C18 7.863 17.167 5.854 15.656 4.344C14.146 2.832 12.137 2 10 2C7.863 2 5.854 2.832 4.344 4.344C2.833 5.854 2 7.863 2 10C2 12.137 2.833 14.146 4.344 15.656C5.854 17.168 7.863 18 10 18C11.799 18 13.504 17.404 14.9 16.314L20.293 21.706L21.707 20.293ZM10 16C8.397 16 6.891 15.376 5.758 14.243C4.624 13.11 4 11.603 4 10C4 8.398 4.624 6.891 5.758 5.758C6.891 4.624 8.397 4 10 4C11.603 4 13.109 4.624 14.242 5.758C15.376 6.891 16 8.398 16 10C16 11.603 15.376 13.11 14.242 14.243C13.109 15.376 11.603 16 10 16Z"] {
  d: path("M15.7 13.3l-3.81-3.83A5.93 5.93 0 0 0 13 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 0 0 0-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z");
  transform: scale(1.375) translateY(1px);
}
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-3cZ1F_ path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"],
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-1S6UIr path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"],
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-2wXvy1 .icon-3cZ1F_ path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"],
#app-mount .header-8ilj5e .iconLayout-1WxHy4 .iconContainer-2wXvy1 .icon-1S6UIr path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-O4O2CN .icon-3cZ1F_ path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-O4O2CN .icon-1S6UIr path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-2wXvy1 .icon-3cZ1F_ path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"],
#app-mount .header-1TOWci .iconLayout-3OgqU3 .iconContainer-2wXvy1 .icon-1S6UIr path[d="M18.4 4L12 10.4L5.6 4L4 5.6L10.4 12L4 18.4L5.6 20L12 13.6L18.4 20L20 18.4L13.6 12L20 5.6L18.4 4Z"] {
  d: path("M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z");
  transform: scale(1.375) translateY(1px) translateX(2.5px);
}
#app-mount .diversitySelector-1v4_1A {
  width: 20px;
  height: 20px;
}
#app-mount .diversityEmojiItemImage-2gPNoS {
  width: 20px;
  height: 20px;
  margin-right: 0;
}
#app-mount .diversitySelectorPopout-3FiGaM {
  background: var(--background-dark);
  border: 1px solid var(--base-border);
  height: auto !important;
  border-radius: var(--border-radius);
}
#app-mount .diversityEmojiItem-L6_IXw {
  width: 20px;
  height: 20px;
  border-radius: 0;
}
#app-mount .categoryList-2Kzf65 {
  border: 1px solid var(--base-border);
  border-top: none;
  background: var(--background-dark);
  width: 38px;
  top: 47px;
  border-bottom-left-radius: var(--border-radius);
}
#app-mount .categoryItem-1D0nxC {
  width: 100%;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  height: calc(var(--item-height) - 1px);
  display: flex;
  align-items: center;
  justify-content: center;
  margin-bottom: 0;
  border-radius: 0;
  cursor: var(--cursor);
  transition: none;
}
#app-mount .categoryItem-1D0nxC .mask-2hO5M8 {
  width: 24px;
  height: 24px;
}
#app-mount .categoryItem-1D0nxC .mask-2hO5M8 foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount .categoryItem-1D0nxC .guildIcon-3h-1IH {
  border-radius: var(--border-radius);
  width: 100%;
  height: 100%;
  background: var(--background-light);
}
#app-mount .categoryItem-1D0nxC:hover {
  background: var(--background-modifier-hover);
}
#app-mount .categoryItem-1D0nxC:active {
  background: var(--background-modifier-active);
}
#app-mount .categoryItemDefaultCategorySelected-_HCKoz,
#app-mount .categoryItemDefaultCategorySelected-_HCKoz:hover {
  background: rgb(var(--accent));
}
#app-mount .categoryItemDefaultCategorySelected-_HCKoz svg,
#app-mount .categoryItemDefaultCategorySelected-_HCKoz:hover svg {
  color: var(--white);
}
#app-mount .guildCategorySeparator-_An-MP {
  margin: var(--spacing) 0;
  border-bottom-color: var(--base-border);
}
#app-mount .unicodeShortcut-15J8Ck {
  height: 49px;
  border-top: 1px solid var(--base-border);
  box-sizing: border-box;
  cursor: var(--cursor);
}
#app-mount .unicodeShortcut-15J8Ck svg {
  width: 16px;
  height: 16px;
  color: var(--text-muted);
}
#app-mount .unicodeShortcut-15J8Ck svg path {
  d: path("M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z");
  transform: scale(1.5);
}
#app-mount .unicodeShortcut-15J8Ck:hover svg {
  color: var(--text-normal);
}
#app-mount .container-2jxBbw, #app-mount .results-3i9FaE {
  height: 398px;
}
#app-mount .listItems-1uJgMC {
  margin-left: -8px;
  margin-top: -8px;
  width: 100%;
}
#app-mount .wrapper-1-Fsb8 {
  background: var(--background);
  padding: 0 var(--spacing);
  border-bottom: 1px solid var(--base-border);
  border-top: 1px solid var(--base-border);
  margin-bottom: var(--spacing);
  background: var(--background-light);
  cursor: var(--cursor);
  height: var(--item-height);
}
#app-mount .wrapper-1-Fsb8 .header-19cWci {
  cursor: var(--cursor);
  display: flex;
  width: 100%;
}
#app-mount .wrapper-1-Fsb8 .headerLabel-3dG4M- {
  font-size: var(--font-size);
  text-transform: none;
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  cursor: var(--cursor);
  margin-left: var(--spacing-half);
  flex-grow: 1;
}
#app-mount .wrapper-1-Fsb8 .arrow-gKvcEx {
  transition: none;
  cursor: var(--cursor);
  color: var(--text-muted);
}
#app-mount .wrapper-1-Fsb8 foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount .wrapper-1-Fsb8 foreignObject .guildIcon-3h-1IH {
  border-radius: var(--border-radius);
}
#app-mount .categorySection-2sgp74 {
  margin: var(--spacing) 0 var(--spacing-double);
}
#app-mount .categorySection-2sgp74:first-child {
  margin-top: 0;
}
#app-mount .categorySection-2sgp74:first-child .wrapper-1-Fsb8 {
  border-top: none;
}
#app-mount .emojiListRow-m_GHp0 {
  padding: 0 var(--spacing);
}
#app-mount .emojiItem-14v6tW {
  border-radius: var(--border-radius);
  cursor: var(--cursor);
}
#app-mount .emojiItem-14v6tW.emojiItemSelected-1aLkfV {
  background: var(--background-modifier-hover);
}
#app-mount .emojiItem-14v6tW.emojiItemDisabled-1FvFuF {
  filter: none;
  opacity: 0.2;
  pointer-events: none;
}
#app-mount .emojiItem-14v6tW .imageLoading-bpSr0M {
  display: none;
}
#app-mount .inspector-3LQtX9 {
  background: var(--background);
  border-top: 1px solid var(--base-border);
  padding: var(--spacing);
  height: 49px;
  box-sizing: border-box;
}
#app-mount .inspector-3LQtX9 .graphicSecondary-1zo8ze {
  border-radius: var(--border-radius);
  width: var(--avatar-size);
  height: var(--avatar-size);
  margin-left: 0;
}
#app-mount .inspector-3LQtX9 .graphicSecondary-1zo8ze foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount .inspector-3LQtX9 .graphicSecondary-1zo8ze .guildIcon-3h-1IH {
  width: var(--avatar-size);
  height: var(--avatar-size);
  border-radius: var(--border-radius);
}
#app-mount .inspector-3LQtX9 .graphicPrimary-1I8l6r {
  width: var(--avatar-size);
  height: var(--avatar-size);
  border-radius: var(--border-radius);
}
#app-mount .textWrapper-2hGAqu {
  margin: 0 var(--spacing);
}
#app-mount .titlePrimary-1jHRGm {
  font-size: var(--font-size);
  line-height: inherit;
  line-height: 1.5;
  color: var(--text-normal);
}
#app-mount .guildName-10c_vSm,
#app-mount .titleSecondary-3Dh_RZ {
  font-size: var(--font-size-sm);
  line-height: inherit;
  color: var(--text-muted);
}
#app-mount .premiumPromo-fVlLu- {
  background: var(--background);
  border-radius: 0;
}
#app-mount .premiumPromo-fVlLu- .premiumPromoImage-2wS9zo {
  display: none;
}
#app-mount .premiumPromo-fVlLu- .premiumPromoTitle-2cKOQe {
  font-size: var(--font-size);
  color: var(--text-normal);
  margin: 0;
  margin-bottom: var(--spacing-half);
  line-height: normal;
  display: flex;
  flex-direction: column;
  align-items: center;
}
#app-mount .premiumPromo-fVlLu- .premiumPromoTitle-2cKOQe:before {
  content: "";
  height: 124px;
  width: 400px;
  display: block;
  background: var(--text-muted);
  margin-bottom: var(--spacing-double);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/6.svg") center/contain no-repeat;
}
#app-mount .premiumPromo-fVlLu- .premiumPromoDescription-QWky-t {
  font-size: var(--font-size);
  color: var(--text-muted);
  margin: 0;
  margin-bottom: var(--spacing);
  line-height: normal;
}
#app-mount .premiumPromoClose-1w65km {
  background: var(--text-muted);
  opacity: 1;
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/12px no-repeat;
}
#app-mount .premiumPromoClose-1w65km:hover {
  background: var(--text-normal);
}
#app-mount .noSearchResultsContainer-7llQ5J {
  border-bottom: 1px solid var(--base-border);
}
#app-mount .noSearchResultsContainer-7llQ5J .wrapper-1GJGVj {
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .noSearchResultsContainer-7llQ5J .sadImage-2ph8SI {
  width: 120px;
  height: 120px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
  margin-bottom: var(--spacing-double);
}
#app-mount #gif-picker-tab-panel .content-ySCtCx:after, #app-mount #gif-picker-tab-panel.container-3ISnnM:after {
  content: none;
}
#app-mount .container-3ISnnM {
  background: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
}

html.theme-light #app-mount .input-1Rv96N,
html.theme-light #app-mount .input-3Xdcic {
  background: var(--background);
}

#app-mount .searchResultsWrap-3-pOjs {
  background-color: var(--background);
  border-left: 1px solid var(--base-border);
  box-sizing: border-box;
  width: calc(var(--sidebar-width) * 1.5);
}
#app-mount .searchResultsWrap-3-pOjs .scroller-3GIiMh {
  padding-left: 0;
}
#app-mount .searchResultsWrap-3-pOjs .scroller-3GIiMh::-webkit-scrollbar {
  display: none;
}
#app-mount .searchResultsWrap-3-pOjs .scroller-3GIiMh > .pagination-eQpqgk:first-child {
  margin: 0;
  padding: var(--spacing) 0;
  border-bottom: 1px solid var(--base-border);
}
#app-mount .channelName-1JRO3C {
  background: var(--background);
  padding: var(--spacing);
  line-height: var(--line-height);
}
#app-mount .searchHeader-2XoQg7 {
  box-shadow: none;
  border-bottom: 1px solid var(--base-border);
  padding: 0 var(--spacing);
}
#app-mount .tab-2j5AEF,
#app-mount .totalResults--dyAxF {
  padding: var(--spacing) 0;
  font-size: var(--font-size);
}
#app-mount .channelSeparator-1DOiGt:before {
  content: none;
}
#app-mount .resultsBlocked-3a77lQ {
  background: var(--background-light);
  border-radius: 0;
  border: none;
  border-bottom: 1px solid var(--base-border);
  font-size: var(--font-size);
  font-weight: var(--font-weight-noraml);
  color: var(--text-normal);
  padding: var(--spacing);
}
#app-mount .resultsBlocked-3a77lQ .resultsBlockedImage-2aDVMx {
  background: rgb(var(--status-yellow));
  width: 18px;
  height: 18px;
  margin-right: var(--spacing);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 0 0 0 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 0 0 .01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"/></svg>') center/contain no-repeat;
}
#app-mount .searchResult-9tQ1uo:after, #app-mount .searchResult-9tQ1uo:before {
  content: none;
}
#app-mount .searchResult-9tQ1uo.expanded-w_LCGl {
  border: none;
  border-top: 1px solid var(--base-border);
  border-bottom: 1px solid var(--base-border);
  border-radius: 0;
  background: var(--background-dark);
}
#app-mount .searchResultMessage-1fxgXh {
  border-radius: 0;
}
#app-mount .searchResultMessage-1fxgXh.hit-1fVM9e {
  border-left: none;
  border-right: none;
  border-color: var(--base-border);
  box-shadow: none;
  background: var(--background-alt);
}
#app-mount .searchResultMessage-1fxgXh:hover .jumpButton-JkYoYK {
  opacity: 1;
}
#app-mount .jumpButton-JkYoYK {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  height: var(--input-height);
  min-height: var(--input-height);
  cursor: var(--cursor);
  height: 20px;
  display: flex;
  align-items: center;
  opacity: 0;
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--white);
  background-color: var(--accent-solid);
}
#app-mount .jumpButton-JkYoYK:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .jumpButton-JkYoYK:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}

.layer-v9HyYc[style*="position: absolute;"][style*="bottom: 9"][style*=left] .animatorTop-2Y7x2r {
  position: fixed !important;
  top: 0 !important;
  left: 0 !important;
  position: fixed;
  top: 0;
  left: 0;
  transform: none !important;
  transition: none !important;
}
.layer-v9HyYc[style*="position: absolute;"][style*="bottom: 9"][style*=left] .animatorTop-2Y7x2r:before {
  content: "";
  position: fixed;
  top: 0;
  left: 0;
  height: 100vh;
  width: 100vw;
  background: var(--backdrop);
  z-index: 0;
  pointer-events: none;
}

#app-mount .container-2x5lvQ {
  background: var(--background);
  position: fixed;
  box-shadow: none;
  top: var(--titlebar-height);
  left: 0;
  width: calc(var(--sidebar-width) + var(--noasw-base));
  border-right: 1px solid var(--base-border);
  height: calc(100vh - var(--titlebar-height));
  border-radius: 0;
}
#app-mount .container-2x5lvQ header {
  height: var(--toolbar-height);
  padding: 0 var(--spacing);
  justify-content: flex-start;
  background: transparent;
  border-radius: 0;
}
#app-mount .container-2x5lvQ section {
  height: calc(100% - (var(--titlebar-height) + var(--toolbar-height)));
  background: transparent;
  padding: var(--spacing) var(--spacing) 0;
  display: flex;
  flex-direction: column;
}
#app-mount .container-2x5lvQ hr {
  height: 100%;
  margin: 0;
}
#app-mount .container-2x5lvQ canvas {
  width: 295px !important;
  height: 210px !important;
}
#app-mount .container-2x5lvQ p {
  color: var(--text-normal);
  font-size: var(--font-size);
}
#app-mount .container-2x5lvQ strong {
  color: var(--text-focus);
}
#app-mount .container-2x5lvQ .popoutBottom-31rU82 {
  margin: 0;
}

#app-mount .horizontalAutocompletes-3blb-Z {
  margin-bottom: 0;
  padding: 0 var(--spacing);
}
#app-mount .horizontalAutocomplete-L5KnTN {
  margin-right: var(--spacing);
}
#app-mount .horizontalAutocomplete-L5KnTN .selector-2IcQBU {
  height: 90px;
}

#app-mount .recentMentionsPopout-3rCiI6 {
  margin-left: -50px;
  position: absolute;
  background: var(--background);
  box-shadow: none;
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
}
#app-mount .recentMentionsPopout-3rCiI6 .header-2-Imhb {
  padding: 0 var(--spacing);
  height: unset;
  min-height: unset;
  display: flex;
  align-items: center;
}
#app-mount .recentMentionsPopout-3rCiI6 .tabBar-1kuXvJ {
  display: flex;
  align-items: center;
}
#app-mount .recentMentionsPopout-3rCiI6 .tab-ck0077 {
  margin: 0 var(--spacing) 0 0;
  padding: var(--spacing) 0;
  height: unset;
  border-radius: 0;
  background: transparent;
  font-size: var(--font-size);
  color: var(--text-normal);
}
#app-mount .recentMentionsPopout-3rCiI6 .tab-ck0077.active-1MbGPa {
  color: var(--text-focus);
  box-shadow: inset 0 -2px 0 var(--text-focus);
}
#app-mount .recentMentionsPopout-3rCiI6 .secondary-dIudih {
  padding: var(--spacing) 0;
  height: auto;
  min-height: unset;
  background: transparent;
  width: auto;
  min-width: unset;
  border-radius: 0;
}
#app-mount .container-3iAQ-0 {
  margin: 0;
  padding: 0;
  border-bottom: 1px solid var(--base-border);
}
#app-mount .container-3iAQ-0:hover .jumpButton-2F6EMx {
  opacity: 1;
}
#app-mount .channelHeader-3Gd2xq {
  background: var(--background);
  padding: var(--spacing);
  height: auto;
}
#app-mount .guildIcon-3Co6k- {
  border-radius: var(--border-radius);
}
#app-mount .channelNameHeader-F4hU_R {
  font-size: var(--font-size-md);
}
#app-mount .colorHeaderSecondary-3Sp3Ft {
  font-size: var(--font-size);
  color: var(--text-muted);
}
#app-mount .guildIcon-3Co6k- {
  margin-right: var(--spacing);
  width: var(--avatar-size);
  height: var(--avatar-size);
  background: var(--background-light);
}
#app-mount .acronym-1e2Mdt {
  font-size: var(--font-size);
  width: var(--avatar-size);
  height: var(--avatar-size);
  display: flex;
  justify-content: center;
  align-items: center;
}
#app-mount .messageContainer-gbhlwo {
  background: var(--background);
  border-radius: 0;
  padding: 0 var(--spacing) var(--spacing) 0;
}
#app-mount .messages-3G3erD {
  padding: 0;
  border-radius: 0;
  background: transparent;
}
#app-mount .messages-3G3erD .message-2g38UB {
  padding-top: 0;
  padding-bottom: 0;
}
#app-mount .closeButton-1152MI,
#app-mount .tertiary-aMXF0g {
  background: var(--background-light);
  display: flex;
  align-items: center;
  justify-content: center;
  height: 24px;
  min-height: unset;
  width: 24px;
  min-width: unset;
  padding: 0;
}
#app-mount .closeButton-1152MI svg,
#app-mount .tertiary-aMXF0g svg {
  width: 14px;
  height: 14px;
}
#app-mount .jumpButton-2F6EMx {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  height: 20px;
  opacity: 0;
  display: flex;
  align-items: center;
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--white);
  background-color: var(--accent-solid);
}
#app-mount .jumpButton-2F6EMx .text-3KVtey {
  color: var(--white);
}
#app-mount .jumpButton-2F6EMx:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .jumpButton-2F6EMx:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}

#app-mount .noiseCancellationPopout-iRK2A0 {
  position: fixed;
  top: var(--titlebar-height);
  left: 0;
  z-index: 1;
  height: calc(100vh - var(--titlebar-height));
  border-radius: 0;
  box-shadow: none;
  border-right: 1px solid var(--base-border);
  width: calc(var(--noasw-base) + var(--sidebar-width));
  box-sizing: border-box;
  background: var(--background);
}
#app-mount .noiseCancellationPopout-iRK2A0 .flex-1xMQg5 {
  margin-bottom: var(--spacing);
}
#app-mount .noiseCancellationPopout-iRK2A0 .flex-1xMQg5:first-child > div:first-child {
  align-items: center;
}
#app-mount .noiseCancellationPopout-iRK2A0 .flex-1xMQg5 > .flexChild-faoVW3:first-child {
  margin-left: 0;
}
#app-mount .noiseCancellationPopout-iRK2A0 .flex-1xMQg5 > .flexChild-faoVW3:last-child {
  margin-right: 0;
}
#app-mount .noiseCancellationPopout-iRK2A0 .h5-18_1nd {
  font-size: var(--font-size);
  padding: var(--spacing) 0;
  margin: 0;
}
#app-mount .micTest-2C-tpt {
  margin: 0 !important;
}
#app-mount .note-1V3kyJ {
  margin-top: 0;
}

#app-mount .container-3JTnYm {
  background: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  box-shadow: none;
  padding: var(--spacing);
}
#app-mount .container-3JTnYm > div[style*="height: 16px"] {
  display: none;
}

#app-mount .popoutContainer-1MXdqN {
  width: 274px;
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-1);
  background: var(--background);
  border: 1px solid var(--base-border);
}
#app-mount .popoutContainer-1MXdqN .loadingBackground-1p5N1j {
  height: 84px;
  width: 100%;
  margin: 0;
  background: var(--text-normal);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M10.236 7.4a4.15 4.15 0 0 1-1.2 3.6 4.346 4.346 0 0 1-5.41.54l1.17-1.14-4.3-.6.6 4.2 1.31-1.26c2.36 1.74 5.7 1.57 7.84-.54a5.876 5.876 0 0 0 1.74-4.46l-1.75-.34zM2.956 5a4.346 4.346 0 0 1 5.41-.54L7.196 5.6l4.3.6-.6-4.2-1.31 1.26c-2.36-1.74-5.7-1.57-7.85.54-1.24 1.23-1.8 2.85-1.73 4.46l1.75.35A4.17 4.17 0 0 1 2.956 5z"/></svg>') center/12px no-repeat;
  animation: rotate 1s linear infinite;
}
#app-mount .popoutContainer-1MXdqN .loadingBackground-1p5N1j .loading-1lSwpg {
  display: none;
}
#app-mount .popoutContainer-1MXdqN .emojiSection-3Fb9ix {
  padding: var(--spacing);
  background: transparent;
}
#app-mount .popoutContainer-1MXdqN .emojiSection-3Fb9ix .primaryEmoji-3LinDq {
  width: var(--avatar-size-lg);
  height: var(--avatar-size-lg);
  min-width: unset;
  min-height: unset;
  margin: 0;
  border-radius: var(--border-radius);
}
#app-mount .popoutContainer-1MXdqN .emojiSection-3Fb9ix .colorStandard-2KCXvj {
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight);
  line-height: normal;
}
#app-mount .popoutContainer-1MXdqN .emojiSection-3Fb9ix .colorStandard-2KCXvj.emojiName-27Bjxw {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .popoutContainer-1MXdqN .emojiSection-3Fb9ix button {
  margin: 0;
  width: auto;
  margin-top: var(--spacing);
}
#app-mount .popoutContainer-1MXdqN .emojiSection-3Fb9ix .truncatingText-18osv_ {
  margin-left: var(--spacing);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd {
  padding: var(--spacing);
  background: var(--background-light);
  border-top: 1px solid var(--base-border);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .flex-1xMQg5 svg {
  width: var(--avatar-size-lg);
  height: var(--avatar-size-lg);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .flex-1xMQg5 svg foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .flex-1xMQg5 svg foreignObject .guildIcon-1zxZMV {
  border-radius: var(--border-radius);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .guildName-nBoMcU {
  line-height: normal;
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .guildTitle-2IliYu {
  margin-bottom: var(--spacing-half);
  font-size: var(--font-size);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .overflow-WK9Ogt {
  color: var(--text-normal);
  font-size: var(--font-size);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .dotSeparator-2SMscJ {
  background-color: var(--text-muted);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .showMoreEmojis-1Xd5A3 {
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  box-sizing: border-box;
  display: flex;
  align-items: center;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  cursor: var(--cursor);
  padding: 0 var(--spacing);
  margin-top: var(--spacing);
  border-radius: var(--button-border-radius);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .showMoreEmojis-1Xd5A3 .flex-1xMQg5 {
  flex-grow: 0 !important;
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .showMoreEmojis-1Xd5A3 .showMoreEmojisArrow-PK64BO {
  display: none;
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .showMoreEmojis-1Xd5A3:hover {
  border: 1px solid currentColor;
}
#app-mount .popoutContainer-1MXdqN .guildSection-1EoFKd .showMoreEmojis-1Xd5A3:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}

html.theme-light #app-mount .container-ZRw2kD .guildSection-1EoFKd .showMoreEmojis-1Xd5A3:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .container-ZRw2kD .guildSection-1EoFKd .showMoreEmojis-1Xd5A3:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .container-VSDcQc {
  box-shadow: var(--elevation-1);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  background: var(--background);
  width: 220px;
}
#app-mount .container-VSDcQc::before {
  content: "";
  position: absolute;
  left: 50%;
  top: -4px;
  margin-left: -5px;
  height: 10px;
  width: 10px;
  background: var(--background-alt);
  transform: translateX(-50%);
  transform: rotate(-135deg);
  border-bottom: 1px solid var(--base-border);
  border-right: 1px solid var(--base-border);
  -webkit-clip-path: polygon(0 100%, 100% 100%, 100% 0);
  clip-path: polygon(0 100%, 100% 100%, 100% 0);
  box-shadow: var(--elevation-1);
}
#app-mount .container-VSDcQc .content-3YMskv {
  height: -webkit-fit-content !important;
  height: -moz-fit-content !important;
  height: fit-content !important;
}
#app-mount .container-VSDcQc .autocompleteShadow-iiGWFU,
#app-mount .container-VSDcQc .autocompleteHeaderBackground-30T70q {
  display: none;
}
#app-mount .container-VSDcQc .autocompleteArrowWrapper-3Z7OuM {
  display: none;
}
#app-mount .container-VSDcQc .header-2bNvm4 {
  background: var(--background-alt);
  height: auto;
  padding: var(--spacing);
  border-bottom: 1px solid var(--base-border);
  box-sizing: border-box;
}
#app-mount .container-VSDcQc .header-2bNvm4 .headerText-3i6A8K {
  color: var(--text-normal);
  text-transform: none;
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  margin-right: var(--spacing);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 {
  color: var(--text-normal);
  background: var(--background);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR {
  padding: 0;
  height: auto;
  max-height: calc(var(--item-height) * 7);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .row-rrHHJU {
  color: var(--text-normal);
  padding: 0;
  cursor: var(--cursor);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .row-rrHHJU .rowInner-1vvRiF {
  padding: 0 var(--spacing);
  height: var(--item-height);
  border-radius: 0;
  display: flex;
  align-items: center;
  font-size: var(--font-size);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .row-rrHHJU .rowInner-1vvRiF span {
  max-width: 100%;
  overflow: hidden;
  text-overflow: ellipsis;
  line-height: 18px;
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .row-rrHHJU.selected-1pIgLL .rowInner-1vvRiF {
  background: var(--background-modifier-hover);
  color: var(--text-normal);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .row-rrHHJU:active .rowInner-1vvRiF {
  background: var(--background-modifier-active);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .empty-3hoe1g {
  border-radius: 0;
  line-height: normal;
  padding: var(--spacing-double);
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .empty-3hoe1g .noResultsHeader-pqW4H- {
  color: var(--text-normal);
  margin: 0;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  display: flex;
  flex-direction: column;
  align-items: center;
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .empty-3hoe1g .noResultsHeader-pqW4H-::before {
  content: "";
  width: 72px;
  height: 72px;
  background: var(--text-muted);
  display: block;
  position: relative;
  margin-bottom: var(--spacing);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
#app-mount .container-VSDcQc .sectionTag-pXyto9 .autocompleteScroller-iInVqR .empty-3hoe1g p {
  margin: 0;
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}

#app-mount .popouts-2bnG9Z .popout-2iWAc- {
  background: var(--background);
  box-shadow: var(--elevation-1) !important;
  border-radius: var(--border-radius);
  box-sizing: border-box;
  transform: none !important;
}

.full-motion body .translate-2dAEQ6 {
  transform: none !important;
  -webkit-transform: none !important;
  transition: none;
}

#app-mount .container-2Uhd6d {
  background: var(--background);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  margin-left: -40px;
  padding: var(--spacing);
  box-shadow: none;
  max-width: 320px;
}
#app-mount .container-2Uhd6d::before {
  content: "";
  height: 72px;
  width: 72px;
  position: relative;
  display: block;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/1.svg") center/50px no-repeat;
}
#app-mount .container-2Uhd6d .content-3MbD2f {
  margin-left: var(--spacing);
}
#app-mount .container-2Uhd6d .content-3MbD2f .base-1x0h_U {
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .container-2Uhd6d .content-3MbD2f .buttonContainer-3CyfSO {
  margin-top: var(--spacing);
}
#app-mount .container-2Uhd6d .content-3MbD2f .buttonContainer-3CyfSO .lookFilled-1Gx00P {
  margin: 0;
}
#app-mount .container-2Uhd6d .image-3OQMFm {
  display: none;
}

#app-mount .popout-2iWAc-.force-theme.content-1nP7fx {
  padding: var(--spacing);
  border: 1px solid var(--base-border);
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx.leftArrow-fNTiNn:before {
  height: 10px;
  width: 10px;
  background: var(--background);
  border: 1px solid var(--base-border) !important;
  transform: rotate(135deg);
  position: absolute;
  left: -6px;
  z-index: 1;
  -webkit-clip-path: polygon(0 100%, 100% 100%, 100% 0);
          clip-path: polygon(0 100%, 100% 100%, 100% 0);
  box-shadow: var(--elevation-1);
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .container-2k0FnA {
  display: none;
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .channelsTitle-1-1-6I {
  margin: 0;
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .body-2awMwV p,
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx div.body-2awMwV,
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx p.body-2awMwV {
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight);
  line-height: normal;
  margin-bottom: var(--spacing);
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .title-eQ0ZMf {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  margin-bottom: var(--spacing-third);
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q {
  margin-top: var(--spacing);
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q button {
  margin: 0;
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipCenterAlign-2kUfCH,
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipLeftAlign-2Oe1kC {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipCenterAlign-2kUfCH:hover,
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipLeftAlign-2Oe1kC:hover {
  border: 1px solid currentColor;
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipCenterAlign-2kUfCH:focus,
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipLeftAlign-2Oe1kC:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipCenterAlign-2kUfCH.buttonSkipCenterAlign-2kUfCH,
#app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipLeftAlign-2Oe1kC.buttonSkipCenterAlign-2kUfCH {
  margin-left: var(--spacing);
}

html.theme-light #app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipCenterAlign-2kUfCH:hover,
html.theme-light #app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipLeftAlign-2Oe1kC:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipCenterAlign-2kUfCH:focus,
html.theme-light #app-mount .popout-2iWAc-.force-theme.content-1nP7fx .buttonContainer-lZQm0q .buttonSkipLeftAlign-2Oe1kC:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .addGamePopout-2RY8Ju {
  padding: var(--spacing);
  background: var(--background);
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-1);
  border: 1px solid var(--base-border);
  margin-left: -150px;
}
#app-mount .addGamePopout-2RY8Ju .divider-3573oO {
  display: none;
}
#app-mount .addGamePopout-2RY8Ju .actions-3wcPyD {
  margin-top: var(--spacing);
}

#app-mount .toolbar-2bjZV7 {
  background: var(--background);
  border: 1px solid var(--base-border);
  box-shadow: var(--elevation-1);
  border-radius: var(--border-radius);
  height: auto;
  margin-left: 12px;
}
#app-mount .toolbar-2bjZV7 .button-qqmJ7w {
  all: unset;
  width: 30px;
  height: var(--input-height);
  display: flex;
  align-items: center;
  color: var(--text-normal);
  box-shadow: none !important;
}
#app-mount .toolbar-2bjZV7 .button-qqmJ7w:nth-child(2) {
  border-radius: var(--border-radius) 0 0 var(--border-radius);
}
#app-mount .toolbar-2bjZV7 .button-qqmJ7w:last-child {
  border-radius: 0 var(--border-radius) var(--border-radius) 0;
}
#app-mount .toolbar-2bjZV7 .button-qqmJ7w .icon-KgGMGo {
  color: inherit;
  height: 14px;
  width: 14px;
}
#app-mount .toolbar-2bjZV7 .button-qqmJ7w .buttonInner-3shTxu {
  height: auto;
}
#app-mount .toolbar-2bjZV7 .button-qqmJ7w:hover {
  background: var(--background-modifier-hover);
}
#app-mount .toolbar-2bjZV7 .button-qqmJ7w:active {
  background: var(--background-modifier-active);
}
#app-mount .toolbar-2bjZV7 .divider-24xeUg {
  display: none;
}
#app-mount .toolbar-2bjZV7:before {
  background: var(--background);
  border: 1px solid var(--base-border);
  width: 8px;
  height: 8px;
  -webkit-clip-path: polygon(100% 0, 0% 100%, 0 0);
          clip-path: polygon(100% 0, 0% 100%, 0 0);
  transform: rotate(225deg);
  margin-left: 3px;
  margin-bottom: 2.5px;
}

#app-mount .colorPickerCustom-2CWBn2 {
  padding: var(--spacing);
  border-radius: var(--border-radius);
  background: var(--background);
  box-shadow: var(--elevation-1);
  border: 1px solid var(--base-border);
  width: auto;
}
#app-mount .colorPickerCustom-2CWBn2 .saturation-1FDvtn {
  height: 150px;
  width: 200px;
}
#app-mount .colorPickerCustom-2CWBn2 .saturation-1FDvtn > div,
#app-mount .colorPickerCustom-2CWBn2 .saturation-1FDvtn > div > div,
#app-mount .colorPickerCustom-2CWBn2 .saturation-black {
  border-radius: var(--border-radius);
}
#app-mount .colorPickerCustom-2CWBn2 .hue-13HAGb {
  height: 6px;
  margin: var(--spacing) 0;
}
#app-mount .colorPickerCustom-2CWBn2 .hue-13HAGb > div > div {
  border-radius: var(--button-border-radius);
}
#app-mount .colorPickerCustom-2CWBn2 .hue-13HAGb > div > div > div > div {
  background: var(--white) !important;
  box-shadow: none !important;
  border-radius: var(--button-border-radius) !important;
  margin: 0 !important;
  height: 16px !important;
  width: 6px !important;
  margin-top: -4px !important;
  cursor: w-resize;
}
#app-mount .colorPickerCustom-2CWBn2 .marginTop8-1DLZ1n {
  margin: 0;
}

#app-mount .root-1gCeng.popout-103y-5 {
  left: 246px;
  top: calc(var(--spacing) - 8px);
  position: relative;
  width: 300px;
  background: var(--background);
  border: 1px solid var(--base-border);
  box-shadow: var(--elevation-1);
  border-radius: var(--border-radius);
  box-sizing: border-box;
  max-height: unset;
  min-height: unset;
}
#app-mount .root-1gCeng.popout-103y-5::before {
  content: "";
  position: absolute;
  left: 22px;
  top: -4px;
  height: 10px;
  width: 10px;
  background: var(--background-alt);
  transform: rotate(-135deg);
  border-bottom: 1px solid var(--base-border);
  border-right: 1px solid var(--base-border);
  -webkit-clip-path: polygon(0 100%, 100% 100%, 100% 0);
  clip-path: polygon(0 100%, 100% 100%, 100% 0);
  box-shadow: var(--elevation-1);
}
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 {
  padding: var(--spacing);
  transition: none;
  box-shadow: none;
  border-bottom: 1px solid var(--base-border);
  box-sizing: border-box;
  background: var(--background-alt);
  border-radius: var(--border-radius) var(--border-radius) 0 0;
  position: static;
}
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 .h4-AQvcAz,
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 .tag-2gHSR7 {
  display: none;
}
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 .h4-AQvcAz:only-child {
  display: flex;
  align-items: center;
  box-sizing: border-box;
  height: var(--input-height);
  background-color: var(--background-dark);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  font-size: var(--font-size);
  padding: 0 var(--spacing-half);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  margin: 0;
  z-index: 1;
  text-transform: none;
  opacity: 0.5;
  cursor: not-allowed;
}
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 .subtitle-2P4u9v {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  margin: 0;
  margin-bottom: var(--spacing-half);
}
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 .searchBar-1Vaz-O {
  margin: 0;
}
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 .searchBar-1Vaz-O .inner-3ErfOT {
  overflow: visible !important;
}
#app-mount .root-1gCeng.popout-103y-5 .header-1TKi98 .searchBar-1Vaz-O .inner-3ErfOT .input-1Rv96N {
  padding: 0 var(--spacing-half);
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv {
  height: -webkit-fit-content !important;
  height: -moz-fit-content !important;
  height: fit-content !important;
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF {
  margin: 0;
  padding: 0;
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe {
  font-size: var(--font-size);
  font-weight: var(--font-weight);
  color: var(--text-);
  padding: 0 var(--spacing);
  height: var(--item-height);
  cursor: var(--cursor);
  border-radius: 0;
  display: flex;
  align-items: center;
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe .avatar-vr5NCN {
  height: var(--avatar-size-xsm) !important;
  width: var(--avatar-size-xsm) !important;
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe .nickname-O95uts {
  display: none;
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe .discordTag-X7dpau {
  opacity: 1;
  color: var(--text-muted);
  font-size: var(--font-size);
  line-height: normal;
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe .discordTag-X7dpau .username-2b1r56 {
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe.friendSelected-1sa4bG, #app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe:hover {
  background: var(--background-modifier-hover);
}
#app-mount .root-1gCeng.popout-103y-5 .scroller-hUf6zQ .content-3YMskv .friendWrapper-2SrUFF .friend-3KALPe:active {
  background: var(--background-modifier-active);
}
#app-mount .root-1gCeng.popout-103y-5 .errorState-KkUH_2 {
  margin: 0;
  padding: var(--spacing-double);
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  display: flex;
  flex-direction: column;
  align-items: center;
}
#app-mount .root-1gCeng.popout-103y-5 .errorState-KkUH_2 .errorStateIcon-3fNXE5 {
  width: 72px;
  height: 72px;
  background: var(--text-muted);
  display: block;
  position: relative;
  margin-bottom: var(--spacing);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
#app-mount .root-1gCeng.popout-103y-5 .errorState-KkUH_2 > div:last-child {
  max-width: 180px;
}
#app-mount .root-1gCeng.popout-103y-5 .footerSeparator-M9dQY1 {
  display: none;
}
#app-mount .root-1gCeng.popout-103y-5 .footer-1eyGBa {
  flex: 0 !important;
  padding: var(--spacing);
  border-top: 1px solid var(--base-border);
}
#app-mount .root-1gCeng.popout-103y-5 .footer-1eyGBa button {
  margin: 0;
}
#app-mount .root-1gCeng.popout-103y-5 .footer-1eyGBa .h5-18_1nd + .input-cIJ7To {
  border: none;
  padding: 0;
  background: transparent;
}
#app-mount .root-1gCeng.popout-103y-5 .footer-1eyGBa .marginTop8-1DLZ1n {
  margin-top: var(--spacing-half);
  color: var(--text-muted);
  font-size: var(--font-size-sm);
}

#app-mount .layer-3QrUeG[aria-label*=SETTINGS],
#app-mount .layer-3QrUeG[aria-label*=RTC] {
  display: flex;
  align-items: center;
  justify-content: center;
  padding: 0 var(--spacing-triple);
  background: var(--backdrop);
  z-index: 1;
  top: calc(var(--titlebar-height) * -1);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS].animating-rRxada,
#app-mount .layer-3QrUeG[aria-label*=RTC].animating-rRxada {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] [class*=scroller- i]:not([class*=bd-]),
#app-mount .layer-3QrUeG[aria-label*=RTC] [class*=scroller- i]:not([class*=bd-]) {
  background: var(--background);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] [class*=scroller- i]:not([class*=bd-])::-webkit-scrollbar,
#app-mount .layer-3QrUeG[aria-label*=RTC] [class*=scroller- i]:not([class*=bd-])::-webkit-scrollbar {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .standardSidebarView-3F1I7i,
#app-mount .layer-3QrUeG[aria-label*=RTC] .standardSidebarView-3F1I7i {
  animation: modal 150ms cubic-bezier(0.175, 0.885, 0.32, 1.275);
  border-radius: var(--border-radius);
  background: var(--background);
  position: relative;
  overflow: hidden;
  box-shadow: var(--elevation-2);
  width: 100%;
  min-width: 960px;
  max-width: 960px;
  height: 65vh;
  max-height: 650px;
  min-height: 400px;
  padding-top: 50px;
  top: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .standardSidebarView-3F1I7i .settingsToolbar-wu4yfQ,
#app-mount .layer-3QrUeG[aria-label*=RTC] .standardSidebarView-3F1I7i .settingsToolbar-wu4yfQ {
  display: none;
}

@media only screen and (max-height: 650px) {
  #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .standardSidebarView-3F1I7i {
    min-height: 500px;
  }
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN {
  flex: unset;
  z-index: 10;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .sidebarRegionScroller-3MXcoP,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .sidebarRegionScroller-3MXcoP {
  flex: auto;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .sidebar-CFHs9e,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .sidebar-CFHs9e {
  padding: var(--spacing) 0;
  width: auto;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .header-2RyJ0Y,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .header-2RyJ0Y {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .separator-gCa7yv,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .separator-gCa7yv {
  margin: var(--spacing) 0;
  border-bottom: 1px solid var(--base-border);
  height: 1px;
  background: transparent;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .item-PXvHYJ,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .item-PXvHYJ {
  margin: calc(var(--spacing) / 3) var(--spacing-double);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  padding: var(--spacing);
  border-radius: var(--border-radius);
  color: var(--text-normal);
  line-height: normal;
  min-width: 165px;
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .item-PXvHYJ .badge-_BgAUQ,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .item-PXvHYJ .badge-_BgAUQ {
  background: rgb(var(--status-red));
  padding: 0 var(--spacing-half);
  border-radius: var(--button-border-radius);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  color: var(--white);
  text-transform: capitalize;
  display: flex;
  align-items: center;
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .item-PXvHYJ:hover, #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .item-PXvHYJ:active,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .item-PXvHYJ:hover,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .item-PXvHYJ:active {
  background-color: transparent;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .item-PXvHYJ.selected-3s45Ha,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .item-PXvHYJ.selected-3s45Ha {
  color: var(--white);
  background: rgb(var(--accent));
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .socialLinks-3jqNFy,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .socialLinks-3jqNFy {
  padding: calc(var(--spacing) / 3) var(--spacing-double);
  margin-bottom: calc(var(--spacing) / 3);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .info-1VyQPT,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .info-1VyQPT {
  padding: calc(var(--spacing) / 3) var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .sidebarRegion-VFTUkN .info-1VyQPT .colorMuted-HdFt4q:first-of-type:before,
#app-mount .layer-3QrUeG[aria-label*=RTC] .sidebarRegion-VFTUkN .info-1VyQPT .colorMuted-HdFt4q:first-of-type:before {
  content: var(--slate-version) " (" var(--slate-palette) ")";
  display: block;
}

#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy {
  flex: unset;
  flex-grow: 1;
  border-left: 1px solid var(--base-border);
  background: transparent;
  position: static;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy::before,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy::before {
  content: "Options";
  display: flex;
  align-items: center;
  border-bottom: 1px solid var(--base-border);
  width: 100%;
  height: 50px;
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  position: absolute;
  top: 0;
  left: 0;
  padding: var(--spacing-double);
  box-sizing: border-box;
  background: var(--background);
  z-index: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .contentColumnDefault-1VQkGM,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .contentColumnDefault-1VQkGM {
  padding: var(--spacing-double);
  flex-grow: 1;
  max-width: unset;
  min-width: unset;
  display: flex;
  flex-direction: column;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .contentColumnDefault-1VQkGM .container-1-STTv,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .contentColumnDefault-1VQkGM .container-1-STTv {
  flex-grow: 1;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledImage-3vynUz,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledImage-3vynUz {
  width: 520px;
  height: 200px;
  margin-bottom: calc(var(--spacing) * 5);
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/3.svg") center/contain no-repeat;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
  display: flex;
  align-items: center;
  text-transform: none;
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:hover,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:hover {
  border: 1px solid currentColor;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:hover .contents-18-Yxp,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:hover .contents-18-Yxp {
  background-image: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:focus,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .toolsContainer-1edPuj,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .toolsContainer-1edPuj {
  padding-top: 0;
  width: auto;
  height: 50px;
  top: 0;
  display: flex;
  align-items: center;
  position: absolute;
  margin: 0;
  right: calc(var(--spacing) * 1.5);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N {
  position: relative;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR {
  border: none;
  width: 16px;
  height: 16px;
  flex: none;
  border-radius: 0;
  transform: none;
  background: transparent;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg {
  fill: transparent;
  background: var(--text-muted);
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/12px no-repeat;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg g,
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg path,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg g,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg path {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg:hover,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR svg:hover {
  background: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR::after,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N .closeButton-1tv5uR::after {
  content: "";
  position: fixed;
  top: 0;
  left: 0;
  width: 100vw;
  height: 100vw;
  z-index: -1;
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .tools-3-3s-N .keybind-KpFkfr,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .tools-3-3s-N .keybind-KpFkfr {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .note-1V3kyJ,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .note-1V3kyJ {
  margin-bottom: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy h2,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy h2 {
  font-weight: var(--font-weight-semibold);
  font-size: var(--font-size-md);
  color: var(--text-normal);
  margin-bottom: var(--spacing);
  line-height: unset;
  text-transform: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .marginBottom40-2vIwTv h5 + .children-rWhLdy .marginTop8-1DLZ1n.flex-1xMQg5:first-child,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .marginBottom40-2vIwTv h5 + .children-rWhLdy .marginTop8-1DLZ1n.flex-1xMQg5:first-child {
  margin-top: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .title-31JmR4,
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .h3-3PDeKG,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .title-31JmR4,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .h3-3PDeKG {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy h5,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy h5 {
  font-weight: var(--font-weight-semibold);
  font-size: var(--font-size-md);
  margin-bottom: var(--spacing);
  line-height: unset;
  text-transform: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy h5:not(.isEnabled-24g9qA),
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy h5:not(.isEnabled-24g9qA) {
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .row-2okwlC,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .row-2okwlC {
  box-shadow: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .control-2BBjec,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .control-2BBjec {
  margin: 0;
  order: -1;
  margin-right: var(--spacing-half) !important;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .description-3_Ncsb,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .description-3_Ncsb {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: 1.5;
  color: var(--text-muted);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .subText-2Zhkkh,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .subText-2Zhkkh {
  color: var(--text-muted);
  font-size: var(--font-size);
  margin-top: var(--spacing-third);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .titleDefault-a8-ZSr,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .titleDefault-a8-ZSr {
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .switchItem-2hKKKK,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .switchItem-2hKKKK {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .switchItem-2hKKKK .description-3_Ncsb,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .switchItem-2hKKKK .description-3_Ncsb {
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .marginTop40-i-78cZ,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .marginTop40-i-78cZ {
  margin-top: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .faded-3bns_w,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .faded-3bns_w {
  opacity: 1;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .beta-3smTDE,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .beta-3smTDE {
  vertical-align: middle;
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  display: inline-block;
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .children-rWhLdy > .marginBottom40-2vIwTv,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .children-rWhLdy > .marginBottom40-2vIwTv {
  margin-bottom: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .children-rWhLdy > .marginBottom40-2vIwTv:last-child,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .children-rWhLdy > .marginBottom40-2vIwTv:last-child {
  margin-bottom: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .horizontal-2EEEnY > .flexChild-faoVW3:first-child,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .horizontal-2EEEnY > .flexChild-faoVW3:first-child {
  margin-left: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .horizontal-2EEEnY > .flexChild-faoVW3:last-child,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .horizontal-2EEEnY > .flexChild-faoVW3:last-child {
  margin-right: 0;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .divider-3573oO,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .divider-3573oO {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .divider-3wNib3,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .divider-3wNib3 {
  margin: 0;
  padding: 0;
  border: none;
  margin-top: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .formNotice-2_hHWR .default-3nhoK-,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .formNotice-2_hHWR .default-3nhoK- {
  font-size: var(--font-size);
  color: var(--text-muted);
}
#app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .formNotice-2_hHWR h5,
#app-mount .layer-3QrUeG[aria-label*=RTC] .contentRegion-3nDuYy .formNotice-2_hHWR h5 {
  margin-bottom: var(--spacing-third);
  color: var(--text-normal);
  font-size: var(--font-size);
}

#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] #user-settings > div > div.contentRegion-3nDuYy > div > div > main > div > div > div:nth-child(1) > h5,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] #user-settings > div > div.contentRegion-3nDuYy > div > div > main > div > div > div:nth-child(2) > h5 {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .card-3Qj_Yx.cardWarning-2yPNAa .icon-4lJsMQ {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .card-3Qj_Yx.cardWarning-2yPNAa .flexChild-faoVW3:last-child {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to {
  background: transparent !important;
  border: none !important;
  padding: 0;
  box-shadow: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to .flexChild-faoVW3:first-child {
  margin-right: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to .flexChild-faoVW3:first-child .wrapper-3t9DeA {
  width: 34px !important;
  height: 34px !important;
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  box-shadow: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to .flexChild-faoVW3:first-child .wrapper-3t9DeA img {
  clip-path: none;
  -webkit-clip-path: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to h5 {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to .marginBottom20-32qID7 {
  margin-bottom: 0 !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to .marginBottom20-32qID7 + div .viewBody-2Qz-jg {
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  font-style: italic;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to .viewBody-2Qz-jg {
  pointer-events: none;
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsAccount-2eMFVR .cardPrimary-1Hv-to .viewBody-2Qz-jg span {
  opacity: 1 !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoViewing-16kqK3 .flexChild-faoVW3[style="flex: 0 1 auto;"] {
  margin-left: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoViewingButton-2-jbH9 {
  top: 0;
  right: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF {
  margin-top: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF h5 {
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF .children-rWhLdy .flexChild-faoVW3 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF .children-rWhLdy .flexChild-faoVW3 > div {
  display: flex;
  align-items: center;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF .children-rWhLdy .flexChild-faoVW3 > div .colorStandard-2KCXvj {
  margin: 0;
  flex-grow: 1;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF .children-rWhLdy .flexChild-faoVW3 + .flex-1xMQg5 {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF .children-rWhLdy .flexChild-faoVW3:only-child > div {
  flex-direction: column;
  align-items: flex-start;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF .children-rWhLdy .flexChild-faoVW3:only-child > div button {
  margin: var(--spacing) var(--spacing) 0 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsSecurity-3IYeMF .children-rWhLdy .lookLink-9FtZy-.colorPrimary-3b3xI6 {
  margin-left: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT {
  margin-bottom: 0;
  box-shadow: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT h5 {
  font-size: var(--font-size) !important;
  margin-bottom: var(--spacing-half) !important;
  font-weight: var(--font-weight-normal) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .required-7sPBq3 {
  margin-left: var(--spacing-third);
  color: rgb(var(--status-red));
  padding: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .questionMark-CWEQZn {
  width: var(--input-height);
  height: var(--input-height);
  margin-left: var(--spacing);
  margin-right: 0;
  color: var(--white);
  background-color: rgb(var(--accent));
  border-radius: var(--button-border-radius);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .questionMark-CWEQZn svg {
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .questionMark-CWEQZn svg path {
  d: path("M8 1.5a6.5 6.5 0 100 13 6.5 6.5 0 000-13zM0 8a8 8 0 1116 0A8 8 0 010 8zm9 3a1 1 0 11-2 0 1 1 0 012 0zM6.92 6.085c.081-.16.19-.299.34-.398.145-.097.371-.187.74-.187.28 0 .553.087.738.225A.613.613 0 019 6.25c0 .177-.04.264-.077.318a.956.956 0 01-.277.245c-.076.051-.158.1-.258.161l-.007.004a7.728 7.728 0 00-.313.195 2.416 2.416 0 00-.692.661.75.75 0 001.248.832.956.956 0 01.276-.245 6.3 6.3 0 01.26-.16l.006-.004c.093-.057.204-.123.313-.195.222-.149.487-.355.692-.662.214-.32.329-.702.329-1.15 0-.76-.36-1.348-.863-1.725A2.76 2.76 0 008 4c-.631 0-1.155.16-1.572.438-.413.276-.68.638-.849.977a.75.75 0 101.342.67z");
  transform-origin: center;
  transform: translate(-3px) scale(0.9);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .questionMark-CWEQZn:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .questionMark-CWEQZn:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .justifyEnd-2E6vba {
  margin-top: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .justifyEnd-2E6vba .flex-1xMQg5,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .justifyEnd-2E6vba .flexChild-faoVW3 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .justifyEnd-2E6vba .flex-1xMQg5:first-child button,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .justifyEnd-2E6vba .flexChild-faoVW3:first-child button {
  margin-right: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .avatarColumn-VWwg1S {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .avatarColumn-VWwg1S + .flexChild-faoVW3 {
  display: flex;
  flex-wrap: wrap;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .avatarColumn-VWwg1S + .flexChild-faoVW3 .marginBottom20-32qID7 {
  width: 100%;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .avatarColumn-VWwg1S + .flexChild-faoVW3 .marginBottom20-32qID7 + div:not(.marginTop20-3TxNs6):not(.marginBottom20-32qID7) {
  flex-grow: 1;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userInfoEditing-1CEzdT .avatarColumn-VWwg1S + .flexChild-faoVW3 .marginTop20-3TxNs6 {
  margin-top: 0;
  margin-left: var(--spacing);
  display: flex;
  align-items: flex-end;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .children-rWhLdy > .marginBottom20-32qID7.marginTop8-1DLZ1n.flex-1xMQg5 {
  margin-bottom: 0 !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .headerInfo-30WFqE {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .headerInfo-30WFqE .size14-e6ZScH {
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .appAvatar-3bgkQ9 {
  border-radius: var(--border-radius);
  height: var(--avatar-size);
  width: var(--avatar-size);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .faded-3bns_w {
  margin-bottom: var(--spacing-half) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .permission-1gtoyP {
  margin-top: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .permissionCheckmark-1SeKr2 {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .marginTop20-3TxNs6 {
  margin-top: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .marginBottom20-32qID7 {
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .permission-1gtoyP {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .authedApp-mj2Hmd .size14-e6ZScH {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-muted);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .accountBtn-2Nozo3 {
  width: 33px;
  margin: 0 var(--spacing) 0 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .accountBtn-2Nozo3 button {
  border-radius: 0;
  width: 100%;
  padding: 0;
  height: 33px;
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  background-color: var(--settings-button);
  background-size: 20px;
  background-position: center;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .accountBtn-2Nozo3 button:hover {
  background-color: var(--settings-button-hover);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connection-1fbD7X {
  background: var(--background-alt) !important;
  box-shadow: none !important;
  box-sizing: border-box;
  border: 1px solid var(--base-border) !important;
  margin-bottom: var(--spacing);
  border-radius: var(--border-radius);
  padding: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connection-1fbD7X .connectionAccountValue-3VdBGs {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connection-1fbD7X .connectionAccountLabel-1DiK0A {
  opacity: 1;
  font-weight: var(--font-weight-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connection-1fbD7X .connectionIcon-2ElzVe {
  height: var(--avatar-size);
  width: var(--avatar-size);
  border-radius: var(--border-radius);
  padding: var(--spacing-third);
  border: 1px solid var(--base-border);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connection-1fbD7X .description-3_Ncsb {
  color: var(--text-muted) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connection-1fbD7X .flexChild-faoVW3 {
  margin-left: 0 !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connection-1fbD7X .flexChild-faoVW3[style*=background] {
  background: transparent !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .subEnabledTitle-2ElRo_ {
  color: var(--text-normal) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .integration-3kMeY4 {
  background: var(--background-dark);
  border: 1px solid var(--base-border);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .integrationName-2tSCoY {
  color: var(--text-focus);
  font-weight: var(--font-weight-semibold);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .channelLink-2TxEu3 {
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionHeader-2MDqhu {
  margin-bottom: var(--spacing);
  padding: 0;
  background: transparent;
  border: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionDelete-2Odoln {
  top: 0;
  right: 0;
  width: 16px;
  height: 16px;
  border: none;
  background: var(--text-muted);
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/contain no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionDelete-2Odoln:before, #app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionDelete-2Odoln:after {
  content: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionDelete-2Odoln:hover, #app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionDelete-2Odoln:active {
  background: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionOptionsWrapper-3KIj1Z {
  padding: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .subEnabledTitle-2ElRo_ {
  font-size: var(--font-size);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionOptionSwitch-3KNn-E {
  padding: 0;
  margin-bottom: 0 !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionAccountValue-3VdBGs,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .connectionAccountLabel-1DiK0A {
  margin-left: var(--spacing) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .divider-3573oO {
  margin-left: 0;
  margin-right: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .integrationsWrapper-VkM_zO {
  padding: var(--spacing) 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .lockIcon-1UaIyp {
  margin-right: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .codeRedemptionRedirect-1wVR4b {
  font-size: 12px;
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
  margin-top: var(--spacing-double);
  background: var(--background-alt);
  border: 1px solid var(--base-border);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .footer-TVTShO {
  margin-top: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .footer-TVTShO .colorStandard-2KCXvj {
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro {
  margin-top: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A {
  background: var(--background-alt);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .bottomDivider-1K9Gao {
  border-color: var(--base-border);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .scrollerBase-289Jih {
  border: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .paginator-166-09 {
  background: var(--background-alt);
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq {
  transition: none;
  border: none;
  background: transparent;
  height: auto;
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq:hover {
  background: var(--background-modifier-hover);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq:active {
  background: var(--background-modifier-active);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .summaryInfo-2QFKUg {
  height: var(--item-height);
  color: var(--text-normal);
  border: none;
  padding: 0 var(--spacing);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .summaryInfo-2QFKUg .description-RQzS-K {
  margin-right: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .summaryInfo-2QFKUg .gameIcon-gg34Dz {
  border-radius: var(--border-radius);
  height: var(--avatar-size-xsm);
  width: var(--avatar-size-xsm);
  color: var(--text-normal);
  margin-right: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .summaryInfo-2QFKUg .expand-1g95ZR {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd {
  background: var(--background);
  border: 1px solid var(--base-border);
  padding: var(--spacing);
  border-radius: var(--border-radius);
  margin: var(--spacing);
  margin-top: var(--spacing-double);
  position: relative;
  bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentBreakdown-28CAO8 {
  padding: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentBreakdown-28CAO8 .cardIconSmall-2gJ6xX {
  box-shadow: none;
  border-radius: var(--border-radius);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentText-2vaF7U {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentText-2vaF7U strong {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentDetail-aFXa-m:first-child,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentDetail-aFXa-m:last-child {
  margin-top: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .refundSubHeader-3hp-GM {
  margin: var(--spacing) 0;
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  text-transform: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .refundCriteriaIcon-Ta3gtw {
  margin-right: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentHeader-3QlZQi {
  padding: 0;
  border: none;
  margin: var(--spacing) 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .payment-xT17Mq .expandedInfo-3kfShd .paymentHeader-3QlZQi:first-child {
  margin-top: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .paymentRowHeader-2sfDdN {
  margin: 0;
  height: auto;
  padding: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .paymentRowHeader-2sfDdN .paymentRowHeaderDescription-4bm8wL {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA {
  padding: var(--spacing);
  border-top: 1px solid var(--base-border);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonNext-V2kUq0,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonPrev-1Y-47D {
  padding: var(--spacing-half);
  height: var(--input-height);
  width: var(--input-height);
  box-sizing: border-box;
  border: 1px solid var(--base-border);
  color: var(--text-muted);
  box-sizing: border-box;
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonNext-V2kUq0.disabled-BrLY9Y,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonPrev-1Y-47D.disabled-BrLY9Y {
  cursor: not-allowed;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonNext-V2kUq0.pageButtonNext-V2kUq0,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonPrev-1Y-47D.pageButtonNext-V2kUq0 {
  border-radius: 0 var(--border-radius) var(--border-radius) 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonNext-V2kUq0.pageButtonPrev-1Y-47D,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageButtonPrev-1Y-47D.pageButtonPrev-1Y-47D {
  border-radius: var(--border-radius) 0 0 var(--border-radius);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .paymentHistory-2FXzro .paymentPane-3bwJ6A .pageActions-1SVAnA .pageIndicator-1gAbyA {
  padding: 0 var(--spacing-half);
  height: var(--input-height);
  border-color: var(--base-border);
  font-size: var(--font-size);
  font-weight: var(--font-weight);
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] main > div h2 + .children-rWhLdy form {
  margin-bottom: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .emptyStateImage-2MrSNs {
  margin: 0;
  margin-top: calc(var(--spacing) * 4);
  width: 144px;
  height: 144px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
          mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .emptyStateHeader-248f_b {
  margin-top: var(--spacing-double);
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .emptyStateSubtext-2hdA9c {
  font-size: var(--font-size);
  color: var(--text-muted);
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .codeRedemptionInput-3JOJea {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .micTest-2C-tpt button {
  margin-left: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .micTest-2C-tpt .container-3PXSwK {
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  box-sizing: border-box;
  background: var(--background-alt);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .micTest-2C-tpt .container-3PXSwK[style*="background: linear"] {
  background: var(--accent-solid) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .micTest-2C-tpt .wrapper-3Z-vWm {
  height: var(--input-height);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .micTest-2C-tpt .wrapper-3Z-vWm .progress-1IcQ3A {
  background: var(--background-alt);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .micTest-2C-tpt .notches-1sAcEM {
  background: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .micTest-2C-tpt .micTestCaption-2xsa4I {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .previewOverlay-2O7_KC {
  background: var(--background-alt);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  flex-direction: column;
  align-items: center;
  justify-content: center;
  padding: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .previewOverlay-2O7_KC button {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .previewOverlay-2O7_KC img {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .previewOverlay-2O7_KC .flex-1xMQg5 {
  flex: 0 !important;
  position: relative;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .children-rWhLdy .flex-1xMQg5 button + button {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .children-rWhLdy > .marginBottom40-2vIwTv:nth-last-child(2) {
  margin-bottom: var(--spacing) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .userSettingsVoice-iwdUCU .formNotice-2_hHWR {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2.card-3Qj_Yx {
  background: var(--background);
  border-color: var(--base-border);
  padding: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2.card-3Qj_Yx .header-23xsNx {
  margin-bottom: 0 !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ + .marginTop40-i-78cZ {
  position: relative;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ + .marginTop40-i-78cZ h5 {
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ + .marginTop40-i-78cZ h5::before {
  content: "Get more palettes at https://slate-theme.netlify.app/palettes";
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  margin-top: calc((var(--spacing) + 50px) - var(--spacing-double));
  margin-bottom: var(--spacing-double);
  display: block;
  cursor: default;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ + .marginTop40-i-78cZ::after {
  content: "";
  top: calc(var(--spacing) * -1 - 5px);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  left: 0;
  position: absolute;
  width: 300px;
  height: 50px;
  background: linear-gradient(90deg, var(--accent-solid) 25%, var(--text-normal) 25%, var(--text-normal) 50%, var(--background-dark) 50%, var(--background-dark) 75%, var(--background) 75%);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ::after {
  content: "Palette - " var(--slate-palette);
  color: var(--text-normal);
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
  margin-top: var(--spacing);
  display: block;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ h5 {
  display: block !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr {
  display: flex;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx {
  border: none;
  padding: 0 !important;
  background: transparent !important;
  margin-right: var(--spacing-double);
  display: flex;
  flex-direction: column;
  align-items: center;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx .checkboxWrapper-SkhIWG {
  position: static;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx .info-3LOr12 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx .info-3LOr12 .title-3BE6m5 {
  font-weight: var(--font-weight-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx .info-3LOr12 .title-3BE6m5.titleChecked-2wg0pd {
  color: var(--text-normal) !important;
  margin-top: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx[style*="rgb(114, 137, 218)"]::before {
  border: 1px solid var(--accent-solid) !important;
  box-shadow: 0 0 0 3px rgba(var(--accent), 0.25);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx label::after {
  content: "";
  position: absolute;
  top: 0;
  left: 0;
  width: 100px;
  height: 72px;
  transform: scale(0.65);
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-2);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx::before {
  content: "";
  width: 100px;
  height: 72px;
  display: flex;
  background-color: var(--background-alt);
  background-image: url("https://discordstyles.github.io/Slate/assets/illustrations/2.svg");
  background-size: 125%;
  background-position: bottom;
  background-repeat: no-repeat;
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  box-sizing: border-box;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx:first-child label::after {
  background: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0naHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmcnIHhtbG5zOnhsaW5rPSdodHRwOi8vd3d3LnczLm9yZy8xOTk5L3hsaW5rJyB3aWR0aD0nMjYuNDU4M21tJyBoZWlnaHQ9JzE5LjA1bW0nIHZlcnNpb249JzEuMicgYmFzZVByb2ZpbGU9J3RpbnknPjxnIHhtbG5zPSdodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZycgZmlsbD0nbm9uZScgc3Ryb2tlPSdibGFjaycgc3Ryb2tlLXdpZHRoPScxJyBmaWxsLXJ1bGU9J2V2ZW5vZGQnIHN0cm9rZS1saW5lY2FwPSdzcXVhcmUnIHN0cm9rZS1saW5lam9pbj0nYmV2ZWwnPjxnIGZpbGw9JyMyNDI5MmUnIGZpbGwtb3BhY2l0eT0nMScgc3Ryb2tlPSdub25lJyB0cmFuc2Zvcm09J21hdHJpeCgxLDAsMCwxLDAsMCknPjxwYXRoIHZlY3Rvci1lZmZlY3Q9J25vbmUnIGZpbGwtcnVsZT0nZXZlbm9kZCcgZD0nTTMsMCBMOTcsMCBDOTguNjU2OSwwIDEwMCwxLjM0MzE1IDEwMCwzIEwxMDAsNjkgQzEwMCw3MC42NTY5IDk4LjY1NjksNzIgOTcsNzIgTDMsNzIgQzEuMzQzMTUsNzIgMCw3MC42NTY5IDAsNjkgTDAsMyBDMCwxLjM0MzE1IDEuMzQzMTUsMCAzLDAgJy8+PC9nPjxnIGZpbGw9JyMxZDIxMjUnIGZpbGwtb3BhY2l0eT0nMScgc3Ryb2tlPSdub25lJyB0cmFuc2Zvcm09J21hdHJpeCgxLDAsMCwxLDAsMCknPjxwYXRoIHZlY3Rvci1lZmZlY3Q9J25vbmUnIGZpbGwtcnVsZT0nZXZlbm9kZCcgZD0nTTAsMCBMMTAwLDAgTDEwMCwxNSBMMCwxNSBMMCwwJy8+PC9nPjxnIGZpbGw9JyMyNDI5MmUnIGZpbGwtb3BhY2l0eT0nMScgc3Ryb2tlPSdub25lJyB0cmFuc2Zvcm09J21hdHJpeCgxLDAsMCwxLDAsMCknPjxwYXRoIHZlY3Rvci1lZmZlY3Q9J25vbmUnIGZpbGwtcnVsZT0nZXZlbm9kZCcgZD0nTTAsMTUgTDI1LDE1IEwyNSw4NyBMMCw4NyBMMCwxNScvPjwvZz48ZyBmaWxsPScjMmEzMDM2JyBmaWxsLW9wYWNpdHk9JzEnIHN0cm9rZT0nbm9uZScgdHJhbnNmb3JtPSdtYXRyaXgoMSwwLDAsMSwwLDApJz48cGF0aCB2ZWN0b3ItZWZmZWN0PSdub25lJyBmaWxsLXJ1bGU9J2V2ZW5vZGQnIGQ9J00yNSwxNSBMMTAwLDE1IEwxMDAsODcgTDI1LDg3IEwyNSwxNScvPjwvZz48L2c+PC9zdmc+") center/cover no-repeat;
  border: 1px solid #141414;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx:last-child label::after {
  background: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0naHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmcnIHhtbG5zOnhsaW5rPSdodHRwOi8vd3d3LnczLm9yZy8xOTk5L3hsaW5rJyB3aWR0aD0nMjYuNDU4M21tJyBoZWlnaHQ9JzE5LjA1bW0nIHZlcnNpb249JzEuMicgYmFzZVByb2ZpbGU9J3RpbnknIHN0eWxlPScgYm9yZGVyLXJhZGl1czogMnB4Oyc+PGcgeG1sbnM9J2h0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnJyBmaWxsPSdub25lJyBzdHJva2U9J2JsYWNrJyBzdHJva2Utd2lkdGg9JzEnIGZpbGwtcnVsZT0nZXZlbm9kZCcgc3Ryb2tlLWxpbmVjYXA9J3NxdWFyZScgc3Ryb2tlLWxpbmVqb2luPSdiZXZlbCc+PGcgZmlsbD0nI2ZmZmZmZicgZmlsbC1vcGFjaXR5PScxJyBzdHJva2U9J25vbmUnIHRyYW5zZm9ybT0nbWF0cml4KDEsMCwwLDEsMCwwKSc+PHBhdGggdmVjdG9yLWVmZmVjdD0nbm9uZScgZmlsbC1ydWxlPSdldmVub2RkJyBkPSdNMywwIEw5NywwIEM5OC42NTY5LDAgMTAwLDEuMzQzMTUgMTAwLDMgTDEwMCw2OSBDMTAwLDcwLjY1NjkgOTguNjU2OSw3MiA5Nyw3MiBMMyw3MiBDMS4zNDMxNSw3MiAwLDcwLjY1NjkgMCw2OSBMMCwzIEMwLDEuMzQzMTUgMS4zNDMxNSwwIDMsMCAnLz48L2c+PGcgZmlsbD0nIzFkMjEyNScgZmlsbC1vcGFjaXR5PScxJyBzdHJva2U9J25vbmUnIHRyYW5zZm9ybT0nbWF0cml4KDEsMCwwLDEsMCwwKSc+PHBhdGggdmVjdG9yLWVmZmVjdD0nbm9uZScgZmlsbC1ydWxlPSdldmVub2RkJyBkPSdNMCwwIEwxMDAsMCBMMTAwLDE1IEwwLDE1IEwwLDAnLz48L2c+PGcgZmlsbD0nI2ZmZmZmZicgZmlsbC1vcGFjaXR5PScxJyBzdHJva2U9J25vbmUnIHRyYW5zZm9ybT0nbWF0cml4KDEsMCwwLDEsMCwwKScgc3R5bGU9JyYjMTA7IGZpbGw6IGhzbCgyMTAgMjklIDk1JSAvIDEpOyYjMTA7Jz48cGF0aCB2ZWN0b3ItZWZmZWN0PSdub25lJyBmaWxsLXJ1bGU9J2V2ZW5vZGQnIGQ9J00wLDE1IEwyNSwxNSBMMjUsODcgTDAsODcgTDAsMTUnLz48L2c+PGcgZmlsbD0nI2Y2ZjhmYScgZmlsbC1vcGFjaXR5PScxJyBzdHJva2U9J25vbmUnIHRyYW5zZm9ybT0nbWF0cml4KDEsMCwwLDEsMCwwKScgc3R5bGU9JyYjMTA7IGZpbGw6IGhzbCgyMTAgMjklIDkwJSAvIDEpOyYjMTA7Jz48cGF0aCB2ZWN0b3ItZWZmZWN0PSdub25lJyBmaWxsLXJ1bGU9J2V2ZW5vZGQnIGQ9J00yNSwxNSBMMTAwLDE1IEwxMDAsODcgTDI1LDg3IEwyNSwxNScvPjwvZz48L2c+PC9zdmc+") center/cover no-repeat;
  border: 1px solid #141414;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ + .marginTop40-i-78cZ + h2 + .switchItem-2hKKKK {
  margin-bottom: var(--spacing-double) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 ~ .marginTop60-3PGbtK {
  margin-top: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .notificationsSound-27jFSh {
  padding: 0;
  margin-bottom: var(--spacing-half);
  box-shadow: none;
  justify-content: flex-start;
  flex-grow: 0;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .notificationsSound-27jFSh .soundLabel-wUmcnl {
  transform: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .notificationsSound-27jFSh .soundLabel-wUmcnl .icon-GiGwrE {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .notificationsSound-27jFSh .container-3auIfb {
  order: -1;
  margin-right: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .notificationsSound-27jFSh:hover .icon-GiGwrE {
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .notificationsSound-27jFSh:last-child {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .soundLabel-wUmcnl {
  transform: translateX(-24px);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .sound-2QlACh {
  font-size: var(--font-size);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .children-rWhLdy .marginBottom20-32qID7[style="flex: 1 1 auto;"] {
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .children-rWhLdy .marginBottom20-32qID7[style="flex: 1 1 auto;"] + .marginBottom20-32qID7[style="flex: 1 1 auto;"] + .marginBottom40-2vIwTv[style="flex: 1 1 auto;"] + div + div {
  margin: var(--spacing-double) 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .card-FDVird:before {
  content: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .ghostPill-2-KUPM {
  color: var(--text-normal);
  border-radius: var(--border-radius);
  padding: var(--spacing);
  font-size: var(--font-size);
  font-weight: var(--font-weight-noraml);
  line-height: normal;
  margin: 0;
  background-color: rgba(var(--status-yellow), 0.25);
  border: 1px solid rgba(var(--status-yellow), 0.5);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .ghostPill-2-KUPM + .flexChild-faoVW3 {
  display: flex;
  align-items: center;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .keybindGroup-JQs9x_ {
  margin: 0;
  padding: var(--spacing);
  background: var(--background-alt);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  margin-bottom: var(--spacing);
  border-radius: var(--border-radius);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .keybindGroup-JQs9x_ .flex-1xMQg5.marginBottom8-AtZOdT {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .keybindGroup-JQs9x_ .keybindMessage-20JT9A {
  margin-top: var(--spacing);
  color: rgb(var(--status-red)) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .keybindGroup-JQs9x_ .removeKeybind-39dSFj {
  top: 0;
  right: 0;
  z-index: 10;
  margin: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .game-1ipmAa {
  box-shadow: none;
  padding: var(--spacing);
  background: var(--background-alt);
  border: 1px solid var(--base-border);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .game-1ipmAa .gameNameInput-385LoS {
  margin: 0;
  padding: 0;
  border: none;
  background: transparent;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .game-1ipmAa .button-2CgfFz {
  top: -10px;
  right: -10px;
  background: var(--background-alt) !important;
  border: 1px solid var(--base-border);
  -webkit-mask: none;
  border-radius: 50px;
  width: 20px;
  height: 20px;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .game-1ipmAa .button-2CgfFz::after {
  content: "";
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background: var(--text-muted);
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/10px no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .game-1ipmAa .button-2CgfFz:hover::after {
  background: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .gameName-1RiWHm {
  margin-bottom: var(--spacing-third);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  font-size: var(--font-size);
  margin: 0;
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayStatusText-L2IACa,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .nowPlayingAdd-1Kdmh_ {
  font-weight: var(--font-weight-normal);
  color: var(--text-muted);
  font-size: var(--font-size);
  text-transform: none;
  width: auto;
  margin-right: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .nowPlayingAdd-1Kdmh_ {
  color: var(--text-normal);
  margin-bottom: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .nowPlayingAdd-1Kdmh_ span {
  margin-right: var(--spacing-third);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .gameVerifiedIcon-2dGGa5 {
  width: 14px !important;
  height: 14px !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .lastPlayed-3bQ7Bo {
  font-size: var(--font-size-sm);
  color: var(--text-muted);
  line-height: normal;
  order: -1;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .activeGame-14JI7o {
  border-radius: var(--border-radius);
  padding: var(--spacing);
  flex-direction: column;
  align-items: flex-start;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .activeGame-14JI7o.notDetected-33MY4s {
  background-color: rgba(var(--status-grey), 0.25);
  border: 1px solid rgba(var(--status-grey), 0.5);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .activeGame-14JI7o.nowPlaying-284llR {
  background-color: rgba(var(--status-green), 0.25);
  border: 1px solid rgba(var(--status-green), 0.5);
  margin-bottom: calc(14px + var(--spacing-double));
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .activeGame-14JI7o .gameNameInput-385LoS {
  margin: 0;
  padding: 0;
  border: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .activeGame-14JI7o .button-2CgfFz {
  top: var(--spacing-half);
  right: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .activeGame-14JI7o .gameNameLastPlayed-3LJo8n + .flex-1O1GKY {
  position: absolute;
  bottom: 0;
  left: 0;
  transform: translateY(calc(100% + var(--spacing)));
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .activeGame-14JI7o .gameNameLastPlayed-3LJo8n + .flex-1O1GKY .overlayToggleIcon-2liB3r {
  order: -1;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayStatusText-L2IACa {
  margin: 0 var(--spacing-half);
  position: relative;
  top: 0.5px;
  opacity: 1;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayToggleIcon-2liB3r {
  -webkit-appearance: checkbox;
     -moz-appearance: checkbox;
          appearance: checkbox;
  width: 14px;
  height: 14px;
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayToggleIcon-2liB3r svg {
  width: 100%;
  height: 100%;
  border-radius: 3px;
  box-shadow: inset 0 0 0 1px #767676;
  background: #fff;
  box-sizing: border-box;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayToggleIcon-2liB3r svg path, #app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayToggleIcon-2liB3r svg g {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayToggleIcon-2liB3r svg.overlayToggleIconOn-3UNmty {
  box-shadow: none;
  background: #0075ff url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" id="Capa_1" x="0px" y="0px" width="97.619px" height="97.618px" viewBox="0 0 97.619 97.618" style="enable-background:new 0 0 97.619 97.618;" xml:space="preserve"><g><path fill="white" d="M96.939,17.358L83.968,5.959c-0.398-0.352-0.927-0.531-1.449-0.494C81.99,5.5,81.496,5.743,81.146,6.142L34.1,59.688 L17.372,37.547c-0.319-0.422-0.794-0.701-1.319-0.773c-0.524-0.078-1.059,0.064-1.481,0.385L0.794,47.567 c-0.881,0.666-1.056,1.92-0.39,2.801l30.974,40.996c0.362,0.479,0.922,0.771,1.522,0.793c0.024,0,0.049,0,0.073,0 c0.574,0,1.122-0.246,1.503-0.68l62.644-71.297C97.85,19.351,97.769,18.086,96.939,17.358z"/></g></svg>') 2.35px 2px/10.35px no-repeat;
  border-radius: 2px;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayToggleIcon-2liB3r svg.overlayToggleIconOn-3UNmty:hover {
  background: #005cc8 url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" id="Capa_1" x="0px" y="0px" width="97.619px" height="97.618px" viewBox="0 0 97.619 97.618" style="enable-background:new 0 0 97.619 97.618;" xml:space="preserve"><g><path fill="white" d="M96.939,17.358L83.968,5.959c-0.398-0.352-0.927-0.531-1.449-0.494C81.99,5.5,81.496,5.743,81.146,6.142L34.1,59.688 L17.372,37.547c-0.319-0.422-0.794-0.701-1.319-0.773c-0.524-0.078-1.059,0.064-1.481,0.385L0.794,47.567 c-0.881,0.666-1.056,1.92-0.39,2.801l30.974,40.996c0.362,0.479,0.922,0.771,1.522,0.793c0.024,0,0.049,0,0.073,0 c0.574,0,1.122-0.246,1.503-0.68l62.644-71.297C97.85,19.351,97.769,18.086,96.939,17.358z"/></g></svg>') center/10.25px no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .overlayToggleIcon-2liB3r svg.overlayToggleIconOn-3UNmty:active {
  background: #3793ff url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" id="Capa_1" x="0px" y="0px" width="97.619px" height="97.618px" viewBox="0 0 97.619 97.618" style="enable-background:new 0 0 97.619 97.618;" xml:space="preserve"><g><path fill="white" d="M96.939,17.358L83.968,5.959c-0.398-0.352-0.927-0.531-1.449-0.494C81.99,5.5,81.496,5.743,81.146,6.142L34.1,59.688 L17.372,37.547c-0.319-0.422-0.794-0.701-1.319-0.773c-0.524-0.078-1.059,0.064-1.481,0.385L0.794,47.567 c-0.881,0.666-1.056,1.92-0.39,2.801l30.974,40.996c0.362,0.479,0.922,0.771,1.522,0.793c0.024,0,0.049,0,0.073,0 c0.574,0,1.122-0.246,1.503-0.68l62.644-71.297C97.85,19.351,97.769,18.086,96.939,17.358z"/></g></svg>') center/10.25px no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .wrapper-r-6rrt {
  width: auto;
  max-width: unset;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .wrapper-r-6rrt .image-1GzsFd {
  background: var(--text-muted) !important;
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
  width: 144px !important;
  height: 144px !important;
  margin: 0;
  margin-top: var(--spacing-triple);
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .wrapper-r-6rrt .text-GwUZgS, #app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .wrapper-r-6rrt .title-2BxgL2 {
  font-size: var(--font-size);
  font-weight: var(--font-weight);
  text-transform: none;
  color: var(--text-muted);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .marginBottom20-32qID7.marginTop8-1DLZ1n + .flex-1xMQg5.marginBottom40-2vIwTv + h5 + .marginTop8-1DLZ1n.marginBottom40-2vIwTv {
  margin-top: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .marginBottom20-32qID7.marginTop8-1DLZ1n + .flex-1xMQg5.marginBottom40-2vIwTv + h5 + .marginTop8-1DLZ1n.marginBottom40-2vIwTv + h5 + .marginBottom20-32qID7.marginTop8-1DLZ1n {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .marginBottom20-32qID7.marginTop8-1DLZ1n + .flex-1xMQg5.marginBottom40-2vIwTv + h5 + .marginTop8-1DLZ1n.marginBottom40-2vIwTv + h5 + .marginBottom20-32qID7.marginTop8-1DLZ1n + .marginTop8-1DLZ1n.marginBottom20-32qID7 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .marginBottom20-32qID7.marginTop8-1DLZ1n + .flex-1xMQg5.marginBottom40-2vIwTv + h5 + .marginTop8-1DLZ1n.marginBottom40-2vIwTv + h5 + .marginBottom20-32qID7.marginTop8-1DLZ1n + .marginTop8-1DLZ1n.marginBottom20-32qID7 + .marginBottom40-2vIwTv + .marginBottom40-2vIwTv + .marginBottom40-2vIwTv {
  margin-top: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF {
  padding: var(--spacing);
  padding-left: calc(27px + var(--spacing-double));
  box-shadow: none;
  border-radius: 0;
  margin: 0;
  border: 1px solid var(--base-border);
  border-top: none;
  cursor: var(--cursor);
  flex-direction: column;
  justify-content: center;
  align-items: flex-start;
  background: transparent;
  position: relative;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF .input-3ITkQf {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF .image-z8whH4 {
  position: absolute;
  left: 0;
  top: 50%;
  transform: translateY(-50%);
  margin: 0;
  margin-left: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF .checkbox-1ix_J3 {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF .flex-1xMQg5 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF .label-cywgfr {
  padding: 0;
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  line-height: var(--line-height) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF .label-cywgfr .labelText-2kBs7x {
  line-height: inherit;
  color: inherit;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF:first-child {
  border-radius: var(--border-radius) var(--border-radius) 0 0;
  border-top: 1px solid var(--base-border);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF:last-child {
  border-top: none;
  border-radius: 0 0 var(--border-radius) var(--border-radius);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF:hover {
  background: transparent;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF:hover .description-3_Ncsb {
  color: var(--text-normal) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF:active {
  background: transparent;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF.selected-2DeaDa {
  background: var(--accent-solid) !important;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF.selected-2DeaDa .labelText-2kBs7x,
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-3eFBNF.selected-2DeaDa .description-3_Ncsb {
  color: var(--white) !important;
}

html.theme-light #app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .preview-2nSL_2 + .marginTop40-i-78cZ .radioGroup-1GBvlr .item-26Dhrx::before {
  background-color: var(--background-dark);
}
html.theme-light .connectionIcon-2ElzVe {
  filter: invert(1);
}

#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .contentColumnMinimal-2iX-kP {
  max-width: unset;
  min-width: 100%;
  padding: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .radioGroup-1GBvlr {
  margin-bottom: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .marginBottom20-32qID7.description-3_Ncsb {
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .noticeRegion-1YviSH {
  left: unset;
  right: 0;
  max-width: unset;
  width: calc(100% - 205px);
  padding: 0 var(--spacing-double) var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .noticeRegion-1YviSH .container-2VW0UT {
  box-sizing: border-box;
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-1);
  background: var(--background) !important;
  border: 1px solid var(--base-border);
  padding: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .noticeRegion-1YviSH .container-2VW0UT .message-c9-HCF {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal) !important;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .children-rWhLdy .marginBottom40-2vIwTv.flex-1xMQg5[style] + .divider-3wNib3 + .divider-3wNib3:nth-child(3) .select-2TCrqx + .colorStandard-2KCXvj + .marginTop20-3TxNs6 + .marginTop20-3TxNs6 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .children-rWhLdy .flex-1xMQg5[style*="flex: 1 1 50%"],
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .children-rWhLdy .flexChild-faoVW3[style*="flex: 1 1 50%"] {
  margin-top: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .children-rWhLdy .flex-1xMQg5[style*="flex: 1 1 50%"] .lookOutlined-3sRXeN,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .children-rWhLdy .flexChild-faoVW3[style*="flex: 1 1 50%"] .lookOutlined-3sRXeN {
  margin-top: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .children-rWhLdy .flex-1xMQg5[style*="flex: 1 1 50%"] button .file-input,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .children-rWhLdy .flexChild-faoVW3[style*="flex: 1 1 50%"] button .file-input {
  cursor: var(--cursor) !important;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .content-1rPSz4[style*="padding: 60px 0px 80px 20px;"] {
  padding: var(--spacing-double) !important;
  margin-left: 200px;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 {
  top: 50px;
  border-right: 1px solid var(--base-border);
  width: 200px;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 + .content-1rPSz4 {
  max-width: unset;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 + .content-1rPSz4 div:first-child .size14-e6ZScH.marginBottom20-32qID7 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  padding: var(--spacing);
  background-color: rgba(var(--status-green), 0.25);
  border: 1px solid rgba(var(--status-green), 0.5);
  border-radius: var(--border-radius);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 + .content-1rPSz4 .divider-3573oO ~ .marginBottom40-2vIwTv {
  margin-bottom: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 + .content-1rPSz4 .marginBottom40-2vIwTv + .divider-3573oO + .marginBottom40-2vIwTv div.flex-1xMQg5.marginBottom20-32qID7 {
  margin-bottom: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .flexChild-faoVW3[style*="padding: 60px 15px 80px 20px;"] {
  padding: 0 !important;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .header-2RyJ0Y {
  padding: 0 var(--spacing);
  height: var(--item-height);
  display: flex;
  align-items: center;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .header-2RyJ0Y .sidebarHeader-UbSI9z {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  font-size: var(--font-size);
  text-transform: none;
  transition: none;
  align-items: center;
  cursor: var(--cursor);
  pointer-events: none;
  opacity: 1;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .header-2RyJ0Y .sidebarHeader-UbSI9z .addRoleIcon-3YjErH {
  content: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg"/>');
  background: var(--text-muted);
  height: 12px;
  width: 12px;
  opacity: 1;
  pointer-events: all;
  -webkit-mask: url("data:image/svg+xml;base64,PHN2ZyB4bWxucz0naHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmcnIHdpZHRoPScxMicgaGVpZ2h0PScxNicgdmlld0JveD0nMCAwIDEyIDE2Jz48cGF0aCBmaWxsLXJ1bGU9J2V2ZW5vZGQnIGQ9J00xMiA5SDd2NUg1VjlIMFY3aDVWMmgydjVoNXYyeic+PC9wYXRoPjwvc3ZnPg==") center/10px no-repeat;
  transition: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .header-2RyJ0Y .sidebarHeader-UbSI9z .addRoleIcon-3YjErH:hover {
  background: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .dragged-2XvZ89 {
  border-top: 2px solid var(--accent-solid);
  background: var(--background-dark);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf {
  height: var(--item-height);
  border-radius: 0;
  padding: 0 var(--spacing);
  display: flex;
  align-items: center;
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf .roleInner-1C_Scc {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf .roleOverflow-1zjC9k {
  width: 12px;
  margin-left: var(--spacing);
  color: var(--text-muted);
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf .roleOverflow-1zjC9k svg {
  width: 12px;
  height: 12px;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf .roleOverflow-1zjC9k:hover {
  color: var(--text-normal);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf.selected-3s45Ha .roleInner-1C_Scc,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf.selected-3s45Ha .roleOverflow-1zjC9k {
  color: var(--white);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .role-3wi9Tf.selected-3s45Ha .roleOverflow-1zjC9k {
  opacity: 1;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .marginBottom20-32qID7 {
  padding: 0 var(--spacing);
  margin: 0;
  margin-top: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .marginBottom20-32qID7 .description-3_Ncsb {
  padding: 0;
  margin: 0;
  margin-bottom: var(--spacing-half);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .sidebarScrollable-1qPI87 .separator-gCa7yv {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .size14-e6ZScH {
  font-size: var(--font-size);
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .viewAsRoleButton-1ZpPlO {
  margin: 0;
  margin-top: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] strong a {
  font-weight: var(--font-weight-normal);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .wrapper-r-6rrt {
  margin-top: calc(var(--spacing) * 8);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .wrapper-r-6rrt .image-1GzsFd {
  width: 156px !important;
  height: 156px !important;
  margin-bottom: var(--spacing-double);
  background: var(--text-muted) !important;
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
          mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .wrapper-r-6rrt .title-2BxgL2 {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  text-transform: none;
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .wrapper-r-6rrt .text-GwUZgS {
  margin-top: var(--spacing-half);
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  text-transform: none;
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] div.contentRegion-3nDuYy > div > div > main > div > div:nth-child(3) > div:nth-child(2) > div.flex-1xMQg5.flex-1O1GKY.horizontal-1ae9ci.horizontal-2EEEnY.flex-1O1GKY.directionRow-3v3tfG.justifyStart-2NDFzi.alignStretch-DpGPf3.noWrap-3jynv6.marginBottom4-2qk4Hy {
  margin: 0;
  padding: var(--spacing);
  background: var(--background-alt);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius) var(--border-radius) 0 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] div.contentRegion-3nDuYy > div > div > main > div > div:nth-child(3) > div:nth-child(2) > div.flex-1xMQg5.flex-1O1GKY.horizontal-1ae9ci.horizontal-2EEEnY.flex-1O1GKY.directionRow-3v3tfG.justifyStart-2NDFzi.alignStretch-DpGPf3.noWrap-3jynv6.marginBottom4-2qk4Hy .flexChild-faoVW3 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] div.contentRegion-3nDuYy > div > div > main > div > div:nth-child(3) > div:nth-child(2) > div.flex-1xMQg5.flex-1O1GKY.horizontal-1ae9ci.horizontal-2EEEnY.flex-1O1GKY.directionRow-3v3tfG.justifyStart-2NDFzi.alignStretch-DpGPf3.noWrap-3jynv6.marginBottom4-2qk4Hy .flexChild-faoVW3 .colorStandard-2KCXvj {
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] div.contentRegion-3nDuYy > div > div > main > div > div:nth-child(3) > div.colorStandard-2KCXvj.size14-e6ZScH.description-3_Ncsb.formText-3fs7AJ.marginBottom40-2vIwTv.modeDefault-3a2Ph1 {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX {
  box-shadow: none;
  border: 1px solid var(--base-border);
  border-top: none;
  height: var(--item-height);
  padding: var(--spacing);
  box-sizing: content-box;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX:last-child {
  border-radius: 0 0 var(--border-radius) var(--border-radius);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX:before {
  content: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .emojiRemove-1k6MlJ {
  top: var(--spacing);
  right: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .emojiUploader-1f0pVx {
  margin: 0;
  display: flex;
  align-items: center;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .emojiUploader-1f0pVx .emojiRowText-2j4TNM {
  position: relative;
  top: 0;
  left: 0;
  margin-left: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .emojiAliasPlaceholder-3H_iZA {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .emojiInput-1aLNse {
  opacity: 1;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .positionRelative-3HNyhz {
  margin-right: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .emojiImage-1hZi2F {
  border-radius: var(--avatar-radius);
  border: 1px solid var(--base-border);
  background-color: var(--background-dark);
  width: var(--input-height);
  height: var(--input-height);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .emojiRow-zIc7ZX .avatar-2Hubm8 {
  height: var(--avatar-size-sm) !important;
  width: var(--avatar-size-sm) !important;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .customColumn-Rb6toI {
  position: relative;
  max-width: unset;
  width: 100%;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .customHeader-f9DEJ_ {
  padding-top: 0;
  margin-bottom: var(--spacing-double);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .customHeader-f9DEJ_ h2 {
  margin-bottom: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .customScroller-26gWhv > div {
  margin: 0;
  max-width: unset;
  padding: var(--spacing-double) !important;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 {
  border: none;
  border-radius: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6:last-child {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 {
  border: 1px solid var(--base-border);
  padding: var(--spacing);
  background: var(--background-alt);
  border-radius: var(--border-radius);
  cursor: var(--cursor);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .icon-RTGJu3,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .icon-RTGJu3,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .icon-RTGJu3 {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .avatar-_VZUJy,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .avatar-_VZUJy,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .avatar-_VZUJy {
  margin: 0;
  height: var(--avatar-size) !important;
  width: var(--avatar-size) !important;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9.headerExpanded-CUEwZ5,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN.headerExpanded-CUEwZ5,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5.headerExpanded-CUEwZ5 {
  border-radius: var(--border-radius) var(--border-radius) 0 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9.headerExpanded-CUEwZ5 .expand-1lx8E1,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN.headerExpanded-CUEwZ5 .expand-1lx8E1,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5.headerExpanded-CUEwZ5 .expand-1lx8E1 {
  transform: rotate(180deg);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .expand-1lx8E1,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .expand-1lx8E1,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .expand-1lx8E1 {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M0 5l6 6 6-6H0z"/></svg>') center/contain no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M0 5l6 6 6-6H0z"/></svg>') center/contain no-repeat;
  background: var(--text-muted);
  transition: none;
  width: 12px;
  height: 12px;
  transform: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .expand-1lx8E1 path,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .expand-1lx8E1 path,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .expand-1lx8E1 path {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .timeWrap-2DasL6,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .timeWrap-2DasL6,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .timeWrap-2DasL6 {
  margin: 0 var(--spacing);
  max-width: 100%;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .timeWrap-2DasL6 .overflowEllipsis-1PBFxQ,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .timeWrap-2DasL6 .overflowEllipsis-1PBFxQ,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .timeWrap-2DasL6 .overflowEllipsis-1PBFxQ {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .timeWrap-2DasL6 .overflowEllipsis-1PBFxQ strong,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .timeWrap-2DasL6 .overflowEllipsis-1PBFxQ strong,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .timeWrap-2DasL6 .overflowEllipsis-1PBFxQ strong {
  all: unset;
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: 1px var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  flex-grow: 0;
  display: inline-block;
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .timeWrap-2DasL6 .userHook-3AdCBF,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .timeWrap-2DasL6 .userHook-3AdCBF,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .timeWrap-2DasL6 .userHook-3AdCBF {
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .timeWrap-2DasL6 .userHook-3AdCBF .discrim-3rYTMj,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .timeWrap-2DasL6 .userHook-3AdCBF .discrim-3rYTMj,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .timeWrap-2DasL6 .userHook-3AdCBF .discrim-3rYTMj {
  opacity: 1;
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerClickable-2IVFo9 .timeWrap-2DasL6 .timestamp-1mruiI,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerDefault-1wrJcN .timeWrap-2DasL6 .timestamp-1mruiI,
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .headerExpanded-CUEwZ5 .timeWrap-2DasL6 .timestamp-1mruiI {
  margin-top: var(--spacing-third);
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  position: relative;
  top: -2px;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .divider-1pnAR2 {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu {
  background: var(--background-light);
  border: 1px solid var(--base-border);
  border-top: none;
  border-radius: 0 0 var(--border-radius) var(--border-radius);
  padding: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 {
  margin: 0;
  margin-bottom: var(--spacing);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9:last-child {
  margin: 0;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 .dash-3L29dH {
  display: none;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 .changeStr-12S1vf {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-muted);
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 .changeStr-12S1vf strong {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 .prefix-24L010 {
  font-family: var(--font-family-monospace);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 .prefix-24L010.typeCreate-1kfBMl {
  color: rgb(var(--status-green));
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 .prefix-24L010.typeDelete-bTXOuk {
  color: rgb(var(--status-red));
}
#app-mount .layer-3QrUeG[aria-label=GUILD_SETTINGS] .auditLog-3jNbM6 .changeDetails-bk98pu .detail-1BhUh9 .prefix-24L010.typeUpdate-2bwuHy {
  color: rgb(var(--status-yellow));
}

html.theme-light #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .contentRegion-3nDuYy .streamerModeEnabled-2q0Gft .streamerModeEnabledBtn-2ZJ2eq:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ {
  display: flex;
  align-items: center;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ.selected-3s45Ha:before {
  background: currentColor;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:before {
  content: "";
  width: 16px;
  height: 16px;
  background: var(--text-muted);
  display: block;
  margin-right: var(--spacing);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>') center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(2):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 12 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 01-.998.998H1.001A1 1 0 010 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 12 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 01-.998.998H1.001A1 1 0 010 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"></path></svg>') center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(3):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M0 2l7-2 7 2v6.02C14 12.69 8.69 16 7 16c-1.69 0-7-3.31-7-7.98V2zm1 .75L7 1l6 1.75v5.268C13 12.104 8.449 15 7 15c-1.449 0-6-2.896-6-6.982V2.75zm1 .75L7 2v12c-1.207 0-5-2.482-5-5.985V3.5z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M0 2l7-2 7 2v6.02C14 12.69 8.69 16 7 16c-1.69 0-7-3.31-7-7.98V2zm1 .75L7 1l6 1.75v5.268C13 12.104 8.449 15 7 15c-1.449 0-6-2.896-6-6.982V2.75zm1 .75L7 2v12c-1.207 0-5-2.482-5-5.985V3.5z"></path></svg>') center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(4):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 12 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 12 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"></path></svg>') center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(5):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg>') center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(6):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9H2V8h10v1zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 3H1v6h14V6zm0-3H1v1h14V3zm-9 7H2v1h4v-1z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9H2V8h10v1zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 3H1v6h14V6zm0-3H1v1h14V3zm-9 7H2v1h4v-1z"></path></svg>') center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(8):before {
  background: currentColor;
  -webkit-mask: url("data:image/svg+xml;base64,PHN2ZyBpZD0iTGF5ZXJfMSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMjQ1IDI0MCI+PHN0eWxlPi5zdDB7ZmlsbDojRkZGRkZGO308L3N0eWxlPjxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0xMDQuNCAxMDMuOWMtNS43IDAtMTAuMiA1LTEwLjIgMTEuMXM0LjYgMTEuMSAxMC4yIDExLjFjNS43IDAgMTAuMi01IDEwLjItMTEuMS4xLTYuMS00LjUtMTEuMS0xMC4yLTExLjF6TTE0MC45IDEwMy45Yy01LjcgMC0xMC4yIDUtMTAuMiAxMS4xczQuNiAxMS4xIDEwLjIgMTEuMWM1LjcgMCAxMC4yLTUgMTAuMi0xMS4xcy00LjUtMTEuMS0xMC4yLTExLjF6Ii8+PHBhdGggY2xhc3M9InN0MCIgZD0iTTE4OS41IDIwaC0xMzRDNDQuMiAyMCAzNSAyOS4yIDM1IDQwLjZ2MTM1LjJjMCAxMS40IDkuMiAyMC42IDIwLjUgMjAuNmgxMTMuNGwtNS4zLTE4LjUgMTIuOCAxMS45IDEyLjEgMTEuMiAyMS41IDE5VjQwLjZjMC0xMS40LTkuMi0yMC42LTIwLjUtMjAuNnptLTM4LjYgMTMwLjZzLTMuNi00LjMtNi42LTguMWMxMy4xLTMuNyAxOC4xLTExLjkgMTguMS0xMS45LTQuMSAyLjctOCA0LjYtMTEuNSA1LjktNSAyLjEtOS44IDMuNS0xNC41IDQuMy05LjYgMS44LTE4LjQgMS4zLTI1LjktLjEtNS43LTEuMS0xMC42LTIuNy0xNC43LTQuMy0yLjMtLjktNC44LTItNy4zLTMuNC0uMy0uMi0uNi0uMy0uOS0uNS0uMi0uMS0uMy0uMi0uNC0uMy0xLjgtMS0yLjgtMS43LTIuOC0xLjdzNC44IDggMTcuNSAxMS44Yy0zIDMuOC02LjcgOC4zLTYuNyA4LjMtMjIuMS0uNy0zMC41LTE1LjItMzAuNS0xNS4yIDAtMzIuMiAxNC40LTU4LjMgMTQuNC01OC4zIDE0LjQtMTAuOCAyOC4xLTEwLjUgMjguMS0xMC41bDEgMS4yYy0xOCA1LjItMjYuMyAxMy4xLTI2LjMgMTMuMXMyLjItMS4yIDUuOS0yLjljMTAuNy00LjcgMTkuMi02IDIyLjctNi4zLjYtLjEgMS4xLS4yIDEuNy0uMiA2LjEtLjggMTMtMSAyMC4yLS4yIDkuNSAxLjEgMTkuNyAzLjkgMzAuMSA5LjYgMCAwLTcuOS03LjUtMjQuOS0xMi43bDEuNC0xLjZzMTMuNy0uMyAyOC4xIDEwLjVjMCAwIDE0LjQgMjYuMSAxNC40IDU4LjMgMCAwLTguNSAxNC41LTMwLjYgMTUuMnoiLz48L3N2Zz4=") center/cover no-repeat;
          mask: url("data:image/svg+xml;base64,PHN2ZyBpZD0iTGF5ZXJfMSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiB2aWV3Qm94PSIwIDAgMjQ1IDI0MCI+PHN0eWxlPi5zdDB7ZmlsbDojRkZGRkZGO308L3N0eWxlPjxwYXRoIGNsYXNzPSJzdDAiIGQ9Ik0xMDQuNCAxMDMuOWMtNS43IDAtMTAuMiA1LTEwLjIgMTEuMXM0LjYgMTEuMSAxMC4yIDExLjFjNS43IDAgMTAuMi01IDEwLjItMTEuMS4xLTYuMS00LjUtMTEuMS0xMC4yLTExLjF6TTE0MC45IDEwMy45Yy01LjcgMC0xMC4yIDUtMTAuMiAxMS4xczQuNiAxMS4xIDEwLjIgMTEuMWM1LjcgMCAxMC4yLTUgMTAuMi0xMS4xcy00LjUtMTEuMS0xMC4yLTExLjF6Ii8+PHBhdGggY2xhc3M9InN0MCIgZD0iTTE4OS41IDIwaC0xMzRDNDQuMiAyMCAzNSAyOS4yIDM1IDQwLjZ2MTM1LjJjMCAxMS40IDkuMiAyMC42IDIwLjUgMjAuNmgxMTMuNGwtNS4zLTE4LjUgMTIuOCAxMS45IDEyLjEgMTEuMiAyMS41IDE5VjQwLjZjMC0xMS40LTkuMi0yMC42LTIwLjUtMjAuNnptLTM4LjYgMTMwLjZzLTMuNi00LjMtNi42LTguMWMxMy4xLTMuNyAxOC4xLTExLjkgMTguMS0xMS45LTQuMSAyLjctOCA0LjYtMTEuNSA1LjktNSAyLjEtOS44IDMuNS0xNC41IDQuMy05LjYgMS44LTE4LjQgMS4zLTI1LjktLjEtNS43LTEuMS0xMC42LTIuNy0xNC43LTQuMy0yLjMtLjktNC44LTItNy4zLTMuNC0uMy0uMi0uNi0uMy0uOS0uNS0uMi0uMS0uMy0uMi0uNC0uMy0xLjgtMS0yLjgtMS43LTIuOC0xLjdzNC44IDggMTcuNSAxMS44Yy0zIDMuOC02LjcgOC4zLTYuNyA4LjMtMjIuMS0uNy0zMC41LTE1LjItMzAuNS0xNS4yIDAtMzIuMiAxNC40LTU4LjMgMTQuNC01OC4zIDE0LjQtMTAuOCAyOC4xLTEwLjUgMjguMS0xMC41bDEgMS4yYy0xOCA1LjItMjYuMyAxMy4xLTI2LjMgMTMuMXMyLjItMS4yIDUuOS0yLjljMTAuNy00LjcgMTkuMi02IDIyLjctNi4zLjYtLjEgMS4xLS4yIDEuNy0uMiA2LjEtLjggMTMtMSAyMC4yLS4yIDkuNSAxLjEgMTkuNyAzLjkgMzAuMSA5LjYgMCAwLTcuOS03LjUtMjQuOS0xMi43bDEuNC0xLjZzMTMuNy0uMyAyOC4xIDEwLjVjMCAwIDE0LjQgMjYuMSAxNC40IDU4LjMgMCAwLTguNSAxNC41LTMwLjYgMTUuMnoiLz48L3N2Zz4=") center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(9):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M13 4h-1.38c.19-.33.33-.67.36-.91.06-.67-.11-1.22-.52-1.61C11.1 1.1 10.65 1 10.1 1h-.11c-.53.02-1.11.25-1.53.58-.42.33-.73.72-.97 1.2-.23-.48-.55-.88-.97-1.2-.42-.32-1-.58-1.53-.58h-.03c-.56 0-1.06.09-1.44.48-.41.39-.58.94-.52 1.61.03.23.17.58.36.91H1.98c-.55 0-1 .45-1 1v3h1v5c0 .55.45 1 1 1h9c.55 0 1-.45 1-1V8h1V5c0-.55-.45-1-1-1H13zm-4.78-.88c.17-.36.42-.67.75-.92.3-.23.72-.39 1.05-.41h.09c.45 0 .66.11.8.25s.33.39.3.95c-.05.19-.25.61-.5 1h-2.9l.41-.88v.01zM4.09 2.04c.13-.13.31-.25.91-.25.31 0 .72.17 1.03.41.33.25.58.55.75.92L7.2 4H4.3c-.25-.39-.45-.81-.5-1-.03-.56.16-.81.3-.95l-.01-.01zM7 12.99H3V8h4v5-.01zm0-6H2V5h5v2-.01zm5 6H8V8h4v5-.01zm1-6H8V5h5v2-.01z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M13 4h-1.38c.19-.33.33-.67.36-.91.06-.67-.11-1.22-.52-1.61C11.1 1.1 10.65 1 10.1 1h-.11c-.53.02-1.11.25-1.53.58-.42.33-.73.72-.97 1.2-.23-.48-.55-.88-.97-1.2-.42-.32-1-.58-1.53-.58h-.03c-.56 0-1.06.09-1.44.48-.41.39-.58.94-.52 1.61.03.23.17.58.36.91H1.98c-.55 0-1 .45-1 1v3h1v5c0 .55.45 1 1 1h9c.55 0 1-.45 1-1V8h1V5c0-.55-.45-1-1-1H13zm-4.78-.88c.17-.36.42-.67.75-.92.3-.23.72-.39 1.05-.41h.09c.45 0 .66.11.8.25s.33.39.3.95c-.05.19-.25.61-.5 1h-2.9l.41-.88v.01zM4.09 2.04c.13-.13.31-.25.91-.25.31 0 .72.17 1.03.41.33.25.58.55.75.92L7.2 4H4.3c-.25-.39-.45-.81-.5-1-.03-.56.16-.81.3-.95l-.01-.01zM7 12.99H3V8h4v5-.01zm0-6H2V5h5v2-.01zm5 6H8V8h4v5-.01zm1-6H8V5h5v2-.01z"></path></svg>') center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(10) {
  color: rgba(var(--discord-pink), 1);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(10):before {
  background: currentColor;
  -webkit-mask: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAMAAAAPkIrYAAAAUVBMVEUAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABcqRVCAAAAGnRSTlMACwwNGBkeICJTWVqAv8DExdvd3+H29/r7/K5nB5wAAAEWSURBVHgB7di9boQwEEVhhx9ICJAACSF+/wfdxh0H5D1UK3Ebd5+msO5IE3LSjO9BBKk5/gAmqQiYpSzGFGOSYkxSjAnqOtYuCflN79JenuqrGmAyR5XhTWJABYsBZTGgLAaUxoDyGFAeA6qWGFAf66fDgPqL/wpDKjLmKMYkxZikGBOUwPpTirD+2GIKsTxrKnbUHiumLGvYU4AN+VaiCBPWFjmbsOJRbuu2buulLN8Tvr86YQGWKLBU33fP9X38LhlLVP4eYoypM6uZGUMq7W2HMaUwpgRmKMYkxZikEFslRVhtKcAMBZinAPMUYJ4CzFOAeQowTQFWCUreTfw9x2OeAsxTgHkKME8B5inALAVpx6x/9QAAgaz7LUiTnQAAAABJRU5ErkJggg==") center/cover no-repeat;
          mask: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAEsAAABLCAMAAAAPkIrYAAAAUVBMVEUAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABcqRVCAAAAGnRSTlMACwwNGBkeICJTWVqAv8DExdvd3+H29/r7/K5nB5wAAAEWSURBVHgB7di9boQwEEVhhx9ICJAACSF+/wfdxh0H5D1UK3Ebd5+msO5IE3LSjO9BBKk5/gAmqQiYpSzGFGOSYkxSjAnqOtYuCflN79JenuqrGmAyR5XhTWJABYsBZTGgLAaUxoDyGFAeA6qWGFAf66fDgPqL/wpDKjLmKMYkxZikGBOUwPpTirD+2GIKsTxrKnbUHiumLGvYU4AN+VaiCBPWFjmbsOJRbuu2buulLN8Tvr86YQGWKLBU33fP9X38LhlLVP4eYoypM6uZGUMq7W2HMaUwpgRmKMYkxZikEFslRVhtKcAMBZinAPMUYJ4CzFOAeQowTQFWCUreTfw9x2OeAsxTgHkKME8B5inALAVpx6x/9QAAgaz7LUiTnQAAAABJRU5ErkJggg==") center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(10).selected-3s45Ha {
  background: rgba(var(--discord-pink), 1);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(11) {
  color: rgba(var(--status-yellow), 1);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(11):before {
  background: currentColor;
  -webkit-mask: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAEAAAABACAMAAACdt4HsAAABtlBMVEX///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////8cWrVBAAAAkXRSTlMAAgQGBwgJCgsMDxASFBYYGRobHiAhIiUmKy0vMDEyMzQ1Njo7PT4/QEFCQ0RFRkdISUpLTFJUVVZXWFlaW15fY2VmaG1ub3FzdnqAgYSFh4iMj5CcpKWmp6msrq+ys7W2uLm9vr/AwcPHycrR1dfY2tzd4OLj5OXm5+jp6uvs7e7v8PHy8/T19vf4+fr7/P3+W+BOyQAAAptJREFUeAHd0+dXE00UBvD7viKiFHtBIQRUFBcTgghKEbEoFsUiFrEXsKCiEBCMwKZQWAI8/7GkzJ3Mnh3ILl88/j4m55k7985d+vdV9jfRRlSEEW/YSH4EQML7Cb4RpMRDXuuPIsPjHSpFHt7m4AsDnk/gPIs1ur1/GKpoyF39MdhF3XTh5/re5lA1Cht3++Cz5VksvxMqf0Inlk8X/jHoJYLr96/J81a76N/LJH22/t2+ZvU41pcI6fN8f29d+PV5VbTRuX6q/6SFta1Yui/LP4FV4WNvsZYvdS81O1mdef/lzv+6Tegs3isuizjPoUbsz/dCOvQGzgYNogfOk6yR73eNiC5FwNjCna1E5bOOb1E9ATZcQkT7n8PuUy2temzfaq4v3aCUi8pvmL29hVZVzUOaCVLGYXV/x3dQyr4nkD4cobQ+daNOUdpnqHooo3NElL9eQGlHLSiGKS0wDcXv3ZSxpxcpA1WU9QKKpXOUUWdCcZeEZwC+FlOWsYxcyQ4SjqsnzBwkMZ4loIuyCt6pW9VB0gl5wmxkeuYyCU8xtI0fe2ryV0TWb6NcBs+hr6x0VxEJtegmYVNZaeGFFVt9Zpjin4cllOPqdsrB38lCO9nV8R1+NJGzva+QNSfzkjHF3/ytzeSgOQy1vv4EDFSQXdF9CFYHOas3IZhdpKr5KN+vnXSMGFivMr0rCQgLraRnRMG+BUjY+QjMaiNn/JosefN/SgsNgS1yfY36KKT35akN7knmk2dGHNLkeTrQD8lqIR3NHfB6DNDMT+ukCWeWPq8KRMFc1WeBGBibP0P5C5iwmztLbgRNe31NXisY9Xh/FoxBsjjvQiAu5895D3fgvAcN8Uz+NHkVTKTyzcS8dDHfQhvRONhKf7k/wAkpHhg8G8cAAAAASUVORK5CYII=") center/cover no-repeat;
          mask: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAEAAAABACAMAAACdt4HsAAABtlBMVEX///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////8cWrVBAAAAkXRSTlMAAgQGBwgJCgsMDxASFBYYGRobHiAhIiUmKy0vMDEyMzQ1Njo7PT4/QEFCQ0RFRkdISUpLTFJUVVZXWFlaW15fY2VmaG1ub3FzdnqAgYSFh4iMj5CcpKWmp6msrq+ys7W2uLm9vr/AwcPHycrR1dfY2tzd4OLj5OXm5+jp6uvs7e7v8PHy8/T19vf4+fr7/P3+W+BOyQAAAptJREFUeAHd0+dXE00UBvD7viKiFHtBIQRUFBcTgghKEbEoFsUiFrEXsKCiEBCMwKZQWAI8/7GkzJ3Mnh3ILl88/j4m55k7985d+vdV9jfRRlSEEW/YSH4EQML7Cb4RpMRDXuuPIsPjHSpFHt7m4AsDnk/gPIs1ur1/GKpoyF39MdhF3XTh5/re5lA1Cht3++Cz5VksvxMqf0Inlk8X/jHoJYLr96/J81a76N/LJH22/t2+ZvU41pcI6fN8f29d+PV5VbTRuX6q/6SFta1Yui/LP4FV4WNvsZYvdS81O1mdef/lzv+6Tegs3isuizjPoUbsz/dCOvQGzgYNogfOk6yR73eNiC5FwNjCna1E5bOOb1E9ATZcQkT7n8PuUy2temzfaq4v3aCUi8pvmL29hVZVzUOaCVLGYXV/x3dQyr4nkD4cobQ+daNOUdpnqHooo3NElL9eQGlHLSiGKS0wDcXv3ZSxpxcpA1WU9QKKpXOUUWdCcZeEZwC+FlOWsYxcyQ4SjqsnzBwkMZ4loIuyCt6pW9VB0gl5wmxkeuYyCU8xtI0fe2ryV0TWb6NcBs+hr6x0VxEJtegmYVNZaeGFFVt9Zpjin4cllOPqdsrB38lCO9nV8R1+NJGzva+QNSfzkjHF3/ytzeSgOQy1vv4EDFSQXdF9CFYHOas3IZhdpKr5KN+vnXSMGFivMr0rCQgLraRnRMG+BUjY+QjMaiNn/JosefN/SgsNgS1yfY36KKT35akN7knmk2dGHNLkeTrQD8lqIR3NHfB6DNDMT+ukCWeWPq8KRMFc1WeBGBibP0P5C5iwmztLbgRNe31NXisY9Xh/FoxBsjjvQiAu5895D3fgvAcN8Uz+NHkVTKTyzcS8dDHfQhvRONhKf7k/wAkpHhg8G8cAAAAASUVORK5CYII=") center/cover no-repeat;
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(11).selected-3s45Ha {
  background: rgba(var(--status-yellow), 1);
}
#app-mount .layer-3QrUeG[aria-label=USER_SETTINGS] .item-PXvHYJ:nth-child(14):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M12 14c1.66 0 2.99-1.34 2.99-3L15 5c0-1.66-1.34-3-3-3S9 3.34 9 5v6c0 1.66 1.34 3 3 3zm5.3-3c0 3-2.54 5.1-5.3 5.1S6.7 14 6.7 11H5c0 3.41 2.72 6.23 6 6.72V21h2v-3.28c3.28-.48 6-3.3 6-6.72h-1.7z"/><path d="M0 0h24v24H0z" fill="none"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M12 14c1.66 0 2.99-1.34 2.99-3L15 5c0-1.66-1.34-3-3-3S9 3.34 9 5v6c0 1.66 1.34 3 3 3zm5.3-3c0 3-2.54 5.1-5.3 5.1S6.7 14 6.7 11H5c0 3.41 2.72 6.23 6 6.72V21h2v-3.28c3.28-.48 6-3.3 6-6.72h-1.7z"/><path d="M0 0h24v24H0z" fill="none"/></svg>') center/cover no-repeat;
}

html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(15):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M15 2H1c-.55 0-1 .45-1 1v9c0 .55.45 1 1 1h5.34c-.25.61-.86 1.39-2.34 2h8c-1.48-.61-2.09-1.39-2.34-2H15c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm0 9H1V3h14v8z"></path></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(16):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"></path></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(17):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M10 5H9V4h1v1zM3 6H2v1h1V6zm5-2H7v1h1V4zM4 4H2v1h2V4zm8 7h2v-1h-2v1zM8 7h1V6H8v1zm-4 3H2v1h2v-1zm8-6h-1v1h1V4zm2 0h-1v1h1V4zm-2 5h2V6h-2v3zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 0H1v9h14V3zM6 7h1V6H6v1zm0-3H5v1h1V4zM4 7h1V6H4v1zm1 4h6v-1H5v1zm5-4h1V6h-1v1zM3 8H2v1h1V8zm5 0v1h1V8H8zM6 8v1h1V8H6zM5 8H4v1h1V8zm5 1h1V8h-1v1z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M10 5H9V4h1v1zM3 6H2v1h1V6zm5-2H7v1h1V4zM4 4H2v1h2V4zm8 7h2v-1h-2v1zM8 7h1V6H8v1zm-4 3H2v1h2v-1zm8-6h-1v1h1V4zm2 0h-1v1h1V4zm-2 5h2V6h-2v3zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 0H1v9h14V3zM6 7h1V6H6v1zm0-3H5v1h1V4zM4 7h1V6H4v1zm1 4h6v-1H5v1zm5-4h1V6h-1v1zM3 8H2v1h1V8zm5 0v1h1V8H8zM6 8v1h1V8H6zM5 8H4v1h1V8zm5 1h1V8h-1v1z"></path></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(18):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><circle cx="6.18" cy="17.82" r="2.18"/><path d="M4 4.44v2.83c7.03 0 12.73 5.7 12.73 12.73h2.83c0-8.59-6.97-15.56-15.56-15.56zm0 5.66v2.83c3.9 0 7.07 3.17 7.07 7.07h2.83c0-5.47-4.43-9.9-9.9-9.9z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><circle cx="6.18" cy="17.82" r="2.18"/><path d="M4 4.44v2.83c7.03 0 12.73 5.7 12.73 12.73h2.83c0-8.59-6.97-15.56-15.56-15.56zm0 5.66v2.83c3.9 0 7.07 3.17 7.07 7.07h2.83c0-5.47-4.43-9.9-9.9-9.9z"/></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(19):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 1H2c-.55 0-1 .45-1 1v8c0 .55.45 1 1 1h2v3.5L7.5 11H14c.55 0 1-.45 1-1V2c0-.55-.45-1-1-1zm0 9H7l-2 2v-2H2V2h12v8z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 1H2c-.55 0-1 .45-1 1v8c0 .55.45 1 1 1h2v3.5L7.5 11H14c.55 0 1-.45 1-1V2c0-.55-.45-1-1-1zm0 9H7l-2 2v-2H2V2h12v8z"></path></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(20):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" version="1.1" viewBox="0 0 12 16"><path d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"></path></svg>') center/12px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" version="1.1" viewBox="0 0 12 16"><path d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"></path></svg>') center/12px no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(21):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M17 10.5V7c0-.55-.45-1-1-1H4c-.55 0-1 .45-1 1v10c0 .55.45 1 1 1h12c.55 0 1-.45 1-1v-3.5l4 4v-11l-4 4z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M17 10.5V7c0-.55-.45-1-1-1H4c-.55 0-1 .45-1 1v10c0 .55.45 1 1 1h12c.55 0 1-.45 1-1v-3.5l4 4v-11l-4 4z"/></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(22):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"></path></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(23):before {
  -webkit-mask: url("data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiPz48c3ZnIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHdpZHRoPSIyNHB4IiBoZWlnaHQ9IjI0cHgiIHZpZXdCb3g9IjAgMCAyNCAyNCIgdmVyc2lvbj0iMS4xIj48ZyBpZD0ic3VyZmFjZTM1NzkxNSI+PHBhdGggc3R5bGU9IiBzdHJva2U6bm9uZTtmaWxsLXJ1bGU6bm9uemVybztmaWxsOnJnYigwJSw2OS4wMTk2MDglLDEwMCUpO2ZpbGwtb3BhY2l0eToxOyIgZD0iTSAxMCAxMi41MTE3MTkgTCAyLjUwMzkwNiAxMi41IEwgMi41MDc4MTIgMTguODcxMDk0IEwgMTAgMTkuOTEwMTU2IFogTSAxMSAxMi41MTU2MjUgTCAxMSAyMC4wNDY4NzUgTCAyMS40OTYwOTQgMjEuNSBMIDIxLjUgMTIuNTMxMjUgWiBNIDEwIDQuMTI4OTA2IEwgMi41IDUuMTkxNDA2IEwgMi41MDc4MTIgMTEuNSBMIDEwIDExLjUgWiBNIDExIDMuOTg4MjgxIEwgMTEgMTEuNSBMIDIxLjQ5NjA5NCAxMS41IEwgMjEuNDk2MDk0IDIuNSBaIE0gMTEgMy45ODgyODEgIi8+PC9nPjwvc3ZnPg==") center/cover no-repeat;
          mask: url("data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiPz48c3ZnIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHdpZHRoPSIyNHB4IiBoZWlnaHQ9IjI0cHgiIHZpZXdCb3g9IjAgMCAyNCAyNCIgdmVyc2lvbj0iMS4xIj48ZyBpZD0ic3VyZmFjZTM1NzkxNSI+PHBhdGggc3R5bGU9IiBzdHJva2U6bm9uZTtmaWxsLXJ1bGU6bm9uemVybztmaWxsOnJnYigwJSw2OS4wMTk2MDglLDEwMCUpO2ZpbGwtb3BhY2l0eToxOyIgZD0iTSAxMCAxMi41MTE3MTkgTCAyLjUwMzkwNiAxMi41IEwgMi41MDc4MTIgMTguODcxMDk0IEwgMTAgMTkuOTEwMTU2IFogTSAxMSAxMi41MTU2MjUgTCAxMSAyMC4wNDY4NzUgTCAyMS40OTYwOTQgMjEuNSBMIDIxLjUgMTIuNTMxMjUgWiBNIDEwIDQuMTI4OTA2IEwgMi41IDUuMTkxNDA2IEwgMi41MDc4MTIgMTEuNSBMIDEwIDExLjUgWiBNIDExIDMuOTg4MjgxIEwgMTEgMTEuNSBMIDIxLjQ5NjA5NCAxMS41IEwgMjEuNDk2MDk0IDIuNSBaIE0gMTEgMy45ODgyODEgIi8+PC9nPjwvc3ZnPg==") center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(25):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M13 3c-4.97 0-9 4.03-9 9H1l3.89 3.89.07.14L9 12H6c0-3.87 3.13-7 7-7s7 3.13 7 7-3.13 7-7 7c-1.93 0-3.68-.79-4.94-2.06l-1.42 1.42C8.27 19.99 10.51 21 13 21c4.97 0 9-4.03 9-9s-4.03-9-9-9zm-1 5v5l4.28 2.54.72-1.21-3.5-2.08V8H12z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M13 3c-4.97 0-9 4.03-9 9H1l3.89 3.89.07.14L9 12H6c0-3.87 3.13-7 7-7s7 3.13 7 7-3.13 7-7 7c-1.93 0-3.68-.79-4.94-2.06l-1.42 1.42C8.27 19.99 10.51 21 13 21c4.97 0 9-4.03 9-9s-4.03-9-9-9zm-1 5v5l4.28 2.54.72-1.21-3.5-2.08V8H12z"/></svg>') center/cover no-repeat;
}
html.platform-win #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ[style*="240, 71, 71"]:before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9V7H8V5h4V3l4 3-4 3zm-2 3H6V3L2 1h8v3h1V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v11.38c0 .39.22.73.55.91L6 16.01V13h4c.55 0 1-.45 1-1V8h-1v4z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9V7H8V5h4V3l4 3-4 3zm-2 3H6V3L2 1h8v3h1V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v11.38c0 .39.22.73.55.91L6 16.01V13h4c.55 0 1-.45 1-1V8h-1v4z"></path></svg>') center/cover no-repeat;
  background: rgba(var(--status-red), 1);
}

html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(15):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"></path></svg>') center/cover no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(16):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M10 5H9V4h1v1zM3 6H2v1h1V6zm5-2H7v1h1V4zM4 4H2v1h2V4zm8 7h2v-1h-2v1zM8 7h1V6H8v1zm-4 3H2v1h2v-1zm8-6h-1v1h1V4zm2 0h-1v1h1V4zm-2 5h2V6h-2v3zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 0H1v9h14V3zM6 7h1V6H6v1zm0-3H5v1h1V4zM4 7h1V6H4v1zm1 4h6v-1H5v1zm5-4h1V6h-1v1zM3 8H2v1h1V8zm5 0v1h1V8H8zM6 8v1h1V8H6zM5 8H4v1h1V8zm5 1h1V8h-1v1z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M10 5H9V4h1v1zM3 6H2v1h1V6zm5-2H7v1h1V4zM4 4H2v1h2V4zm8 7h2v-1h-2v1zM8 7h1V6H8v1zm-4 3H2v1h2v-1zm8-6h-1v1h1V4zm2 0h-1v1h1V4zm-2 5h2V6h-2v3zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 0H1v9h14V3zM6 7h1V6H6v1zm0-3H5v1h1V4zM4 7h1V6H4v1zm1 4h6v-1H5v1zm5-4h1V6h-1v1zM3 8H2v1h1V8zm5 0v1h1V8H8zM6 8v1h1V8H6zM5 8H4v1h1V8zm5 1h1V8h-1v1z"></path></svg>') center/cover no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(17):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><circle cx="6.18" cy="17.82" r="2.18"/><path d="M4 4.44v2.83c7.03 0 12.73 5.7 12.73 12.73h2.83c0-8.59-6.97-15.56-15.56-15.56zm0 5.66v2.83c3.9 0 7.07 3.17 7.07 7.07h2.83c0-5.47-4.43-9.9-9.9-9.9z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><circle cx="6.18" cy="17.82" r="2.18"/><path d="M4 4.44v2.83c7.03 0 12.73 5.7 12.73 12.73h2.83c0-8.59-6.97-15.56-15.56-15.56zm0 5.66v2.83c3.9 0 7.07 3.17 7.07 7.07h2.83c0-5.47-4.43-9.9-9.9-9.9z"/></svg>') center/cover no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(18):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 1H2c-.55 0-1 .45-1 1v8c0 .55.45 1 1 1h2v3.5L7.5 11H14c.55 0 1-.45 1-1V2c0-.55-.45-1-1-1zm0 9H7l-2 2v-2H2V2h12v8z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 1H2c-.55 0-1 .45-1 1v8c0 .55.45 1 1 1h2v3.5L7.5 11H14c.55 0 1-.45 1-1V2c0-.55-.45-1-1-1zm0 9H7l-2 2v-2H2V2h12v8z"></path></svg>') center/cover no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(19):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" version="1.1" viewBox="0 0 12 16"><path d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"></path></svg>') center/12px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" version="1.1" viewBox="0 0 12 16"><path d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"></path></svg>') center/12px no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(20):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M17 10.5V7c0-.55-.45-1-1-1H4c-.55 0-1 .45-1 1v10c0 .55.45 1 1 1h12c.55 0 1-.45 1-1v-3.5l4 4v-11l-4 4z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M17 10.5V7c0-.55-.45-1-1-1H4c-.55 0-1 .45-1 1v10c0 .55.45 1 1 1h12c.55 0 1-.45 1-1v-3.5l4 4v-11l-4 4z"/></svg>') center/cover no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(21):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"></path></svg>') center/cover no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(23):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M13 3c-4.97 0-9 4.03-9 9H1l3.89 3.89.07.14L9 12H6c0-3.87 3.13-7 7-7s7 3.13 7 7-3.13 7-7 7c-1.93 0-3.68-.79-4.94-2.06l-1.42 1.42C8.27 19.99 10.51 21 13 21c4.97 0 9-4.03 9-9s-4.03-9-9-9zm-1 5v5l4.28 2.54.72-1.21-3.5-2.08V8H12z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M13 3c-4.97 0-9 4.03-9 9H1l3.89 3.89.07.14L9 12H6c0-3.87 3.13-7 7-7s7 3.13 7 7-3.13 7-7 7c-1.93 0-3.68-.79-4.94-2.06l-1.42 1.42C8.27 19.99 10.51 21 13 21c4.97 0 9-4.03 9-9s-4.03-9-9-9zm-1 5v5l4.28 2.54.72-1.21-3.5-2.08V8H12z"/></svg>') center/cover no-repeat;
}
html.platform-osx #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ[style*="240, 71, 71"]:before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9V7H8V5h4V3l4 3-4 3zm-2 3H6V3L2 1h8v3h1V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v11.38c0 .39.22.73.55.91L6 16.01V13h4c.55 0 1-.45 1-1V8h-1v4z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9V7H8V5h4V3l4 3-4 3zm-2 3H6V3L2 1h8v3h1V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v11.38c0 .39.22.73.55.91L6 16.01V13h4c.55 0 1-.45 1-1V8h-1v4z"></path></svg>') center/cover no-repeat;
  background: rgba(var(--status-red), 1);
}

html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(15):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 12v1H0v-1l.73-.58c.77-.77.81-2.55 1.19-4.42C2.69 3.23 6 2 6 2c0-.55.45-1 1-1s1 .45 1 1c0 0 3.39 1.23 4.16 5 .38 1.88.42 3.66 1.19 4.42l.66.58H14zm-7 4c1.11 0 2-.89 2-2H5c0 1.11.89 2 2 2z"></path></svg>') center/cover no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(16):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M10 5H9V4h1v1zM3 6H2v1h1V6zm5-2H7v1h1V4zM4 4H2v1h2V4zm8 7h2v-1h-2v1zM8 7h1V6H8v1zm-4 3H2v1h2v-1zm8-6h-1v1h1V4zm2 0h-1v1h1V4zm-2 5h2V6h-2v3zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 0H1v9h14V3zM6 7h1V6H6v1zm0-3H5v1h1V4zM4 7h1V6H4v1zm1 4h6v-1H5v1zm5-4h1V6h-1v1zM3 8H2v1h1V8zm5 0v1h1V8H8zM6 8v1h1V8H6zM5 8H4v1h1V8zm5 1h1V8h-1v1z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M10 5H9V4h1v1zM3 6H2v1h1V6zm5-2H7v1h1V4zM4 4H2v1h2V4zm8 7h2v-1h-2v1zM8 7h1V6H8v1zm-4 3H2v1h2v-1zm8-6h-1v1h1V4zm2 0h-1v1h1V4zm-2 5h2V6h-2v3zm4-6v9c0 .55-.45 1-1 1H1c-.55 0-1-.45-1-1V3c0-.55.45-1 1-1h14c.55 0 1 .45 1 1zm-1 0H1v9h14V3zM6 7h1V6H6v1zm0-3H5v1h1V4zM4 7h1V6H4v1zm1 4h6v-1H5v1zm5-4h1V6h-1v1zM3 8H2v1h1V8zm5 0v1h1V8H8zM6 8v1h1V8H6zM5 8H4v1h1V8zm5 1h1V8h-1v1z"></path></svg>') center/cover no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(17):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><circle cx="6.18" cy="17.82" r="2.18"/><path d="M4 4.44v2.83c7.03 0 12.73 5.7 12.73 12.73h2.83c0-8.59-6.97-15.56-15.56-15.56zm0 5.66v2.83c3.9 0 7.07 3.17 7.07 7.07h2.83c0-5.47-4.43-9.9-9.9-9.9z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><circle cx="6.18" cy="17.82" r="2.18"/><path d="M4 4.44v2.83c7.03 0 12.73 5.7 12.73 12.73h2.83c0-8.59-6.97-15.56-15.56-15.56zm0 5.66v2.83c3.9 0 7.07 3.17 7.07 7.07h2.83c0-5.47-4.43-9.9-9.9-9.9z"/></svg>') center/cover no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(18):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 1H2c-.55 0-1 .45-1 1v8c0 .55.45 1 1 1h2v3.5L7.5 11H14c.55 0 1-.45 1-1V2c0-.55-.45-1-1-1zm0 9H7l-2 2v-2H2V2h12v8z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 1H2c-.55 0-1 .45-1 1v8c0 .55.45 1 1 1h2v3.5L7.5 11H14c.55 0 1-.45 1-1V2c0-.55-.45-1-1-1zm0 9H7l-2 2v-2H2V2h12v8z"></path></svg>') center/cover no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(19):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" version="1.1" viewBox="0 0 12 16"><path d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"></path></svg>') center/12px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" version="1.1" viewBox="0 0 12 16"><path d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"></path></svg>') center/12px no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(20):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M17 10.5V7c0-.55-.45-1-1-1H4c-.55 0-1 .45-1 1v10c0 .55.45 1 1 1h12c.55 0 1-.45 1-1v-3.5l4 4v-11l-4 4z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M17 10.5V7c0-.55-.45-1-1-1H4c-.55 0-1 .45-1 1v10c0 .55.45 1 1 1h12c.55 0 1-.45 1-1v-3.5l4 4v-11l-4 4z"/></svg>') center/cover no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(21):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"></path></svg>') center/cover no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(22):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512"><path fill="currentColor" d="M220.8 123.3c1 .5 1.8 1.7 3 1.7 1.1 0 2.8-.4 2.9-1.5.2-1.4-1.9-2.3-3.2-2.9-1.7-.7-3.9-1-5.5-.1-.4.2-.8.7-.6 1.1.3 1.3 2.3 1.1 3.4 1.7zm-21.9 1.7c1.2 0 2-1.2 3-1.7 1.1-.6 3.1-.4 3.5-1.6.2-.4-.2-.9-.6-1.1-1.6-.9-3.8-.6-5.5.1-1.3.6-3.4 1.5-3.2 2.9.1 1 1.8 1.5 2.8 1.4zM420 403.8c-3.6-4-5.3-11.6-7.2-19.7-1.8-8.1-3.9-16.8-10.5-22.4-1.3-1.1-2.6-2.1-4-2.9-1.3-.8-2.7-1.5-4.1-2 9.2-27.3 5.6-54.5-3.7-79.1-11.4-30.1-31.3-56.4-46.5-74.4-17.1-21.5-33.7-41.9-33.4-72C311.1 85.4 315.7.1 234.8 0 132.4-.2 158 103.4 156.9 135.2c-1.7 23.4-6.4 41.8-22.5 64.7-18.9 22.5-45.5 58.8-58.1 96.7-6 17.9-8.8 36.1-6.2 53.3-6.5 5.8-11.4 14.7-16.6 20.2-4.2 4.3-10.3 5.9-17 8.3s-14 6-18.5 14.5c-2.1 3.9-2.8 8.1-2.8 12.4 0 3.9.6 7.9 1.2 11.8 1.2 8.1 2.5 15.7.8 20.8-5.2 14.4-5.9 24.4-2.2 31.7 3.8 7.3 11.4 10.5 20.1 12.3 17.3 3.6 40.8 2.7 59.3 12.5 19.8 10.4 39.9 14.1 55.9 10.4 11.6-2.6 21.1-9.6 25.9-20.2 12.5-.1 26.3-5.4 48.3-6.6 14.9-1.2 33.6 5.3 55.1 4.1.6 2.3 1.4 4.6 2.5 6.7v.1c8.3 16.7 23.8 24.3 40.3 23 16.6-1.3 34.1-11 48.3-27.9 13.6-16.4 36-23.2 50.9-32.2 7.4-4.5 13.4-10.1 13.9-18.3.4-8.2-4.4-17.3-15.5-29.7zM223.7 87.3c9.8-22.2 34.2-21.8 44-.4 6.5 14.2 3.6 30.9-4.3 40.4-1.6-.8-5.9-2.6-12.6-4.9 1.1-1.2 3.1-2.7 3.9-4.6 4.8-11.8-.2-27-9.1-27.3-7.3-.5-13.9 10.8-11.8 23-4.1-2-9.4-3.5-13-4.4-1-6.9-.3-14.6 2.9-21.8zM183 75.8c10.1 0 20.8 14.2 19.1 33.5-3.5 1-7.1 2.5-10.2 4.6 1.2-8.9-3.3-20.1-9.6-19.6-8.4.7-9.8 21.2-1.8 28.1 1 .8 1.9-.2-5.9 5.5-15.6-14.6-10.5-52.1 8.4-52.1zm-13.6 60.7c6.2-4.6 13.6-10 14.1-10.5 4.7-4.4 13.5-14.2 27.9-14.2 7.1 0 15.6 2.3 25.9 8.9 6.3 4.1 11.3 4.4 22.6 9.3 8.4 3.5 13.7 9.7 10.5 18.2-2.6 7.1-11 14.4-22.7 18.1-11.1 3.6-19.8 16-38.2 14.9-3.9-.2-7-1-9.6-2.1-8-3.5-12.2-10.4-20-15-8.6-4.8-13.2-10.4-14.7-15.3-1.4-4.9 0-9 4.2-12.3zm3.3 334c-2.7 35.1-43.9 34.4-75.3 18-29.9-15.8-68.6-6.5-76.5-21.9-2.4-4.7-2.4-12.7 2.6-26.4v-.2c2.4-7.6.6-16-.6-23.9-1.2-7.8-1.8-15 .9-20 3.5-6.7 8.5-9.1 14.8-11.3 10.3-3.7 11.8-3.4 19.6-9.9 5.5-5.7 9.5-12.9 14.3-18 5.1-5.5 10-8.1 17.7-6.9 8.1 1.2 15.1 6.8 21.9 16l19.6 35.6c9.5 19.9 43.1 48.4 41 68.9zm-1.4-25.9c-4.1-6.6-9.6-13.6-14.4-19.6 7.1 0 14.2-2.2 16.7-8.9 2.3-6.2 0-14.9-7.4-24.9-13.5-18.2-38.3-32.5-38.3-32.5-13.5-8.4-21.1-18.7-24.6-29.9s-3-23.3-.3-35.2c5.2-22.9 18.6-45.2 27.2-59.2 2.3-1.7.8 3.2-8.7 20.8-8.5 16.1-24.4 53.3-2.6 82.4.6-20.7 5.5-41.8 13.8-61.5 12-27.4 37.3-74.9 39.3-112.7 1.1.8 4.6 3.2 6.2 4.1 4.6 2.7 8.1 6.7 12.6 10.3 12.4 10 28.5 9.2 42.4 1.2 6.2-3.5 11.2-7.5 15.9-9 9.9-3.1 17.8-8.6 22.3-15 7.7 30.4 25.7 74.3 37.2 95.7 6.1 11.4 18.3 35.5 23.6 64.6 3.3-.1 7 .4 10.9 1.4 13.8-35.7-11.7-74.2-23.3-84.9-4.7-4.6-4.9-6.6-2.6-6.5 12.6 11.2 29.2 33.7 35.2 59 2.8 11.6 3.3 23.7.4 35.7 16.4 6.8 35.9 17.9 30.7 34.8-2.2-.1-3.2 0-4.2 0 3.2-10.1-3.9-17.6-22.8-26.1-19.6-8.6-36-8.6-38.3 12.5-12.1 4.2-18.3 14.7-21.4 27.3-2.8 11.2-3.6 24.7-4.4 39.9-.5 7.7-3.6 18-6.8 29-32.1 22.9-76.7 32.9-114.3 7.2zm257.4-11.5c-.9 16.8-41.2 19.9-63.2 46.5-13.2 15.7-29.4 24.4-43.6 25.5s-26.5-4.8-33.7-19.3c-4.7-11.1-2.4-23.1 1.1-36.3 3.7-14.2 9.2-28.8 9.9-40.6.8-15.2 1.7-28.5 4.2-38.7 2.6-10.3 6.6-17.2 13.7-21.1.3-.2.7-.3 1-.5.8 13.2 7.3 26.6 18.8 29.5 12.6 3.3 30.7-7.5 38.4-16.3 9-.3 15.7-.9 22.6 5.1 9.9 8.5 7.1 30.3 17.1 41.6 10.6 11.6 14 19.5 13.7 24.6zM173.3 148.7c2 1.9 4.7 4.5 8 7.1 6.6 5.2 15.8 10.6 27.3 10.6 11.6 0 22.5-5.9 31.8-10.8 4.9-2.6 10.9-7 14.8-10.4s5.9-6.3 3.1-6.6-2.6 2.6-6 5.1c-4.4 3.2-9.7 7.4-13.9 9.8-7.4 4.2-19.5 10.2-29.9 10.2s-18.7-4.8-24.9-9.7c-3.1-2.5-5.7-5-7.7-6.9-1.5-1.4-1.9-4.6-4.3-4.9-1.4-.1-1.8 3.7 1.7 6.5z"></path></svg>') center/14px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 448 512"><path fill="currentColor" d="M220.8 123.3c1 .5 1.8 1.7 3 1.7 1.1 0 2.8-.4 2.9-1.5.2-1.4-1.9-2.3-3.2-2.9-1.7-.7-3.9-1-5.5-.1-.4.2-.8.7-.6 1.1.3 1.3 2.3 1.1 3.4 1.7zm-21.9 1.7c1.2 0 2-1.2 3-1.7 1.1-.6 3.1-.4 3.5-1.6.2-.4-.2-.9-.6-1.1-1.6-.9-3.8-.6-5.5.1-1.3.6-3.4 1.5-3.2 2.9.1 1 1.8 1.5 2.8 1.4zM420 403.8c-3.6-4-5.3-11.6-7.2-19.7-1.8-8.1-3.9-16.8-10.5-22.4-1.3-1.1-2.6-2.1-4-2.9-1.3-.8-2.7-1.5-4.1-2 9.2-27.3 5.6-54.5-3.7-79.1-11.4-30.1-31.3-56.4-46.5-74.4-17.1-21.5-33.7-41.9-33.4-72C311.1 85.4 315.7.1 234.8 0 132.4-.2 158 103.4 156.9 135.2c-1.7 23.4-6.4 41.8-22.5 64.7-18.9 22.5-45.5 58.8-58.1 96.7-6 17.9-8.8 36.1-6.2 53.3-6.5 5.8-11.4 14.7-16.6 20.2-4.2 4.3-10.3 5.9-17 8.3s-14 6-18.5 14.5c-2.1 3.9-2.8 8.1-2.8 12.4 0 3.9.6 7.9 1.2 11.8 1.2 8.1 2.5 15.7.8 20.8-5.2 14.4-5.9 24.4-2.2 31.7 3.8 7.3 11.4 10.5 20.1 12.3 17.3 3.6 40.8 2.7 59.3 12.5 19.8 10.4 39.9 14.1 55.9 10.4 11.6-2.6 21.1-9.6 25.9-20.2 12.5-.1 26.3-5.4 48.3-6.6 14.9-1.2 33.6 5.3 55.1 4.1.6 2.3 1.4 4.6 2.5 6.7v.1c8.3 16.7 23.8 24.3 40.3 23 16.6-1.3 34.1-11 48.3-27.9 13.6-16.4 36-23.2 50.9-32.2 7.4-4.5 13.4-10.1 13.9-18.3.4-8.2-4.4-17.3-15.5-29.7zM223.7 87.3c9.8-22.2 34.2-21.8 44-.4 6.5 14.2 3.6 30.9-4.3 40.4-1.6-.8-5.9-2.6-12.6-4.9 1.1-1.2 3.1-2.7 3.9-4.6 4.8-11.8-.2-27-9.1-27.3-7.3-.5-13.9 10.8-11.8 23-4.1-2-9.4-3.5-13-4.4-1-6.9-.3-14.6 2.9-21.8zM183 75.8c10.1 0 20.8 14.2 19.1 33.5-3.5 1-7.1 2.5-10.2 4.6 1.2-8.9-3.3-20.1-9.6-19.6-8.4.7-9.8 21.2-1.8 28.1 1 .8 1.9-.2-5.9 5.5-15.6-14.6-10.5-52.1 8.4-52.1zm-13.6 60.7c6.2-4.6 13.6-10 14.1-10.5 4.7-4.4 13.5-14.2 27.9-14.2 7.1 0 15.6 2.3 25.9 8.9 6.3 4.1 11.3 4.4 22.6 9.3 8.4 3.5 13.7 9.7 10.5 18.2-2.6 7.1-11 14.4-22.7 18.1-11.1 3.6-19.8 16-38.2 14.9-3.9-.2-7-1-9.6-2.1-8-3.5-12.2-10.4-20-15-8.6-4.8-13.2-10.4-14.7-15.3-1.4-4.9 0-9 4.2-12.3zm3.3 334c-2.7 35.1-43.9 34.4-75.3 18-29.9-15.8-68.6-6.5-76.5-21.9-2.4-4.7-2.4-12.7 2.6-26.4v-.2c2.4-7.6.6-16-.6-23.9-1.2-7.8-1.8-15 .9-20 3.5-6.7 8.5-9.1 14.8-11.3 10.3-3.7 11.8-3.4 19.6-9.9 5.5-5.7 9.5-12.9 14.3-18 5.1-5.5 10-8.1 17.7-6.9 8.1 1.2 15.1 6.8 21.9 16l19.6 35.6c9.5 19.9 43.1 48.4 41 68.9zm-1.4-25.9c-4.1-6.6-9.6-13.6-14.4-19.6 7.1 0 14.2-2.2 16.7-8.9 2.3-6.2 0-14.9-7.4-24.9-13.5-18.2-38.3-32.5-38.3-32.5-13.5-8.4-21.1-18.7-24.6-29.9s-3-23.3-.3-35.2c5.2-22.9 18.6-45.2 27.2-59.2 2.3-1.7.8 3.2-8.7 20.8-8.5 16.1-24.4 53.3-2.6 82.4.6-20.7 5.5-41.8 13.8-61.5 12-27.4 37.3-74.9 39.3-112.7 1.1.8 4.6 3.2 6.2 4.1 4.6 2.7 8.1 6.7 12.6 10.3 12.4 10 28.5 9.2 42.4 1.2 6.2-3.5 11.2-7.5 15.9-9 9.9-3.1 17.8-8.6 22.3-15 7.7 30.4 25.7 74.3 37.2 95.7 6.1 11.4 18.3 35.5 23.6 64.6 3.3-.1 7 .4 10.9 1.4 13.8-35.7-11.7-74.2-23.3-84.9-4.7-4.6-4.9-6.6-2.6-6.5 12.6 11.2 29.2 33.7 35.2 59 2.8 11.6 3.3 23.7.4 35.7 16.4 6.8 35.9 17.9 30.7 34.8-2.2-.1-3.2 0-4.2 0 3.2-10.1-3.9-17.6-22.8-26.1-19.6-8.6-36-8.6-38.3 12.5-12.1 4.2-18.3 14.7-21.4 27.3-2.8 11.2-3.6 24.7-4.4 39.9-.5 7.7-3.6 18-6.8 29-32.1 22.9-76.7 32.9-114.3 7.2zm257.4-11.5c-.9 16.8-41.2 19.9-63.2 46.5-13.2 15.7-29.4 24.4-43.6 25.5s-26.5-4.8-33.7-19.3c-4.7-11.1-2.4-23.1 1.1-36.3 3.7-14.2 9.2-28.8 9.9-40.6.8-15.2 1.7-28.5 4.2-38.7 2.6-10.3 6.6-17.2 13.7-21.1.3-.2.7-.3 1-.5.8 13.2 7.3 26.6 18.8 29.5 12.6 3.3 30.7-7.5 38.4-16.3 9-.3 15.7-.9 22.6 5.1 9.9 8.5 7.1 30.3 17.1 41.6 10.6 11.6 14 19.5 13.7 24.6zM173.3 148.7c2 1.9 4.7 4.5 8 7.1 6.6 5.2 15.8 10.6 27.3 10.6 11.6 0 22.5-5.9 31.8-10.8 4.9-2.6 10.9-7 14.8-10.4s5.9-6.3 3.1-6.6-2.6 2.6-6 5.1c-4.4 3.2-9.7 7.4-13.9 9.8-7.4 4.2-19.5 10.2-29.9 10.2s-18.7-4.8-24.9-9.7c-3.1-2.5-5.7-5-7.7-6.9-1.5-1.4-1.9-4.6-4.3-4.9-1.4-.1-1.8 3.7 1.7 6.5z"></path></svg>') center/14px no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ:nth-child(24):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M13 3c-4.97 0-9 4.03-9 9H1l3.89 3.89.07.14L9 12H6c0-3.87 3.13-7 7-7s7 3.13 7 7-3.13 7-7 7c-1.93 0-3.68-.79-4.94-2.06l-1.42 1.42C8.27 19.99 10.51 21 13 21c4.97 0 9-4.03 9-9s-4.03-9-9-9zm-1 5v5l4.28 2.54.72-1.21-3.5-2.08V8H12z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0z" fill="none"/><path d="M13 3c-4.97 0-9 4.03-9 9H1l3.89 3.89.07.14L9 12H6c0-3.87 3.13-7 7-7s7 3.13 7 7-3.13 7-7 7c-1.93 0-3.68-.79-4.94-2.06l-1.42 1.42C8.27 19.99 10.51 21 13 21c4.97 0 9-4.03 9-9s-4.03-9-9-9zm-1 5v5l4.28 2.54.72-1.21-3.5-2.08V8H12z"/></svg>') center/cover no-repeat;
}
html.platform-linux #app-mount .layer-3QrUeG[aria-label*=SETTINGS] .item-PXvHYJ[style*="240, 71, 71"]:before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9V7H8V5h4V3l4 3-4 3zm-2 3H6V3L2 1h8v3h1V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v11.38c0 .39.22.73.55.91L6 16.01V13h4c.55 0 1-.45 1-1V8h-1v4z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M12 9V7H8V5h4V3l4 3-4 3zm-2 3H6V3L2 1h8v3h1V1c0-.55-.45-1-1-1H1C.45 0 0 .45 0 1v11.38c0 .39.22.73.55.91L6 16.01V13h4c.55 0 1-.45 1-1V8h-1v4z"></path></svg>') center/cover no-repeat;
  background: rgba(var(--status-red), 1);
}

#app-mount #bd-settings-sidebar .ui-tab-bar-separator {
  border-bottom: 1px solid var(--base-border);
  background: transparent;
  margin: var(--spacing) 0 calc(var(--spacing) + 5px);
}
#app-mount #bd-settings-sidebar .ui-tab-bar-header {
  display: none;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item {
  margin: calc(var(--spacing) / 3) var(--spacing-double);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  padding: var(--spacing);
  border-radius: var(--border-radius);
  color: var(--text-normal);
  display: flex;
  align-items: center;
  line-height: normal;
  cursor: var(--cursor);
  min-width: 165px;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item:before {
  content: "";
  width: 16px;
  height: 16px;
  background: var(--text-muted);
  display: block;
  margin-right: var(--spacing);
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item:nth-child(3):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>') center/cover no-repeat;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item:nth-child(4):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8s3.58 8 8 8 8-3.58 8-8-3.58-8-8-8zm4.81 12.81a6.72 6.72 0 01-2.17 1.45c-.83.36-1.72.53-2.64.53-.92 0-1.81-.17-2.64-.53-.81-.34-1.55-.83-2.17-1.45a6.773 6.773 0 01-1.45-2.17A6.59 6.59 0 011.21 8c0-.92.17-1.81.53-2.64.34-.81.83-1.55 1.45-2.17.62-.62 1.36-1.11 2.17-1.45A6.59 6.59 0 018 1.21c.92 0 1.81.17 2.64.53.81.34 1.55.83 2.17 1.45.62.62 1.11 1.36 1.45 2.17.36.83.53 1.72.53 2.64 0 .92-.17 1.81-.53 2.64-.34.81-.83 1.55-1.45 2.17zM4 6.8v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2H5.2C4.53 8 4 7.47 4 6.8zm5 0v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2h-.59C9.53 8 9 7.47 9 6.8zm4 3.2c-.72 1.88-2.91 3-5 3s-4.28-1.13-5-3c-.14-.39.23-1 .66-1h8.59c.41 0 .89.61.75 1z"></path></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8s3.58 8 8 8 8-3.58 8-8-3.58-8-8-8zm4.81 12.81a6.72 6.72 0 01-2.17 1.45c-.83.36-1.72.53-2.64.53-.92 0-1.81-.17-2.64-.53-.81-.34-1.55-.83-2.17-1.45a6.773 6.773 0 01-1.45-2.17A6.59 6.59 0 011.21 8c0-.92.17-1.81.53-2.64.34-.81.83-1.55 1.45-2.17.62-.62 1.36-1.11 2.17-1.45A6.59 6.59 0 018 1.21c.92 0 1.81.17 2.64.53.81.34 1.55.83 2.17 1.45.62.62 1.11 1.36 1.45 2.17.36.83.53 1.72.53 2.64 0 .92-.17 1.81-.53 2.64-.34.81-.83 1.55-1.45 2.17zM4 6.8v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2H5.2C4.53 8 4 7.47 4 6.8zm5 0v-.59c0-.66.53-1.19 1.2-1.19h.59c.66 0 1.19.53 1.19 1.19v.59c0 .67-.53 1.2-1.19 1.2h-.59C9.53 8 9 7.47 9 6.8zm4 3.2c-.72 1.88-2.91 3-5 3s-4.28-1.13-5-3c-.14-.39.23-1 .66-1h8.59c.41 0 .89.61.75 1z"></path></svg>') center/cover no-repeat;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item:nth-child(5):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M14 6V5h-4V3H8v1H6c-1.03 0-1.77.81-2 2L3 7c-1.66 0-3 1.34-3 3v2h1v-2c0-1.11.89-2 2-2l1 1c.25 1.16.98 2 2 2h2v1h2v-2h4V9h-4V6h4z"/></svg>') center/12px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M14 6V5h-4V3H8v1H6c-1.03 0-1.77.81-2 2L3 7c-1.66 0-3 1.34-3 3v2h1v-2c0-1.11.89-2 2-2l1 1c.25 1.16.98 2 2 2h2v1h2v-2h4V9h-4V6h4z"/></svg>') center/12px no-repeat;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item:nth-child(6):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M18 4V3c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1v4c0 .55.45 1 1 1h12c.55 0 1-.45 1-1V6h1v4H9v11c0 .55.45 1 1 1h2c.55 0 1-.45 1-1v-9h8V4h-3z"/><path d="M0 0h24v24H0z" fill="none"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M18 4V3c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1v4c0 .55.45 1 1 1h12c.55 0 1-.45 1-1V6h1v4H9v11c0 .55.45 1 1 1h2c.55 0 1-.45 1-1v-9h8V4h-3z"/><path d="M0 0h24v24H0z" fill="none"/></svg>') center/cover no-repeat;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item:nth-child(7):before {
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0V0z" fill="none"/><path d="M9.4 16.6L4.8 12l4.6-4.6L8 6l-6 6 6 6 1.4-1.4zm5.2 0l4.6-4.6-4.6-4.6L16 6l6 6-6 6-1.4-1.4z"/></svg>') center/cover no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0V0z" fill="none"/><path d="M9.4 16.6L4.8 12l4.6-4.6L8 6l-6 6 6 6 1.4-1.4zm5.2 0l4.6-4.6-4.6-4.6L16 6l6 6-6 6-1.4-1.4z"/></svg>') center/cover no-repeat;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item:hover {
  background: transparent;
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item.selected {
  color: #fff;
  background: var(--accent-solid);
}
#app-mount #bd-settings-sidebar .ui-tab-bar-item.selected:before {
  background-color: #fff;
}

#bd-settingspane-container .bd-search-wrapper {
  background: transparent;
  border-radius: 0;
  padding: 0;
}
#bd-settingspane-container .bd-search-wrapper input {
  border-radius: var(--border-radius);
  background: var(--background-dark);
  font-size: var(--font-size);
  border: 1px solid var(--base-border);
  color: var(--text-normal);
  transition: none;
  padding: 0 var(--spacing-half);
  height: 25px;
  line-height: 24px;
}
#bd-settingspane-container .bd-search-wrapper input::-webkit-input-placeholder {
  color: var(--text-muted);
}
#bd-settingspane-container .bd-search-wrapper input:focus,
#bd-settingspane-container .bd-search-wrapper input .focused-1mmYsC {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
}
#bd-settingspane-container .bd-search-wrapper svg {
  display: none;
}
#bd-settingspane-container .bd-addon-card {
  background: var(--background-dark);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  padding: 0;
  position: relative;
}
#bd-settingspane-container .bd-addon-card .bda-header {
  padding: var(--spacing) var(--spacing) 0;
  box-sizing: border-box;
  border: none;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#bd-settingspane-container .bd-addon-card .bda-description {
  padding: var(--spacing) 80px var(--spacing) var(--spacing);
  box-sizing: border-box;
  border-color: var(--base-border);
  margin: 0;
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-normal);
}
#bd-settingspane-container .bd-addon-card .bda-description-wrap:last-child {
  padding-bottom: 16px;
}
#bd-settingspane-container .bd-addon-card .bda-footer {
  padding: var(--spacing) 77px var(--spacing) var(--spacing);
  border-color: var(--base-border);
}
#bd-settingspane-container .bd-addon-card .bda-links {
  display: flex;
  font-size: 0;
}
#bd-settingspane-container .bd-addon-card .bda-link {
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border) !important;
  box-shadow: none !important;
  margin-right: var(--spacing);
}
#bd-settingspane-container .bd-addon-card .bda-link:hover {
  border: 1px solid currentColor !important;
}
#bd-settingspane-container .bd-addon-card .bda-link:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#bd-settingspane-container .bd-addon-card .bd-addon-button {
  color: var(--text-normal);
  background: var(--background-light);
  min-height: var(--input-height);
  height: var(--input-height);
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  border: 1px solid var(--base-border) !important;
  cursor: var(--cursor);
  position: absolute;
  right: var(--spacing);
  bottom: var(--spacing);
}
#bd-settingspane-container .bd-addon-card .bd-addon-button:before {
  content: "Delete";
}
#bd-settingspane-container .bd-addon-card .bd-addon-button svg {
  display: none;
}
#bd-settingspane-container .bd-addon-card .bd-addon-button:hover {
  border: 1px solid currentColor !important;
}
#bd-settingspane-container .bd-addon-card .bd-addon-button:active {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}

.theme-light #bd-settingspane-container .bd-addon-card .bd-addon-button:hover {
  background: var(--background) !important;
  border: 1px solid var(--secondary-border) !important;
}
.theme-light #bd-settingspane-container .bd-addon-card .bd-addon-button:active {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount #bd-settingspane-container .ui-switch-wrapper {
  width: 13px;
  height: 13px;
}
#app-mount #bd-settingspane-container .ui-switch-wrapper .ui-switch {
  width: 13px;
  height: 13px;
  border-radius: var(--border-radius);
  background-color: var(--checkbox-background);
  border: 1px solid var(--checkbox-border);
  margin-left: 0;
}
#app-mount #bd-settingspane-container .ui-switch-wrapper .ui-switch:before {
  content: "";
  width: 8px !important;
  height: 3px !important;
  background: transparent !important;
  border-bottom: 2px solid var(--checkbox-tick) !important;
  border-left: 2px solid var(--checkbox-tick) !important;
  display: block !important;
  opacity: 0 !important;
  top: 2px !important;
  box-shadow: none !important;
  left: 1px !important;
  transform: rotate(-45deg) translate(0) !important;
}
#app-mount #bd-settingspane-container .ui-switch-wrapper .ui-switch.checked {
  background-color: var(--checkbox-background) !important;
}
#app-mount #bd-settingspane-container .ui-switch-wrapper .ui-switch.checked:before {
  opacity: 1 !important;
}

#app-mount #bd-settingspane-container .contentColumn-2hrIYH {
  padding: 0 !important;
}
#app-mount #bd-settingspane-container .contentColumn-2hrIYH > div {
  display: flex;
  flex-grow: 1;
  flex-direction: column;
}
#app-mount #bd-settingspane-container .contentColumn-2hrIYH h2.ui-form-title.margin-bottom-20 {
  display: none;
}
#app-mount .checkbox {
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
}
#app-mount .editor-wrapper {
  flex-grow: 1;
}
#app-mount #bd-customcss-attach-controls {
  box-shadow: none;
  height: 50px;
  border-top: 1px solid var(--base-border);
  background: var(--background);
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: var(--spacing);
}
#app-mount #bd-customcss-attach-controls .checkbox-group li {
  margin-top: 0;
}
#app-mount #bd-customcss-attach-controls .checkbox-group li .checkbox-inner + span {
  font-size: var(--font-size);
  margin-left: var(--spacing-half);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  cursor: var(--cursor);
}
#app-mount #bd-customcss-attach-controls .checkbox-inner {
  width: 14px;
  height: 14px;
  display: flex;
  align-items: center;
  cursor: var(--cursor);
}
#app-mount #bd-customcss-attach-controls .checkbox-inner:after, #app-mount #bd-customcss-attach-controls .checkbox-inner:before {
  content: none;
}
#app-mount #bd-customcss-attach-controls .checkbox-inner span {
  display: none;
}
#app-mount #bd-customcss-attach-controls .checkbox-inner input {
  display: inline-block;
  margin: 0;
}
#app-mount #bd-customcss-detach-controls-button button {
  margin: 0;
  margin-left: var(--spacing);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius) !important;
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border) !important;
}
#app-mount #bd-customcss-detach-controls-button button:hover {
  border: 1px solid currentColor !important;
}
#app-mount #bd-customcss-detach-controls-button button:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount #bd-customcss-detach-controls-button > div, #app-mount #bd-customcss-detach-controls-button > span {
  display: none;
}

#app-mount [aria-label*=SETTINGS] .ace_editor {
  height: auto;
  flex-grow: 1;
}

#app-mount #bd-customcss-detach-container {
  border-left: 1px solid var(--base-border);
}
#app-mount #bd-customcss-detach-container #bd-customcss-detach-editor {
  height: calc(100vh - var(--titlebar-height) - 50px);
}

html.theme-light #app-mount #bd-customcss-detach-controls-button button:hover {
  background: var(--background) !important;
  border: 1px solid var(--secondary-border) !important;
}
html.theme-light #app-mount #bd-customcss-detach-controls-button button:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .bd-chat-badge {
  height: var(--font-size);
  display: flex;
  align-items: center;
  margin-top: 2px;
}

body #app-mount #bd-settingspane-container .bd-addon-button, body #app-mount #bd-settingspane-container .bd-button, body #app-mount #bd-settingspane-container .bda-link, body #app-mount #bd-settingspane-container .bd-pfbtn {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: 25px;
  height: 25px;
  line-height: normal;
  transition: none;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  display: inline-flex;
  align-items: center;
  border: none !important;
  text-decoration: none;
  -webkit-user-select: none;
          user-select: none;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
}
body #app-mount #bd-settingspane-container .bd-button:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
  background: rgb(var(--accent));
}
body #app-mount #bd-settingspane-container .bd-button:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
body #app-mount #bd-settingspane-container .ui-switch-item {
  margin: var(--spacing) var(--spacing-double);
}
body #app-mount #bd-settingspane-container .ui-switch-item h3 {
  font-size: var(--font-size-md);
  color: var(--text-normal);
}
body #app-mount #bd-settingspane-container .ui-switch-item .style-description {
  border-color: var(--base-border);
  color: var(--text-muted) !important;
  font-size: var(--font-size);
}
body #app-mount #bd-settingspane-container .ui-switch-item:first-of-type {
  margin-top: var(--spacing-double);
}
body #app-mount #bd-settingspane-container .ui-switch-item:last-of-type {
  margin-bottom: var(--spacing-double);
}
body #app-mount #bd-settingspane-container .ui-switch-item:last-of-type .style-description {
  border-color: transparent;
}
body #app-mount #bd-settingspane-container .bd-addon-controls {
  flex-direction: row;
}
body #app-mount #bd-settingspane-container .bd-pfbtn {
  display: block;
  margin: var(--spacing-double) 0 var(--spacing-double) var(--spacing-double);
}
body #app-mount #bd-settingspane-container .bd-controls {
  padding: 0 var(--spacing-double);
}

#app-mount .backdrop-1wrmKB,
#app-mount .backdropWithLayer-3_uhz4 {
  background: var(--backdrop) !important;
  opacity: 1 !important;
}
#app-mount .modal-3c3bKg {
  transform: none !important;
}
#app-mount .sizeMedium-df47zS,
#app-mount .sizeSmall-1jtLQy,
#app-mount .sizeLarge-2yOtf1,
#app-mount .small-3iVZYw:not(.popout-103y-5) {
  min-width: 400px;
  max-width: 600px;
  max-height: 88vh;
  width: unset;
}
#app-mount .sizeMedium-df47zS.small-3iVZYw, #app-mount .sizeMedium-df47zS.sizeSmall-1jtLQy,
#app-mount .sizeSmall-1jtLQy.small-3iVZYw,
#app-mount .sizeSmall-1jtLQy.sizeSmall-1jtLQy,
#app-mount .sizeLarge-2yOtf1.small-3iVZYw,
#app-mount .sizeLarge-2yOtf1.sizeSmall-1jtLQy,
#app-mount .small-3iVZYw:not(.popout-103y-5).small-3iVZYw,
#app-mount .small-3iVZYw:not(.popout-103y-5).sizeSmall-1jtLQy {
  max-width: 400px;
}
#app-mount .modal-yWgWj-,
#app-mount .root-1gCeng:not(.popout-103y-5) {
  background-color: var(--background);
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-2);
  border: 1px solid var(--base-border);
  opacity: 1 !important;
  transform: none !important;
  min-height: unset;
  animation: modal 150ms cubic-bezier(0.175, 0.885, 0.32, 1.275);
}
#app-mount .modal-yWgWj- .header-2tA9Os,
#app-mount .modal-yWgWj- .header-1TKi98,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 {
  padding: var(--spacing-double);
  border-bottom: 1px solid var(--base-border);
  box-shadow: none;
  height: 50px;
  box-sizing: border-box;
  overflow: hidden;
}
#app-mount .modal-yWgWj- .header-2tA9Os > .flexChild-faoVW3:first-child,
#app-mount .modal-yWgWj- .header-1TKi98 > .flexChild-faoVW3:first-child,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os > .flexChild-faoVW3:first-child,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 > .flexChild-faoVW3:first-child {
  margin: 0;
}
#app-mount .modal-yWgWj- .header-2tA9Os.headerContainer-XvrQPt,
#app-mount .modal-yWgWj- .header-1TKi98.headerContainer-XvrQPt,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os.headerContainer-XvrQPt,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98.headerContainer-XvrQPt {
  height: auto;
}
#app-mount .modal-yWgWj- .header-2tA9Os.headerContainer-XvrQPt + .content-1LAB8Z[style],
#app-mount .modal-yWgWj- .header-1TKi98.headerContainer-XvrQPt + .content-1LAB8Z[style],
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os.headerContainer-XvrQPt + .content-1LAB8Z[style],
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98.headerContainer-XvrQPt + .content-1LAB8Z[style] {
  padding: 0;
}
#app-mount .modal-yWgWj- .header-2tA9Os .h4-AQvcAz,
#app-mount .modal-yWgWj- .header-2tA9Os .title-31JmR4,
#app-mount .modal-yWgWj- .header-2tA9Os .colorStandard-2KCXvj,
#app-mount .modal-yWgWj- .header-1TKi98 .h4-AQvcAz,
#app-mount .modal-yWgWj- .header-1TKi98 .title-31JmR4,
#app-mount .modal-yWgWj- .header-1TKi98 .colorStandard-2KCXvj,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .h4-AQvcAz,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .title-31JmR4,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .colorStandard-2KCXvj,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .h4-AQvcAz,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .title-31JmR4,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .colorStandard-2KCXvj {
  font-size: var(--font-size-md);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  text-transform: none;
  line-height: normal;
  letter-spacing: normal;
}
#app-mount .modal-yWgWj- .header-2tA9Os .modalTitle-3qb2Mp,
#app-mount .modal-yWgWj- .header-1TKi98 .modalTitle-3qb2Mp,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .modalTitle-3qb2Mp,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .modalTitle-3qb2Mp {
  margin: 0;
}
#app-mount .modal-yWgWj- .header-2tA9Os .breadcrumbs-SOzMJD,
#app-mount .modal-yWgWj- .header-1TKi98 .breadcrumbs-SOzMJD,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .breadcrumbs-SOzMJD,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .breadcrumbs-SOzMJD {
  position: absolute;
  top: 0;
  left: 0;
  width: calc(100% - (var(--spacing) * 4) - 6px);
  height: 100%;
  padding-left: var(--spacing-double);
  background: var(--background);
  z-index: 0;
  box-sizing: border-box;
}
#app-mount .modal-yWgWj- .header-2tA9Os .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a,
#app-mount .modal-yWgWj- .header-1TKi98 .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a {
  white-space: nowrap;
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  opacity: 0.5;
}
#app-mount .modal-yWgWj- .header-2tA9Os .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a.activeBreadcrumb-p6aw-F,
#app-mount .modal-yWgWj- .header-1TKi98 .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a.activeBreadcrumb-p6aw-F,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a.activeBreadcrumb-p6aw-F,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .breadcrumbs-SOzMJD .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a.activeBreadcrumb-p6aw-F {
  opacity: 1;
}
#app-mount .modal-yWgWj- .header-2tA9Os .guildName-3WI6ml,
#app-mount .modal-yWgWj- .header-1TKi98 .guildName-3WI6ml,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .guildName-3WI6ml,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .guildName-3WI6ml {
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
#app-mount .modal-yWgWj- .header-2tA9Os .close-hZ94c6,
#app-mount .modal-yWgWj- .header-1TKi98 .close-hZ94c6,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .close-hZ94c6,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .close-hZ94c6 {
  width: 16px;
  height: 16px;
  margin: 0;
  padding: 0;
  color: var(--text-muted);
  opacity: 1;
  z-index: 1;
  transition: none;
  right: -6px;
}
#app-mount .modal-yWgWj- .header-2tA9Os .close-hZ94c6:hover,
#app-mount .modal-yWgWj- .header-1TKi98 .close-hZ94c6:hover,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .close-hZ94c6:hover,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .close-hZ94c6:hover {
  color: var(--text-normal);
}
#app-mount .modal-yWgWj- .header-2tA9Os .close-hZ94c6 .contents-18-Yxp,
#app-mount .modal-yWgWj- .header-1TKi98 .close-hZ94c6 .contents-18-Yxp,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .close-hZ94c6 .contents-18-Yxp,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .close-hZ94c6 .contents-18-Yxp {
  width: 16px;
  height: 16px;
}
#app-mount .modal-yWgWj- .header-2tA9Os .close-hZ94c6 svg,
#app-mount .modal-yWgWj- .header-1TKi98 .close-hZ94c6 svg,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .close-hZ94c6 svg,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .close-hZ94c6 svg {
  width: 16px;
  height: 16px;
}
#app-mount .modal-yWgWj- .header-2tA9Os .close-hZ94c6 svg path,
#app-mount .modal-yWgWj- .header-1TKi98 .close-hZ94c6 svg path,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-2tA9Os .close-hZ94c6 svg path,
#app-mount .root-1gCeng:not(.popout-103y-5) .header-1TKi98 .close-hZ94c6 svg path {
  d: path("M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z");
  transform: scale(1.6) translateX(1.5px);
}
#app-mount .modal-yWgWj- .divider-3WKGWk,
#app-mount .root-1gCeng:not(.popout-103y-5) .divider-3WKGWk {
  display: none;
}
#app-mount .modal-yWgWj- .content-1LAB8Z,
#app-mount .root-1gCeng:not(.popout-103y-5) .content-1LAB8Z {
  border-radius: 0;
  padding: var(--spacing-double);
  padding-right: var(--spacing-double) !important;
}
#app-mount .modal-yWgWj- .content-1LAB8Z .divider-3573oO,
#app-mount .root-1gCeng:not(.popout-103y-5) .content-1LAB8Z .divider-3573oO {
  display: none;
}
#app-mount .modal-yWgWj- .content-1LAB8Z .body-Mj9Oxz,
#app-mount .root-1gCeng:not(.popout-103y-5) .content-1LAB8Z .body-Mj9Oxz {
  text-align: left;
}
#app-mount .modal-yWgWj- .content-1LAB8Z .title-18-Ds0,
#app-mount .root-1gCeng:not(.popout-103y-5) .content-1LAB8Z .title-18-Ds0 {
  max-height: 50px;
  box-sizing: border-box;
  padding: var(--spacing-double);
  text-align: left;
  border-bottom: 1px solid var(--base-border);
  color: var(--text-normal);
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  text-transform: none;
  margin: 0;
  position: relative;
  line-height: normal;
  display: flex;
  align-items: center;
  top: calc(var(--spacing-double) * -1);
  left: calc(var(--spacing-double) * -1);
  width: calc(100% + (var(--spacing-double) * 2));
}
#app-mount .modal-yWgWj- .inner-ZyuQk0,
#app-mount .root-1gCeng:not(.popout-103y-5) .inner-ZyuQk0 {
  padding: var(--spacing-double) var(--spacing-double) 0;
}
#app-mount .modal-yWgWj- .colorStandard-2KCXvj,
#app-mount .root-1gCeng:not(.popout-103y-5) .colorStandard-2KCXvj {
  font-size: var(--font-size);
}
#app-mount .modal-yWgWj- .largeSpacing-304iPU,
#app-mount .root-1gCeng:not(.popout-103y-5) .largeSpacing-304iPU {
  margin-bottom: var(--spacing-double);
}
#app-mount .modal-yWgWj- .divider-3573oO,
#app-mount .root-1gCeng:not(.popout-103y-5) .divider-3573oO {
  border-top-color: var(--base-border);
}
#app-mount .modal-yWgWj- .content-38qMG0,
#app-mount .root-1gCeng:not(.popout-103y-5) .content-38qMG0 {
  padding-bottom: 0;
}
#app-mount .modal-yWgWj- .titleDefault-a8-ZSr,
#app-mount .root-1gCeng:not(.popout-103y-5) .titleDefault-a8-ZSr {
  margin-left: var(--spacing-half);
}
#app-mount .modal-yWgWj- .description-3_Ncsb,
#app-mount .modal-yWgWj- .labelDescriptor-1PqHgD,
#app-mount .modal-yWgWj- .markdown-11q6EU,
#app-mount .root-1gCeng:not(.popout-103y-5) .description-3_Ncsb,
#app-mount .root-1gCeng:not(.popout-103y-5) .labelDescriptor-1PqHgD,
#app-mount .root-1gCeng:not(.popout-103y-5) .markdown-11q6EU {
  font-size: var(--font-size);
}
#app-mount .modal-yWgWj- .description-3_Ncsb.description-3_Ncsb,
#app-mount .modal-yWgWj- .labelDescriptor-1PqHgD.description-3_Ncsb,
#app-mount .modal-yWgWj- .markdown-11q6EU.description-3_Ncsb,
#app-mount .root-1gCeng:not(.popout-103y-5) .description-3_Ncsb.description-3_Ncsb,
#app-mount .root-1gCeng:not(.popout-103y-5) .labelDescriptor-1PqHgD.description-3_Ncsb,
#app-mount .root-1gCeng:not(.popout-103y-5) .markdown-11q6EU.description-3_Ncsb {
  color: var(--text-muted);
}
#app-mount .modal-yWgWj- .markdown-11q6EUm,
#app-mount .modal-yWgWj- .permissionsTitle-2yG7gU,
#app-mount .root-1gCeng:not(.popout-103y-5) .markdown-11q6EUm,
#app-mount .root-1gCeng:not(.popout-103y-5) .permissionsTitle-2yG7gU {
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
#app-mount .modal-yWgWj- .permissionsTitle-2yG7gU,
#app-mount .root-1gCeng:not(.popout-103y-5) .permissionsTitle-2yG7gU {
  margin-bottom: var(--spacing-half) !important;
  margin-top: var(--spacing);
}
#app-mount .modal-yWgWj- h5[style*="margin-bottom: 4px;"],
#app-mount .root-1gCeng:not(.popout-103y-5) h5[style*="margin-bottom: 4px;"] {
  margin-bottom: var(--spacing-third) !important;
}
#app-mount .modal-yWgWj- .marginBottom20-32qID7,
#app-mount .root-1gCeng:not(.popout-103y-5) .marginBottom20-32qID7 {
  margin-bottom: var(--spacing);
}
#app-mount .modal-yWgWj- .switchItem-2hKKKK,
#app-mount .root-1gCeng:not(.popout-103y-5) .switchItem-2hKKKK {
  margin: 0;
}
#app-mount .modal-yWgWj- .switchItem-2hKKKK .switchIcon-_4Efyi,
#app-mount .root-1gCeng:not(.popout-103y-5) .switchItem-2hKKKK .switchIcon-_4Efyi {
  display: none;
}
#app-mount .modal-yWgWj- .switchItem-2hKKKK .directionRow-3v3tfG,
#app-mount .root-1gCeng:not(.popout-103y-5) .switchItem-2hKKKK .directionRow-3v3tfG {
  align-items: center;
  flex-direction: row-reverse;
}
#app-mount .modal-yWgWj- .switchItem-2hKKKK .directionRow-3v3tfG label,
#app-mount .root-1gCeng:not(.popout-103y-5) .switchItem-2hKKKK .directionRow-3v3tfG label {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
  cursor: var(--cursor);
}
#app-mount .modal-yWgWj- .switchItem-2hKKKK .directionRow-3v3tfG .switch-3wwwcV,
#app-mount .root-1gCeng:not(.popout-103y-5) .switchItem-2hKKKK .directionRow-3v3tfG .switch-3wwwcV {
  margin: 0;
}
#app-mount .modal-yWgWj- video.spacing-2jY1b4,
#app-mount .root-1gCeng:not(.popout-103y-5) video.spacing-2jY1b4 {
  width: 100%;
}
#app-mount .modal-yWgWj- .cardPrimaryOutline-29Ujqw,
#app-mount .root-1gCeng:not(.popout-103y-5) .cardPrimaryOutline-29Ujqw {
  border-color: var(--base-border);
  background: var(--background-dark);
  padding: var(--spacing-half) 0 var(--spacing-half) var(--spacing);
  border-radius: var(--border-radius);
}
#app-mount .modal-yWgWj- .cardPrimaryOutline-29Ujqw .directionRow-3v3tfG,
#app-mount .root-1gCeng:not(.popout-103y-5) .cardPrimaryOutline-29Ujqw .directionRow-3v3tfG {
  align-items: center;
}
#app-mount .modal-yWgWj- .cardPrimaryOutline-29Ujqw .directionRow-3v3tfG svg,
#app-mount .root-1gCeng:not(.popout-103y-5) .cardPrimaryOutline-29Ujqw .directionRow-3v3tfG svg {
  width: var(--font-size-xl);
}
#app-mount .modal-yWgWj- .cardPrimaryOutline-29Ujqw .weightSemiBold-1WYsXZ,
#app-mount .root-1gCeng:not(.popout-103y-5) .cardPrimaryOutline-29Ujqw .weightSemiBold-1WYsXZ {
  font-size: var(--font-size-md);
}
#app-mount .modal-yWgWj- .cardPrimaryOutline-29Ujqw .channelNameByline-R73-tU,
#app-mount .root-1gCeng:not(.popout-103y-5) .cardPrimaryOutline-29Ujqw .channelNameByline-R73-tU {
  font-size: var(--font-size-sm);
}
#app-mount .modal-yWgWj- .cardPrimaryOutline-29Ujqw .box-mmYMsp,
#app-mount .root-1gCeng:not(.popout-103y-5) .cardPrimaryOutline-29Ujqw .box-mmYMsp {
  background: var(--background) !important;
  cursor: pointer;
  border: none;
}
#app-mount .modal-yWgWj- .cardPrimaryOutline-29Ujqw .box-mmYMsp[style*="rgb(114, 137, 218)"],
#app-mount .root-1gCeng:not(.popout-103y-5) .cardPrimaryOutline-29Ujqw .box-mmYMsp[style*="rgb(114, 137, 218)"] {
  background: var(--accent-solid) !important;
  border: none !important;
}
#app-mount .modal-yWgWj- .checkboxMute-14hTGS:before,
#app-mount .root-1gCeng:not(.popout-103y-5) .checkboxMute-14hTGS:before {
  content: none;
}
#app-mount .footer-2gL1pp {
  background: var(--background);
  box-shadow: none;
  border-top: 1px solid var(--base-border);
  padding: var(--spacing-double);
}
#app-mount .footer-2gL1pp .cancelButton-3Xu9aX,
#app-mount .footer-2gL1pp button:only-child {
  margin: 0;
}
#app-mount .footer-2gL1pp button {
  min-width: 120px;
}
#app-mount .footer-2gL1pp.justifyBetween-2tTqYu {
  justify-content: flex-start;
}
#app-mount .footer-2gL1pp .lookLink-9FtZy-,
#app-mount .footer-2gL1pp .cancelButton-2O3h8t {
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
  cursor: var(--cursor);
}
#app-mount .footer-2gL1pp .lookLink-9FtZy-:hover,
#app-mount .footer-2gL1pp .cancelButton-2O3h8t:hover {
  border: 1px solid currentColor;
}
#app-mount .footer-2gL1pp .lookLink-9FtZy-:hover .contents-18-Yxp,
#app-mount .footer-2gL1pp .cancelButton-2O3h8t:hover .contents-18-Yxp {
  background-image: none;
  text-decoration: none;
}
#app-mount .footer-2gL1pp .lookLink-9FtZy-:focus,
#app-mount .footer-2gL1pp .cancelButton-2O3h8t:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .overrideList-Xc_VCf {
  padding: 0;
}
#app-mount .overrideList-Xc_VCf .header-3Uqp87,
#app-mount .overrideList-Xc_VCf .overrideHeader-367JNH {
  color: var(--text-muted);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .overrideList-Xc_VCf .lighten-kLb06a {
  opacity: 1;
}
#app-mount .overrideList-Xc_VCf .header-3Uqp87 {
  margin-left: 0;
  margin-bottom: var(--spacing);
  font-size: var(--font-size-sm);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  text-transform: none;
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .overrideList-Xc_VCf .header-3Uqp87.headerName-2n9eUZ {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .overrideList-Xc_VCf .header-3Uqp87.headerOption-3qo9Ph {
  width: 60px;
}
#app-mount .overrideList-Xc_VCf .header-3Uqp87.headerOption-3qo9Ph:last-child {
  padding-right: var(--spacing-half);
}

html.theme-light #app-mount .footer-2gL1pp .lookLink-9FtZy-:hover,
html.theme-light #app-mount .footer-2gL1pp .cancelButton-2O3h8t:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .footer-2gL1pp .lookLink-9FtZy-:focus,
html.theme-light #app-mount .footer-2gL1pp .cancelButton-2O3h8t:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

.bd-modal-wrapper .bd-modal {
  animation: none !important;
  transform: none !important;
  opacity: 1;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner {
  background-color: var(--background);
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-2);
  border: 1px solid var(--base-border);
  opacity: 1 !important;
  transform: none !important;
  min-height: unset;
  animation: modal 150ms cubic-bezier(0.175, 0.885, 0.32, 1.275);
  min-width: 400px;
  max-width: 600px;
  width: 500px;
  max-height: 88vh;
  min-height: 250px;
  height: unset;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .header {
  padding: var(--spacing-double);
  border-bottom: 1px solid var(--base-border);
  box-shadow: none;
  height: 50px;
  box-sizing: border-box;
  overflow: hidden;
  background: transparent;
  display: flex;
  align-items: center;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .header .title {
  font-size: var(--font-size-md);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  text-transform: none;
  line-height: normal;
  letter-spacing: normal;
  -webkit-user-select: none;
          user-select: none;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body {
  background: transparent;
  color: var(--text-normal);
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .table-header {
  display: none;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller {
  padding: var(--spacing-double);
  min-height: 150px;
  max-height: 350px;
  display: flex;
  justify-content: center;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors {
  padding: 0;
  font-size: var(--font-size);
  flex-grow: 1;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors:empty {
  align-items: center;
  justify-content: center;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors:empty:before {
  content: "";
  position: relative;
  display: flex;
  flex-direction: column;
  height: 112px;
  width: 112px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
          mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors:empty:after {
  content: "Nothing to see here.";
  position: relative;
  margin-top: var(--spacing);
  color: var(--text-normal);
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors .error {
  padding: var(--spacing);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  background: var(--background-alt);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  flex-direction: column;
  align-items: flex-start;
  margin-bottom: var(--spacing);
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors .error .table-column {
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors .error .table-column.column-name {
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  margin-bottom: var(--spacing-half);
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors .error .table-column.column-message {
  color: var(--text-muted);
  margin-bottom: var(--spacing-half);
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors .error .table-column.column-error {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  flex-grow: 0;
  color: var(--text-normal) !important;
  font-family: var(--font-family-monospace);
}
.bd-modal-wrapper .bd-modal .bd-modal-inner .bd-modal-body .scroller .errors .error .table-column.column-error .error-link {
  color: inherit;
  cursor: text;
}
.bd-modal-wrapper .bd-modal .tab-bar-container {
  background: var(--background);
  box-shadow: none;
  margin: 0;
}
.bd-modal-wrapper .bd-modal .tab-bar-container .tab-bar {
  flex-grow: 1;
  box-sizing: border-box;
}
.bd-modal-wrapper .bd-modal .tab-bar-container .tab-bar-item {
  color: var(--text-normal) !important;
  font-size: var(--font-size);
  background: var(--background);
  padding: 0 var(--spacing);
  height: 29px;
  margin: 0;
  border: none;
  flex: 1;
  opacity: 1;
  display: flex;
  cursor: default;
  align-items: center;
  justify-content: center;
  box-sizing: content-box;
  border-right: 1px solid var(--base-border);
  border-bottom: 1px solid var(--base-border);
  -webkit-user-select: none;
          user-select: none;
}
.bd-modal-wrapper .bd-modal .tab-bar-container .tab-bar-item:last-child {
  border-right: none;
}
.bd-modal-wrapper .bd-modal .tab-bar-container .tab-bar-item:hover {
  background: var(--background-light);
}
.bd-modal-wrapper .bd-modal .tab-bar-container .tab-bar-item.selected {
  background: var(--background);
  border-bottom: 1px solid var(--base-border);
  box-shadow: inset 0 -3px 0px var(--accent-solid);
}

.root-SR8cQa {
  width: 700px;
  background: var(--background);
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-2);
  box-sizing: border-box;
  display: flex;
  flex-direction: row;
  transform: translateZ(0);
  animation: modal 150ms cubic-bezier(0.175, 0.885, 0.32, 1.275);
  overflow: visible;
  padding-top: 40px;
}
.root-SR8cQa [class*=topSection] {
  width: 234px;
  display: flex;
  flex-direction: column;
  background: var(--background);
  box-sizing: border-box;
  border-radius: var(--border-radius) 0 0 var(--border-radius);
}
.root-SR8cQa [class*=topSection]:not(.topSectionNormal-2-vo2m) + .body-3ND3kc {
  margin-top: 103px;
  height: calc(100% - 40px - 104px);
}
.root-SR8cQa [class*=topSection]:not(.topSectionNormal-2-vo2m).topSectionSpotify-1lI0-P + .body-3ND3kc {
  margin-top: 50px;
  height: calc(100% - 40px - 51px);
}
.root-SR8cQa [class*=topSection].topSectionPlaying-1J5E4n .activityProfile-2bJRaP .headerTextNormal-2mGWX3, .root-SR8cQa [class*=topSection].topSectionSpotify-1lI0-P .activityProfile-2bJRaP .headerTextNormal-2mGWX3 {
  display: none;
}
.root-SR8cQa .activity-1ythUs {
  position: relative;
  z-index: 101;
  margin: var(--spacing-double) var(--spacing-double) 0 var(--spacing-double);
  padding: calc(var(--spacing) / 1.5);
  background: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  order: -1;
  margin-bottom: calc(var(--spacing) * -1);
}
.root-SR8cQa .activity-1ythUs .customStatusText-39gdCI {
  font-size: var(--font-size-sm);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
.root-SR8cQa .activity-1ythUs .customStatusText-39gdCI .customStatus-154i-H {
  display: flex;
  align-items: center;
}
.root-SR8cQa .activity-1ythUs .customStatusText-39gdCI .customStatus-154i-H span {
  width: 100%;
  overflow: hidden;
  text-overflow: ellipsis;
}
.root-SR8cQa .activity-1ythUs .customStatusText-39gdCI .customStatus-154i-H .customStatusEmoji-3BvdMX {
  margin-right: var(--spacing-half);
  width: 16px;
  height: 16px;
}
.root-SR8cQa .activity-1ythUs .activityHeader-1PExlk {
  display: none;
}
.root-SR8cQa .activityProfile-2bJRaP {
  position: absolute;
  top: 40px;
  left: 234px;
  width: calc(100% - 234px);
  box-sizing: border-box;
  padding: var(--spacing);
  background: var(--accent);
  background-color: rgba(var(--accent), 0.25);
  height: 103px;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: flex-start;
  margin: 0;
  border-radius: 0;
  border: none;
  border-right: 1px solid var(--base-border);
  border-bottom: 1px solid var(--base-border);
}
.root-SR8cQa .activityProfile-2bJRaP .content-3JfFJh,
.root-SR8cQa .activityProfile-2bJRaP .details-38sfDr,
.root-SR8cQa .activityProfile-2bJRaP .headerText-1HLrL7 {
  color: var(--text-normal);
}
.root-SR8cQa .activityProfile-2bJRaP .contentImagesActivityFeed-2f9veg, .root-SR8cQa .activityProfile-2bJRaP .contentImagesProfile-1Mz07W {
  margin-left: var(--spacing);
}
.root-SR8cQa .activityProfile-2bJRaP .bodyAlignCenter-1KzvJk,
.root-SR8cQa .activityProfile-2bJRaP .bodyNormal-2D39hT {
  width: 100%;
}
.root-SR8cQa .activityProfile-2bJRaP .assetsLargeImage-eYwpTX {
  border-radius: var(--border-radius);
}
.root-SR8cQa .activityProfile-2bJRaP .gameIcon-_0rmMm,
.root-SR8cQa .activityProfile-2bJRaP .assetsLargeImageActivityFeed-25vA7H,
.root-SR8cQa .activityProfile-2bJRaP .assetsLargeImageActivityFeedXbox-3Tr-tf,
.root-SR8cQa .activityProfile-2bJRaP .assetsLargeImageProfile-3YXDex {
  height: 50px;
  width: 50px;
}
.root-SR8cQa .activityProfile-2bJRaP .details-38sfDr,
.root-SR8cQa .activityProfile-2bJRaP .nameNormal-2lqVQK,
.root-SR8cQa .activityProfile-2bJRaP .playTime-2uWd1Z,
.root-SR8cQa .activityProfile-2bJRaP .state-Tt0LO3,
.root-SR8cQa .activityProfile-2bJRaP .timestamp-VjAZmo,
.root-SR8cQa .activityProfile-2bJRaP .activityName-1IaRLn,
.root-SR8cQa .activityProfile-2bJRaP .nameNormal-2lqVQK,
.root-SR8cQa .activityProfile-2bJRaP .nameWrap-3Z4G_9,
.root-SR8cQa .activityProfile-2bJRaP .textRow-19NEd_ {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
.root-SR8cQa .activityProfile-2bJRaP .textRow-19NEd_ {
  line-height: normal;
}
.root-SR8cQa .activityProfile-2bJRaP .base-1x0h_U {
  font-weight: var(--font-weight-semibold);
}
.root-SR8cQa .activityProfile-2bJRaP .base-1x0h_U a, .root-SR8cQa .activityProfile-2bJRaP .base-1x0h_U div, .root-SR8cQa .activityProfile-2bJRaP .base-1x0h_U p, .root-SR8cQa .activityProfile-2bJRaP .base-1x0h_U span {
  font-weight: inherit;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP {
  background-color: rgba(var(--status-green), 0.25);
  height: 50px;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .assetsLargeImage-eYwpTX {
  height: 28px;
  width: 28px;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .textRow-19NEd_ {
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
  position: relative;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .content-3JfFJh {
  flex-grow: 0 !important;
  margin-right: auto;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .detailsWrap-22pigg {
  display: inline-block;
  vertical-align: top;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .state-Tt0LO3 {
  display: inline-block;
  float: right;
  vertical-align: middle;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .state-Tt0LO3:before {
  content: " ";
  white-space: pre;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .timeBarProfile-10b-fm {
  margin: 0;
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: -1;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .timeBarProfile-10b-fm .bar-3urHkF {
  height: 100%;
  margin: 0;
  background: transparent;
  border-radius: 0;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .timeBarProfile-10b-fm .bar-3urHkF .barInner-3NDaY_ {
  background: rgba(var(--status-green), 0.25);
  border-radius: 0;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .timeBarProfile-10b-fm .flex-1xMQg5 {
  display: none;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP .buttonsWrapper-2eYbM0 {
  margin: 0;
  marign-left: var(--spacing);
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP button {
  font-size: 0 !important;
}
.root-SR8cQa .topSectionSpotify-1lI0-P .activityProfile-2bJRaP button svg {
  margin: 0;
}
.root-SR8cQa .headerFill-adLl4x {
  background: transparent;
}
.root-SR8cQa .header-QKLPzZ {
  position: relative;
  display: block;
  height: 100%;
  padding: var(--spacing-double);
  border: 1px solid var(--base-border);
  border-top: none;
  border-right: none;
  border-bottom-left-radius: var(--border-radius);
}
.root-SR8cQa .header-QKLPzZ:after {
  content: "";
  position: fixed;
  height: calc(100% - 40px);
  top: 40px;
  left: 232px;
  border-right: 1px solid var(--base-border);
  width: 1px;
  z-index: 100;
}
.root-SR8cQa .header-QKLPzZ .supporter-Z3FfwL.hasBadge-4rT8_u:not(.customSupporter-thxL4U) + .headerInfo-30uryT {
  pointer-events: none;
}
.root-SR8cQa .header-QKLPzZ .supporter-Z3FfwL.hasBadge-4rT8_u:not(.customSupporter-thxL4U) + .headerInfo-30uryT .nameTag-2IFDfL .username-3gJmXY {
  position: relative;
  left: calc(var(--font-size) + var(--spacing-half));
  z-index: -1;
}
.root-SR8cQa .header-QKLPzZ .supporter-Z3FfwL.hasBadge-4rT8_u:not(.customSupporter-thxL4U) + .headerInfo-30uryT .nameTag-2IFDfL span {
  pointer-events: all;
}
.root-SR8cQa .header-QKLPzZ .supporter-Z3FfwL.hasBadge-4rT8_u:not(.customSupporter-thxL4U) .mask-1l8v16 {
  -webkit-mask: none;
}
.root-SR8cQa .header-QKLPzZ .supporter-Z3FfwL.hasBadge-4rT8_u:not(.customSupporter-thxL4U) .badge-7R_W3s {
  width: var(--font-size) !important;
  height: var(--font-size) !important;
  top: unset !important;
  left: 0 !important;
  bottom: calc(var(--spacing-double) * -1);
  transform: translateY(65%);
  z-index: 902;
  background: rgb(var(--status-red)) !important;
}
.root-SR8cQa .header-QKLPzZ .wrapper-3t9DeA {
  width: calc(234px - var(--spacing) * 4) !important;
  height: calc(234px - var(--spacing) * 4) !important;
  margin-bottom: var(--spacing);
  background: var(--background);
  z-index: 101;
  position: relative;
  box-shadow: none;
  box-sizing: border-box;
  border-radius: var(--border-radius) !important;
}
.root-SR8cQa .header-QKLPzZ .wrapper-3t9DeA rect {
  x: 75px;
  y: 75px;
  width: 8px;
  height: 8px;
  stroke-width: 0.35px;
}
.root-SR8cQa .header-QKLPzZ .wrapper-3t9DeA::before {
  content: "";
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  z-index: 1;
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  box-sizing: border-box;
  pointer-events: none;
  -webkit-clip-path: polygon(0 0, 100% 0, 100% 94%, 94% 94%, 94% 100%, 0 100%);
          clip-path: polygon(0 0, 100% 0, 100% 94%, 94% 94%, 94% 100%, 0 100%);
}
.root-SR8cQa .header-QKLPzZ .wrapper-3t9DeA::after {
  content: "";
  position: fixed;
  top: 40px;
  left: 0;
  width: 234px;
  height: 80%;
  z-index: -1;
  opacity: 0.5;
  pointer-events: none;
  border-left: 1px solid var(--base-border);
  border-right: 1px solid var(--base-border);
  box-sizing: border-box;
  background: var(--user-background) center/cover no-repeat;
  -webkit-mask: linear-gradient(black, transparent 80%);
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT {
  position: relative;
  flex: 1;
  padding: 0;
  margin-bottom: var(--spacing-double);
  display: block;
  width: 100%;
  z-index: 101;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT:last-child {
  margin: 0;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .nameTag-2IFDfL {
  margin: 0;
  flex-direction: column;
  align-items: flex-start;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .nameTag-2IFDfL .username-3gJmXY {
  font-size: var(--font-size-md);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .nameTag-2IFDfL .discriminator-xUhQkU {
  opacity: 1;
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  color: var(--text-muted);
  line-height: normal;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb {
  margin: 0;
  margin-bottom: auto;
  padding: 0;
  box-sizing: border-box;
  display: block;
  order: 1;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb::before {
  content: "";
  width: 100%;
  box-sizing: border-box;
  height: 1px;
  border-top: 1px solid var(--base-border);
  display: block;
  position: relative;
  margin: var(--spacing) 0;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp {
  margin: 0;
  margin-top: var(--spacing);
  color: var(--text-muted) !important;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp.powercord-badge .profileBadge-2niAfJ {
  background: transparent;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp div[aria-label] {
  display: flex;
  align-items: center;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp div[aria-label]::after {
  content: attr(aria-label);
  margin-left: var(--spacing-half);
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  max-width: 100%;
  white-space: nowrap;
  text-overflow: ellipsis;
  overflow: hidden;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ {
  width: 18px;
  height: 18px;
  background: var(--text-muted);
  cursor: var(--cursor);
  pointer-events: all;
  -webkit-mask-size: contain;
  -webkit-mask-position: center;
  -webkit-mask-repeat: no-repeat;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgePremium-1KDZYC {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M11.2 3c-.52-.63-1.25-.95-2.2-1-.97 0-1.69.42-2.2 1-.51.58-.78.92-.8 1-.02-.08-.28-.42-.8-1-.52-.58-1.17-1-2.2-1-.95.05-1.69.38-2.2 1-.52.61-.78 1.28-.8 2 0 .52.09 1.52.67 2.67C1.25 8.82 3.01 10.61 6 13c2.98-2.39 4.77-4.17 5.34-5.33C11.91 6.51 12 5.5 12 5c-.02-.72-.28-1.39-.8-2.02V3z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl1-3oI9tx, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl2-r6nJHT, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl3-38s3Dj, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl4-2NXrsI, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl5-3XIa2K, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl6-3e3sxW, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl7-1dVhQT, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl8-1kXdFr, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileGuildSubscriberlvl9-1d6zav {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12.17 3.83c-.27-.27-.47-.55-.63-.88-.16-.31-.27-.66-.34-1.02-.58.33-1.16.7-1.73 1.13-.58.44-1.14.94-1.69 1.48-.7.7-1.33 1.81-1.78 2.45H3L0 10h3l2-2c-.34.77-1.02 2.98-1 3l1 1c.02.02 2.23-.64 3-1l-2 2v3l3-3v-3c.64-.45 1.75-1.09 2.45-1.78.55-.55 1.05-1.13 1.47-1.7.44-.58.81-1.16 1.14-1.72-.36-.08-.7-.19-1.03-.34a3.39 3.39 0 0 1-.86-.63zM16 0s-.09.38-.3 1.06c-.2.7-.55 1.58-1.06 2.66-.7-.08-1.27-.33-1.66-.72-.39-.39-.63-.94-.7-1.64C13.36.84 14.23.48 14.92.28 15.62.08 16 0 16 0z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeEarlySupporter-2ng_jL, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-early {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M7.59 9l3 6h-1l-2-4v5h-1v-6l-2 5h-1l2-5 2-1zm-1-9h-1v1h1V0zm-2 3h-1v1h1V3zm-3-2h-1v1h1V1zM.22 9a.52.52 0 0 0-.16.67l.55.92c.13.23.41.31.64.2l1.39-.66-1.16-2-1.27.86.01.01zm7.89-5.39l-5.8 3.95L3.54 9.7l6.33-3.03L8.1 3.61h.01zm4.22 1.28l-1.47-2.52a.51.51 0 0 0-.72-.17l-1.2.83 1.84 3.2 1.33-.64c.27-.13.36-.44.22-.7z"/></svg>');
  background: var(--text-muted);
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeEarlySupporter-2ng_jL path, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-early path {
  display: none;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeVerifiedDeveloper-4WY75k, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeVerifiedDeveloper-195KfD {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" height="24" viewBox="0 0 24 24" width="24"><path d="M0 0h24v24H0V0z" fill="none"/><path d="M9.4 16.6L4.8 12l4.6-4.6L8 6l-6 6 6 6 1.4-1.4zm5.2 0l4.6-4.6-4.6-4.6L16 6l6 6-6 6-1.4-1.4z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeHypesquad-12E2P6 {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M10 1c-.17 0-.36.05-.52.14C8.04 2.02 4.5 4.58 3 5c-1.38 0-3 .67-3 2.5S1.63 10 3 10c.3.08.64.23 1 .41V15h2v-3.45c1.34.86 2.69 1.83 3.48 2.31.16.09.34.14.52.14.52 0 1-.42 1-1V2c0-.58-.48-1-1-1zm0 12c-.38-.23-.89-.58-1.5-1-.16-.11-.33-.22-.5-.34V3.31c.16-.11.31-.2.47-.31.61-.41 1.16-.77 1.53-1v11zm2-6h4v1h-4V7zm0 2l4 2v1l-4-2V9zm4-6v1l-4 2V5l4-2z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeHypeSquadOnlineHouse1-3rBtjf, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeHypeSquadOnlineHouse1Winner-3wCl80 {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M5.05.01c.81 2.17.41 3.38-.52 4.31C3.55 5.37 1.98 6.15.9 7.68c-1.45 2.05-1.7 6.53 3.53 7.7-2.2-1.16-2.67-4.52-.3-6.61-.61 2.03.53 3.33 1.94 2.86 1.39-.47 2.3.53 2.27 1.67-.02.78-.31 1.44-1.13 1.81 3.42-.59 4.78-3.42 4.78-5.56 0-2.84-2.53-3.22-1.25-5.61-1.52.13-2.03 1.13-1.89 2.75.09 1.08-1.02 1.8-1.86 1.33-.67-.41-.66-1.19-.06-1.78C8.18 5.01 8.68 2.15 5.05.02L5.03 0l.02.01z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeHypeSquadOnlineHouse2-2oU04B, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeHypeSquadOnlineHouse2Winner-AS5bXe {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 10 16" width="40" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M10 7H6l3-7-9 9h4l-3 7 9-9z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeHypeSquadOnlineHouse3-1DoJkv, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeHypeSquadOnlineHouse3Winner-2CwwQi {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M7 4c-.83 0-1.5-.67-1.5-1.5S6.17 1 7 1s1.5.67 1.5 1.5S7.83 4 7 4zm7 6c0 1.11-.89 2-2 2h-1c-1.11 0-2-.89-2-2l2-4h-1c-.55 0-1-.45-1-1H8v8c.42 0 1 .45 1 1h1c.42 0 1 .45 1 1H3c0-.55.58-1 1-1h1c0-.55.58-1 1-1h.03L6 5H5c0 .55-.45 1-1 1H3l2 4c0 1.11-.89 2-2 2H2c-1.11 0-2-.89-2-2l2-4H1V5h3c0-.55.45-1 1-1h4c.55 0 1 .45 1 1h3v1h-1l2 4zM2.5 7L1 10h3L2.5 7zM13 10l-1.5-3-1.5 3h3z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgePartner-j6Lwhr {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"/></svg>');
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeStaff-3BXdTO, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-staff {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M4.48 7.27c.26.26 1.28 1.33 1.28 1.33l.56-.58-.88-.91 1.69-1.8s-.76-.74-.43-.45c.32-1.19.03-2.51-.87-3.44C4.93.5 3.66.2 2.52.51l1.93 2-.51 1.96-1.89.52-1.93-2C-.19 4.17.1 5.48 1 6.4c.94.98 2.29 1.26 3.48.87zm6.44 1.94l-2.33 2.3 3.84 3.98c.31.33.73.49 1.14.49.41 0 .82-.16 1.14-.49.63-.65.63-1.7 0-2.35l-3.79-3.93zM16 2.53L13.55 0 6.33 7.46l.88.91-4.31 4.46-.99.53-1.39 2.27.35.37 2.2-1.44.51-1.02L7.9 9.08l.88.91L16 2.53z"/></svg>');
  background: var(--text-muted);
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeStaff-3BXdTO path, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-staff path {
  display: none;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeBugHunterLevel1-dbEzVz, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeBugHunterLevel2-3TUciC, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-hunter {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M11.17 10h3V9h-3V8l3.17-1.03-.34-.94-2.83.97V6c0-.55-.45-1-1-1V4c0-.48-.36-.88-.83-.97L10.37 2h1.8V1h-2.2l-2 2h-.59L5.37 1h-2.2v1h1.8L6 3.03c-.47.09-.83.48-.83.97v1c-.55 0-1 .45-1 1v1l-2.83-.97-.34.94L4.17 8v1h-3v1h3v1L1 12.03l.34.94L4.17 12v1c0 .55.45 1 1 1h1l1-1V6h1v7l1 1h1c.55 0 1-.45 1-1v-1l2.83.97.34-.94L11.17 11v-1zm-2-5h-3V4h3v1z"/></svg>');
  background: var(--text-muted);
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeBugHunterLevel1-dbEzVz path, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.profileBadgeBugHunterLevel2-3TUciC path, .root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-hunter path {
  display: none;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-developer {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M14 6V5h-4V3H8v1H6c-1.03 0-1.77.81-2 2L3 7c-1.66 0-3 1.34-3 3v2h1v-2c0-1.11.89-2 2-2l1 1c.25 1.16.98 2 2 2h2v1h2v-2h4V9h-4V6h4z"/></svg>');
  background: var(--text-muted);
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-developer path {
  display: none;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-translator {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M7 1C3.14 1 0 4.14 0 8s3.14 7 7 7c.48 0 .94-.05 1.38-.14-.17-.08-.2-.73-.02-1.09.19-.41.81-1.45.2-1.8-.61-.35-.44-.5-.81-.91-.37-.41-.22-.47-.25-.58-.08-.34.36-.89.39-.94.02-.06.02-.27 0-.33 0-.08-.27-.22-.34-.23-.06 0-.11.11-.2.13-.09.02-.5-.25-.59-.33-.09-.08-.14-.23-.27-.34-.13-.13-.14-.03-.33-.11s-.8-.31-1.28-.48c-.48-.19-.52-.47-.52-.66-.02-.2-.3-.47-.42-.67-.14-.2-.16-.47-.2-.41-.04.06.25.78.2.81-.05.02-.16-.2-.3-.38-.14-.19.14-.09-.3-.95s.14-1.3.17-1.75c.03-.45.38.17.19-.13-.19-.3 0-.89-.14-1.11-.13-.22-.88.25-.88.25.02-.22.69-.58 1.16-.92.47-.34.78-.06 1.16.05.39.13.41.09.28-.05-.13-.13.06-.17.36-.13.28.05.38.41.83.36.47-.03.05.09.11.22s-.06.11-.38.3c-.3.2.02.22.55.61s.38-.25.31-.55c-.07-.3.39-.06.39-.06.33.22.27.02.5.08.23.06.91.64.91.64-.83.44-.31.48-.17.59.14.11-.28.3-.28.3-.17-.17-.19.02-.3.08-.11.06-.02.22-.02.22-.56.09-.44.69-.42.83 0 .14-.38.36-.47.58-.09.2.25.64.06.66-.19.03-.34-.66-1.31-.41-.3.08-.94.41-.59 1.08.36.69.92-.19 1.11-.09.19.1-.06.53-.02.55.04.02.53.02.56.61.03.59.77.53.92.55.17 0 .7-.44.77-.45.06-.03.38-.28 1.03.09.66.36.98.31 1.2.47.22.16.08.47.28.58.2.11 1.06-.03 1.28.31.22.34-.88 2.09-1.22 2.28-.34.19-.48.64-.84.92s-.81.64-1.27.91c-.41.23-.47.66-.66.8 3.14-.7 5.48-3.5 5.48-6.84 0-3.86-3.14-7-7-7L7 1zm1.64 6.56c-.09.03-.28.22-.78-.08-.48-.3-.81-.23-.86-.28 0 0-.05-.11.17-.14.44-.05.98.41 1.11.41.13 0 .19-.13.41-.05.22.08.05.13-.05.14zM6.34 1.7c-.05-.03.03-.08.09-.14.03-.03.02-.11.05-.14.11-.11.61-.25.52.03-.11.27-.58.3-.66.25zm1.23.89c-.19-.02-.58-.05-.52-.14.3-.28-.09-.38-.34-.38-.25-.02-.34-.16-.22-.19.12-.03.61.02.7.08.08.06.52.25.55.38.02.13 0 .25-.17.25zm1.47-.05c-.14.09-.83-.41-.95-.52-.56-.48-.89-.31-1-.41-.11-.1-.08-.19.11-.34.19-.15.69.06 1 .09.3.03.66.27.66.55.02.25.33.5.19.63h-.01z"/></svg>');
  background: var(--text-muted);
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT .profileBadges-2vWUYb .profileBadgeWrapper-1rGSsp .profileBadge-2niAfJ.powercord-badge-translator path {
  display: none;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + div[role=button],
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + button + div[role=button] {
  display: inline-block;
  float: right;
  position: relative;
  z-index: 101;
  width: 32px;
  height: var(--input-height);
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
  box-sizing: border-box;
  border-radius: var(--button-border-radius);
  cursor: var(--cursor);
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + div[role=button]:after,
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + button + div[role=button]:after {
  content: "";
  color: inherit;
  background: currentColor;
  position: absolute;
  width: 100%;
  height: 100%;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 13 16" width="52" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zm5 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zM13 7.5a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0z"/></svg>') center/var(--font-size) no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 13 16" width="52" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zm5 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zM13 7.5a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0z"/></svg>') center/var(--font-size) no-repeat;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + div[role=button]:hover,
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + button + div[role=button]:hover {
  border: 1px solid currentColor;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + div[role=button]:focus,
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + button + div[role=button]:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + div[role=button] svg,
.root-SR8cQa .header-QKLPzZ .headerInfo-30uryT + button + div[role=button] svg {
  display: none;
}
.root-SR8cQa .header-QKLPzZ button {
  margin-left: 0 !important;
  margin-right: var(--spacing);
  width: calc(100% - var(--spacing) - 32px);
  position: relative;
  z-index: 101;
  display: inline-block;
  float: left;
}
.root-SR8cQa .header-QKLPzZ + div[class] {
  order: -1;
  border-left: 1px solid var(--base-border);
}
.root-SR8cQa .header-QKLPzZ + div[class]:after {
  content: "Your Profile";
  position: absolute;
  box-sizing: border-box;
  top: 0;
  left: 0;
  width: 234px;
  display: flex;
  align-items: center;
  justify-content: center;
  border-right: 1px solid var(--base-border);
  height: 40px;
  padding: 0 var(--spacing);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal) !important;
  box-shadow: inset 0 -3px 0px var(--accent-solid);
}
.root-SR8cQa .header-QKLPzZ + div[class]:before {
  content: "";
  position: absolute;
  box-sizing: border-box;
  top: 0;
  left: 0;
  width: 100%;
  display: flex;
  align-items: center;
  background: var(--background-dark);
  border-bottom: 1px solid var(--base-border);
  border-top: none;
  border-radius: var(--border-radius) var(--border-radius) 0 0;
  border: 1px solid var(--base-border);
  height: 40px;
  overflow: hidden;
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z {
  order: -1;
  z-index: 1;
  position: absolute;
  box-sizing: border-box;
  top: 0;
  left: 0;
  padding: 0;
  width: 100%;
  display: flex;
  flex-direction: column;
  background: var(--background-dark);
  border-top: none;
  border-radius: var(--border-radius) var(--border-radius) 0 0;
  height: auto;
  overflow: hidden;
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- {
  height: auto;
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ {
  margin: 0;
  width: calc(100% / 3);
  padding: 0 var(--spacing);
  text-align: center;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-normal) !important;
  display: flex;
  flex-grow: 1;
  justify-content: center;
  border: none !important;
  border-left: 1px solid var(--base-border) !important;
  border-bottom: 1px solid var(--base-border) !important;
  border-top: 1px solid var(--base-border) !important;
  box-sizing: border-box;
  height: 40px;
  cursor: var(--cursor);
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ:hover {
  background: var(--background);
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ:first-child {
  border-top-left-radius: var(--border-radius);
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ:last-child {
  border-top-right-radius: var(--border-radius);
  border-right: 1px solid var(--base-border) !important;
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ:only-child {
  width: 234px;
  flex-grow: 0;
  border: 1px solid transparent !important;
  border-right-color: var(--base-border) !important;
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ:only-child:after {
  content: "";
  position: fixed;
  top: 0;
  left: 0;
  width: 100%;
  height: 40px;
  border: 1px solid var(--base-border);
  box-sizing: border-box;
  border-radius: var(--border-radius) var(--border-radius) 0 0;
}
.root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ.selected-3s45Ha, .root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .tabBar-2MuP6- .item-PXvHYJ[style*="rgb(255, 255, 255)"] {
  box-shadow: inset 0 -3px 0px var(--accent-solid);
  background: transparent !important;
  color: var(--text-normal) !important;
}
.root-SR8cQa .body-3ND3kc {
  position: absolute;
  left: 234px;
  width: calc(100% - 235px);
  height: calc(100% - 41px);
  background: var(--background-alt);
  border-right: 1px solid var(--base-border);
  border-bottom: 1px solid var(--base-border);
  border-bottom-right-radius: var(--border-radius);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo {
  padding: 0;
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .empty-2WtT5s {
  padding: var(--spacing-double);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .empty-2WtT5s .emptyIcon-pGTAhd {
  width: 124px;
  height: 124px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
          mask: url("https://discordstyles.github.io/Slate/assets/illustrations/8.svg") center/contain no-repeat;
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .empty-2WtT5s .emptyText-6tYmO5 {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  margin-top: var(--spacing);
  text-transform: none;
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_ {
  margin: 0;
  padding: 0 var(--spacing);
  margin: 0;
  border-radius: 0;
  cursor: var(--cursor);
  line-height: normal;
  color: var(--text-normal);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_:hover {
  background: var(--background-modifier-hover);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_:active {
  background: var(--background-modifier-active);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_ .iconSizeMedium-2OqPjI {
  margin-right: var(--spacing-half);
  width: var(--avatar-size-sm);
  height: var(--avatar-size-sm);
  border-radius: var(--avatar-radius);
  box-sizing: border-box;
  border: 1px solid var(--base-border);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_ .listRowContent-3Kih4Q {
  display: flex;
  align-items: center;
  height: var(--item-height);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_ .listRowContent-3Kih4Q .listName-3w10cx {
  line-height: normal;
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_ .listRowContent-3Kih4Q .guildNick-3uAm3i {
  font-size: var(--font-size-sm);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
}
.root-SR8cQa .body-3ND3kc .listScroller-2_vlfo .listRow-hutiT_ .listRowContent-3Kih4Q .guildNick-3uAm3i:not(:empty)::before {
  content: "-";
  margin: 0 var(--spacing-third);
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns {
  padding: var(--spacing-double) !important;
  box-sizing: border-box;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx {
  padding: 0;
  margin-bottom: var(--spacing);
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .userInfoSectionHeader-CBvMDh {
  color: var(--text-normal);
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
  text-transform: none;
  margin-bottom: var(--spacing-half);
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .note-QfFU8y {
  margin: 0;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx + .userInfoSection-2acyCx {
  border: none;
  margin: 0;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx + .userInfoSection-2acyCx::before {
  content: "Connections";
  color: var(--text-normal);
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
  margin-bottom: var(--spacing-half);
  display: block;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS {
  margin: 0;
  display: block;
  column-count: 2;
  column-gap: var(--spacing);
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 {
  width: unset;
  margin: 0;
  background: var(--background-light);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  padding: var(--spacing);
  position: relative;
  overflow: hidden;
  display: flex;
  flex-wrap: wrap;
  height: auto;
  break-inside: avoid;
  break-after: always;
  margin-bottom: var(--spacing);
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 .connectedAccountName-f8AEe2 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
  color: var(--text-normal);
  margin: 0;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 .connectedAccountName-f8AEe2 + span {
  display: none;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img {
  display: inline-block;
  width: 16px;
  height: 16px;
  content: url('data:image/svg+xml,<svg xmlns="http://www.w3.org/2000/svg"/>');
  background: var(--text-normal);
  -webkit-mask-position: center;
          mask-position: center;
  -webkit-mask-size: contain;
          mask-size: contain;
  -webkit-mask-repeat: no-repeat;
          mask-repeat: no-repeat;
  margin-right: var(--spacing);
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Battle.net Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 50 50" version="1.1"><path d="M43.113 22.152s3.946.2 3.946-2.12c0-3.036-5.254-5.77-5.254-5.77s.824-1.746 1.336-2.723c.515-.976 1.96-4.785 2.09-5.652.164-1.094-.086-1.438-.086-1.438-.356 2.344-4.172 9.09-4.473 9.32-3.723-1.746-8.836-2.23-8.836-2.23S26.832 1 22.125 1c-4.668 0-4.645 9.023-4.645 9.023s-1.32-2.558-2.972-2.558c-2.422 0-3.215 3.664-3.215 7.633-4.781 0-8.8 1.066-9.16 1.168-.36.105-1.488.925-.977.824 1.047-.336 5.957-1.098 10.254-.723.238 3.774 2.442 8.688 2.442 8.688s-4.723 6.84-4.723 11.726c0 1.285.559 3.637 3.95 3.637 2.839 0 6.026-1.707 6.628-2.055-.523.75-.91 2.172-.91 2.828 0 .536.316 2.055 2.508 2.055 2.812 0 5.953-2.156 5.953-2.156s2.965 4.93 5.504 7.191c.683.61 1.336.719 1.336.719s-2.52-2.426-5.84-8.676c3.086-1.906 6.297-6.402 6.297-6.402s.379.012 3.308.012c4.59 0 11.11-.965 11.11-4.614 0-3.765-5.86-7.168-5.86-7.168zm.512-2.265c0 1.332-1.266 1.312-1.266 1.312l-.964.067s-1.829-.961-2.934-1.41c0 0 1.715-2.649 2.117-3.387.305.176 3.047 1.894 3.047 3.418zM24.422 6.309c2.156 0 5.234 5.093 5.234 5.093s-4.804-.43-8.758 1.895c.106-3.668 1.34-6.988 3.524-6.988zm-8.55 4.128c.687 0 1.358.833 1.636 1.54 0 .468.242 3.195.242 3.195l-3.96-.149c0-3.574 1.398-4.585 2.081-4.585zm-.407 24.81c-2.164 0-2.613-1.208-2.613-2.294 0-2.457 1.96-5.894 1.96-5.894s2.2 4.625 6.04 6.578c-1.907 1.117-3.477 1.61-5.387 1.61zm7.027 4.843c-1.52 0-1.703-.985-1.703-1.211 0-.707.55-1.543.55-1.543s2.552-1.723 2.716-1.906l1.883 3.515s-1.93 1.145-3.446 1.145zm4.735-1.918c-.926-1.617-1.606-3.305-1.606-3.305s3.793.246 5.832-1.86c-1.27.571-3.297 1.294-5.652 1.075 4.926-4.34 7.8-7.484 10.23-10.738-.207-.25-1.32-1.028-1.593-1.157-1.465 1.766-7.172 7.868-12.454 10.887-6.691-3.648-8.093-14.383-8.238-16.613l3.656.352s-1.375 2.433-1.375 4.226c0 1.79.215 1.887.215 1.887s-.047-3.125 1.883-5.535c1.469 7.82 3 11.828 4.195 14.214.606-.25 1.739-.753 1.739-.753s-3.375-9.73-3.188-16.317c1.531-.816 3.797-1.66 6.356-1.66 6.73 0 12.14 2.898 12.14 2.898L37.25 18.73s-1.887-3.418-4.55-4.027c1.405 1.05 2.98 2.434 3.796 4.426-5.578-2.18-12.309-3.332-14.469-3.586-.187.797-.164 1.937-.164 1.937s9.028 1.665 15.598 5.426c-.047 8.219-9 14.532-10.234 15.266zm8.55-6.145s2.801-3.68 2.758-8.55c0 0 4.528 2.804 4.528 5.539 0 3.058-7.286 3.011-7.286 3.011z" id="surface1"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 50 50" version="1.1"><path d="M43.113 22.152s3.946.2 3.946-2.12c0-3.036-5.254-5.77-5.254-5.77s.824-1.746 1.336-2.723c.515-.976 1.96-4.785 2.09-5.652.164-1.094-.086-1.438-.086-1.438-.356 2.344-4.172 9.09-4.473 9.32-3.723-1.746-8.836-2.23-8.836-2.23S26.832 1 22.125 1c-4.668 0-4.645 9.023-4.645 9.023s-1.32-2.558-2.972-2.558c-2.422 0-3.215 3.664-3.215 7.633-4.781 0-8.8 1.066-9.16 1.168-.36.105-1.488.925-.977.824 1.047-.336 5.957-1.098 10.254-.723.238 3.774 2.442 8.688 2.442 8.688s-4.723 6.84-4.723 11.726c0 1.285.559 3.637 3.95 3.637 2.839 0 6.026-1.707 6.628-2.055-.523.75-.91 2.172-.91 2.828 0 .536.316 2.055 2.508 2.055 2.812 0 5.953-2.156 5.953-2.156s2.965 4.93 5.504 7.191c.683.61 1.336.719 1.336.719s-2.52-2.426-5.84-8.676c3.086-1.906 6.297-6.402 6.297-6.402s.379.012 3.308.012c4.59 0 11.11-.965 11.11-4.614 0-3.765-5.86-7.168-5.86-7.168zm.512-2.265c0 1.332-1.266 1.312-1.266 1.312l-.964.067s-1.829-.961-2.934-1.41c0 0 1.715-2.649 2.117-3.387.305.176 3.047 1.894 3.047 3.418zM24.422 6.309c2.156 0 5.234 5.093 5.234 5.093s-4.804-.43-8.758 1.895c.106-3.668 1.34-6.988 3.524-6.988zm-8.55 4.128c.687 0 1.358.833 1.636 1.54 0 .468.242 3.195.242 3.195l-3.96-.149c0-3.574 1.398-4.585 2.081-4.585zm-.407 24.81c-2.164 0-2.613-1.208-2.613-2.294 0-2.457 1.96-5.894 1.96-5.894s2.2 4.625 6.04 6.578c-1.907 1.117-3.477 1.61-5.387 1.61zm7.027 4.843c-1.52 0-1.703-.985-1.703-1.211 0-.707.55-1.543.55-1.543s2.552-1.723 2.716-1.906l1.883 3.515s-1.93 1.145-3.446 1.145zm4.735-1.918c-.926-1.617-1.606-3.305-1.606-3.305s3.793.246 5.832-1.86c-1.27.571-3.297 1.294-5.652 1.075 4.926-4.34 7.8-7.484 10.23-10.738-.207-.25-1.32-1.028-1.593-1.157-1.465 1.766-7.172 7.868-12.454 10.887-6.691-3.648-8.093-14.383-8.238-16.613l3.656.352s-1.375 2.433-1.375 4.226c0 1.79.215 1.887.215 1.887s-.047-3.125 1.883-5.535c1.469 7.82 3 11.828 4.195 14.214.606-.25 1.739-.753 1.739-.753s-3.375-9.73-3.188-16.317c1.531-.816 3.797-1.66 6.356-1.66 6.73 0 12.14 2.898 12.14 2.898L37.25 18.73s-1.887-3.418-4.55-4.027c1.405 1.05 2.98 2.434 3.796 4.426-5.578-2.18-12.309-3.332-14.469-3.586-.187.797-.164 1.937-.164 1.937s9.028 1.665 15.598 5.426c-.047 8.219-9 14.532-10.234 15.266zm8.55-6.145s2.801-3.68 2.758-8.55c0 0 4.528 2.804 4.528 5.539 0 3.058-7.286 3.011-7.286 3.011z" id="surface1"/></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Steam Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256px" height="259px" viewBox="0 0 256 259" version="1.1" preserveAspectRatio="xMidYMid"><path d="M127.778579,0 C60.4203546,0 5.24030561,52.412282 0,119.013983 L68.7236558,147.68805 C74.5451924,143.665561 81.5845466,141.322185 89.1497766,141.322185 C89.8324924,141.322185 90.5059824,141.340637 91.1702465,141.377541 L121.735621,96.668877 L121.735621,96.0415165 C121.735621,69.1388208 143.425688,47.2457835 170.088511,47.2457835 C196.751333,47.2457835 218.441401,69.1388208 218.441401,96.0415165 C218.441401,122.944212 196.751333,144.846475 170.088511,144.846475 C169.719475,144.846475 169.359666,144.83725 168.99063,144.828024 L125.398299,176.205276 C125.425977,176.786507 125.444428,177.367738 125.444428,177.939743 C125.444428,198.144443 109.160732,214.575753 89.1497766,214.575753 C71.5836817,214.575753 56.8868387,201.917832 53.5655182,185.163615 L4.40997549,164.654462 C19.6326942,218.967277 69.0834655,258.786219 127.778579,258.786219 C198.596511,258.786219 256,200.847629 256,129.393109 C256,57.9293643 198.596511,0 127.778579,0 Z M80.3519677,196.332478 L64.6033732,189.763644 C67.389592,195.63131 72.2239585,200.539484 78.6359521,203.233444 C92.4932392,209.064206 108.472481,202.430791 114.247888,188.435116 C117.043333,181.663313 117.061785,174.190342 114.294018,167.400086 C111.526251,160.609831 106.295171,155.31417 99.5879487,152.491048 C92.9176301,149.695603 85.7767911,149.797088 79.5031858,152.186594 L95.777656,158.976849 C105.999942,163.276114 110.834309,175.122157 106.571948,185.436702 C102.318812,195.751247 90.574254,200.631743 80.3519677,196.332478 Z M202.30901,96.0424391 C202.30901,78.1165345 187.85204,63.5211763 170.092201,63.5211763 C152.323137,63.5211763 137.866167,78.1165345 137.866167,96.0424391 C137.866167,113.968344 152.323137,128.554476 170.092201,128.554476 C187.85204,128.554476 202.30901,113.968344 202.30901,96.0424391 Z M145.938821,95.9870838 C145.938821,82.4988323 156.779242,71.5661525 170.138331,71.5661525 C183.506646,71.5661525 194.347066,82.4988323 194.347066,95.9870838 C194.347066,109.475335 183.506646,120.408015 170.138331,120.408015 C156.779242,120.408015 145.938821,109.475335 145.938821,95.9870838 Z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256px" height="259px" viewBox="0 0 256 259" version="1.1" preserveAspectRatio="xMidYMid"><path d="M127.778579,0 C60.4203546,0 5.24030561,52.412282 0,119.013983 L68.7236558,147.68805 C74.5451924,143.665561 81.5845466,141.322185 89.1497766,141.322185 C89.8324924,141.322185 90.5059824,141.340637 91.1702465,141.377541 L121.735621,96.668877 L121.735621,96.0415165 C121.735621,69.1388208 143.425688,47.2457835 170.088511,47.2457835 C196.751333,47.2457835 218.441401,69.1388208 218.441401,96.0415165 C218.441401,122.944212 196.751333,144.846475 170.088511,144.846475 C169.719475,144.846475 169.359666,144.83725 168.99063,144.828024 L125.398299,176.205276 C125.425977,176.786507 125.444428,177.367738 125.444428,177.939743 C125.444428,198.144443 109.160732,214.575753 89.1497766,214.575753 C71.5836817,214.575753 56.8868387,201.917832 53.5655182,185.163615 L4.40997549,164.654462 C19.6326942,218.967277 69.0834655,258.786219 127.778579,258.786219 C198.596511,258.786219 256,200.847629 256,129.393109 C256,57.9293643 198.596511,0 127.778579,0 Z M80.3519677,196.332478 L64.6033732,189.763644 C67.389592,195.63131 72.2239585,200.539484 78.6359521,203.233444 C92.4932392,209.064206 108.472481,202.430791 114.247888,188.435116 C117.043333,181.663313 117.061785,174.190342 114.294018,167.400086 C111.526251,160.609831 106.295171,155.31417 99.5879487,152.491048 C92.9176301,149.695603 85.7767911,149.797088 79.5031858,152.186594 L95.777656,158.976849 C105.999942,163.276114 110.834309,175.122157 106.571948,185.436702 C102.318812,195.751247 90.574254,200.631743 80.3519677,196.332478 Z M202.30901,96.0424391 C202.30901,78.1165345 187.85204,63.5211763 170.092201,63.5211763 C152.323137,63.5211763 137.866167,78.1165345 137.866167,96.0424391 C137.866167,113.968344 152.323137,128.554476 170.092201,128.554476 C187.85204,128.554476 202.30901,113.968344 202.30901,96.0424391 Z M145.938821,95.9870838 C145.938821,82.4988323 156.779242,71.5661525 170.138331,71.5661525 C183.506646,71.5661525 194.347066,82.4988323 194.347066,95.9870838 C194.347066,109.475335 183.506646,120.408015 170.138331,120.408015 C156.779242,120.408015 145.938821,109.475335 145.938821,95.9870838 Z"/></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Facebook Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M22.675 0h-21.35c-.732 0-1.325.593-1.325 1.325v21.351c0 .731.593 1.324 1.325 1.324h11.495v-9.294h-3.128v-3.622h3.128v-2.671c0-3.1 1.893-4.788 4.659-4.788 1.325 0 2.463.099 2.795.143v3.24l-1.918.001c-1.504 0-1.795.715-1.795 1.763v2.313h3.587l-.467 3.622h-3.12v9.293h6.116c.73 0 1.323-.593 1.323-1.325v-21.35c0-.732-.593-1.325-1.325-1.325z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M22.675 0h-21.35c-.732 0-1.325.593-1.325 1.325v21.351c0 .731.593 1.324 1.325 1.324h11.495v-9.294h-3.128v-3.622h3.128v-2.671c0-3.1 1.893-4.788 4.659-4.788 1.325 0 2.463.099 2.795.143v3.24l-1.918.001c-1.504 0-1.795.715-1.795 1.763v2.313h3.587l-.467 3.622h-3.12v9.293h6.116c.73 0 1.323-.593 1.323-1.325v-21.35c0-.732-.593-1.325-1.325-1.325z"/></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Twitch Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M2.149 0l-1.612 4.119v16.836h5.731v3.045h3.224l3.045-3.045h4.657l6.269-6.269v-14.686h-21.314zm19.164 13.612l-3.582 3.582h-5.731l-3.045 3.045v-3.045h-4.836v-15.045h17.194v11.463zm-3.582-7.343v6.262h-2.149v-6.262h2.149zm-5.731 0v6.262h-2.149v-6.262h2.149z" fill-rule="evenodd" clip-rule="evenodd"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M2.149 0l-1.612 4.119v16.836h5.731v3.045h3.224l3.045-3.045h4.657l6.269-6.269v-14.686h-21.314zm19.164 13.612l-3.582 3.582h-5.731l-3.045 3.045v-3.045h-4.836v-15.045h17.194v11.463zm-3.582-7.343v6.262h-2.149v-6.262h2.149zm-5.731 0v6.262h-2.149v-6.262h2.149z" fill-rule="evenodd" clip-rule="evenodd"/></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Github Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 16 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0016 8c0-4.42-3.58-8-8-8z"></path></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Twitter Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" x="0px" y="0px" viewBox="0 0 400 400" style="enable-background:new 0 0 400 400;" xml:space="preserve"><g><path class="st1" d="M153.6,301.6c94.3,0,145.9-78.2,145.9-145.9c0-2.2,0-4.4-0.1-6.6c10-7.2,18.7-16.3,25.6-26.6 c-9.2,4.1-19.1,6.8-29.5,8.1c10.6-6.3,18.7-16.4,22.6-28.4c-9.9,5.9-20.9,10.1-32.6,12.4c-9.4-10-22.7-16.2-37.4-16.2 c-28.3,0-51.3,23-51.3,51.3c0,4,0.5,7.9,1.3,11.7c-42.6-2.1-80.4-22.6-105.7-53.6c-4.4,7.6-6.9,16.4-6.9,25.8 c0,17.8,9.1,33.5,22.8,42.7c-8.4-0.3-16.3-2.6-23.2-6.4c0,0.2,0,0.4,0,0.7c0,24.8,17.7,45.6,41.1,50.3c-4.3,1.2-8.8,1.8-13.5,1.8 c-3.3,0-6.5-0.3-9.6-0.9c6.5,20.4,25.5,35.2,47.9,35.6c-17.6,13.8-39.7,22-63.7,22c-4.1,0-8.2-0.2-12.2-0.7 C97.7,293.1,124.7,301.6,153.6,301.6"/></g></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" x="0px" y="0px" viewBox="0 0 400 400" style="enable-background:new 0 0 400 400;" xml:space="preserve"><g><path class="st1" d="M153.6,301.6c94.3,0,145.9-78.2,145.9-145.9c0-2.2,0-4.4-0.1-6.6c10-7.2,18.7-16.3,25.6-26.6 c-9.2,4.1-19.1,6.8-29.5,8.1c10.6-6.3,18.7-16.4,22.6-28.4c-9.9,5.9-20.9,10.1-32.6,12.4c-9.4-10-22.7-16.2-37.4-16.2 c-28.3,0-51.3,23-51.3,51.3c0,4,0.5,7.9,1.3,11.7c-42.6-2.1-80.4-22.6-105.7-53.6c-4.4,7.6-6.9,16.4-6.9,25.8 c0,17.8,9.1,33.5,22.8,42.7c-8.4-0.3-16.3-2.6-23.2-6.4c0,0.2,0,0.4,0,0.7c0,24.8,17.7,45.6,41.1,50.3c-4.3,1.2-8.8,1.8-13.5,1.8 c-3.3,0-6.5-0.3-9.6-0.9c6.5,20.4,25.5,35.2,47.9,35.6c-17.6,13.8-39.7,22-63.7,22c-4.1,0-8.2-0.2-12.2-0.7 C97.7,293.1,124.7,301.6,153.6,301.6"/></g></svg>');
  -webkit-mask-size: 125%;
          mask-size: 125%;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Reddit Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M14.238 15.348c.085.084.085.221 0 .306-.465.462-1.194.687-2.231.687l-.008-.002-.008.002c-1.036 0-1.766-.225-2.231-.688-.085-.084-.085-.221 0-.305.084-.084.222-.084.307 0 .379.377 1.008.561 1.924.561l.008.002.008-.002c.915 0 1.544-.184 1.924-.561.085-.084.223-.084.307 0zm-3.44-2.418c0-.507-.414-.919-.922-.919-.509 0-.923.412-.923.919 0 .506.414.918.923.918.508.001.922-.411.922-.918zm13.202-.93c0 6.627-5.373 12-12 12s-12-5.373-12-12 5.373-12 12-12 12 5.373 12 12zm-5-.129c0-.851-.695-1.543-1.55-1.543-.417 0-.795.167-1.074.435-1.056-.695-2.485-1.137-4.066-1.194l.865-2.724 2.343.549-.003.034c0 .696.569 1.262 1.268 1.262.699 0 1.267-.566 1.267-1.262s-.568-1.262-1.267-1.262c-.537 0-.994.335-1.179.804l-2.525-.592c-.11-.027-.223.037-.257.145l-.965 3.038c-1.656.02-3.155.466-4.258 1.181-.277-.255-.644-.415-1.05-.415-.854.001-1.549.693-1.549 1.544 0 .566.311 1.056.768 1.325-.03.164-.05.331-.05.5 0 2.281 2.805 4.137 6.253 4.137s6.253-1.856 6.253-4.137c0-.16-.017-.317-.044-.472.486-.261.82-.766.82-1.353zm-4.872.141c-.509 0-.922.412-.922.919 0 .506.414.918.922.918s.922-.412.922-.918c0-.507-.413-.919-.922-.919z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M14.238 15.348c.085.084.085.221 0 .306-.465.462-1.194.687-2.231.687l-.008-.002-.008.002c-1.036 0-1.766-.225-2.231-.688-.085-.084-.085-.221 0-.305.084-.084.222-.084.307 0 .379.377 1.008.561 1.924.561l.008.002.008-.002c.915 0 1.544-.184 1.924-.561.085-.084.223-.084.307 0zm-3.44-2.418c0-.507-.414-.919-.922-.919-.509 0-.923.412-.923.919 0 .506.414.918.923.918.508.001.922-.411.922-.918zm13.202-.93c0 6.627-5.373 12-12 12s-12-5.373-12-12 5.373-12 12-12 12 5.373 12 12zm-5-.129c0-.851-.695-1.543-1.55-1.543-.417 0-.795.167-1.074.435-1.056-.695-2.485-1.137-4.066-1.194l.865-2.724 2.343.549-.003.034c0 .696.569 1.262 1.268 1.262.699 0 1.267-.566 1.267-1.262s-.568-1.262-1.267-1.262c-.537 0-.994.335-1.179.804l-2.525-.592c-.11-.027-.223.037-.257.145l-.965 3.038c-1.656.02-3.155.466-4.258 1.181-.277-.255-.644-.415-1.05-.415-.854.001-1.549.693-1.549 1.544 0 .566.311 1.056.768 1.325-.03.164-.05.331-.05.5 0 2.281 2.805 4.137 6.253 4.137s6.253-1.856 6.253-4.137c0-.16-.017-.317-.044-.472.486-.261.82-.766.82-1.353zm-4.872.141c-.509 0-.922.412-.922.919 0 .506.414.918.922.918s.922-.412.922-.918c0-.507-.413-.919-.922-.919z"/></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Xbox Live Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1331.67 1333.33" shape-rendering="geometricPrecision" text-rendering="geometricPrecision" image-rendering="optimizeQuality" fill-rule="evenodd" clip-rule="evenodd"><path d="M665.83 534.66s1.66 0 0 0c200.91 152.76 541.3 528.02 438.35 634.29-117.89 102.95-270.65 164.39-438.35 164.39-167.7 0-322.13-61.44-438.35-164.39-104.61-106.27 237.44-481.53 436.69-632.63 0-1.66 1.66-1.66 1.66-1.66zm347.03-436.7C911.57 36.52 800.32-.01 665.83-.01c-134.5 0-245.74 36.53-347.03 97.97-1.66 0-1.66 1.66-1.66 3.32s1.66 1.66 3.32 1.66c129.51-28.23 325.44 83.02 343.71 94.65h3.32c18.26-11.62 214.2-122.87 343.71-94.65 1.66 0 3.32 0 3.32-1.66s0-3.32-1.66-3.32zm-813.61 92.98c-1.66 0-1.66 1.66-3.32 1.66C74.72 313.81 0 481.52 0 665.82c0 151.1 51.48 292.24 136.16 403.49 0 1.66 1.66 1.66 3.32 1.66s1.66-1.66 0-3.32C88 909.91 348.69 529.67 483.19 370.26l1.66-1.66c0-1.66 0-1.66-1.66-1.66-204.23-202.57-272.31-180.99-283.93-176.01zm649.23 174.35l-1.66 1.66s0 1.66 1.66 1.66C982.98 528.01 1242 908.26 1192.19 1066v3.32c1.66 0 3.32 0 3.32-1.66 84.68-111.25 136.16-252.39 136.16-403.49 0-184.31-74.72-352.01-197.59-473.22-1.66-1.66-1.66-1.66-3.32-1.66-9.96-3.32-78.04-24.91-282.27 176.01z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1331.67 1333.33" shape-rendering="geometricPrecision" text-rendering="geometricPrecision" image-rendering="optimizeQuality" fill-rule="evenodd" clip-rule="evenodd"><path d="M665.83 534.66s1.66 0 0 0c200.91 152.76 541.3 528.02 438.35 634.29-117.89 102.95-270.65 164.39-438.35 164.39-167.7 0-322.13-61.44-438.35-164.39-104.61-106.27 237.44-481.53 436.69-632.63 0-1.66 1.66-1.66 1.66-1.66zm347.03-436.7C911.57 36.52 800.32-.01 665.83-.01c-134.5 0-245.74 36.53-347.03 97.97-1.66 0-1.66 1.66-1.66 3.32s1.66 1.66 3.32 1.66c129.51-28.23 325.44 83.02 343.71 94.65h3.32c18.26-11.62 214.2-122.87 343.71-94.65 1.66 0 3.32 0 3.32-1.66s0-3.32-1.66-3.32zm-813.61 92.98c-1.66 0-1.66 1.66-3.32 1.66C74.72 313.81 0 481.52 0 665.82c0 151.1 51.48 292.24 136.16 403.49 0 1.66 1.66 1.66 3.32 1.66s1.66-1.66 0-3.32C88 909.91 348.69 529.67 483.19 370.26l1.66-1.66c0-1.66 0-1.66-1.66-1.66-204.23-202.57-272.31-180.99-283.93-176.01zm649.23 174.35l-1.66 1.66s0 1.66 1.66 1.66C982.98 528.01 1242 908.26 1192.19 1066v3.32c1.66 0 3.32 0 3.32-1.66 84.68-111.25 136.16-252.39 136.16-403.49 0-184.31-74.72-352.01-197.59-473.22-1.66-1.66-1.66-1.66-3.32-1.66-9.96-3.32-78.04-24.91-282.27 176.01z"/></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Skype Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" id="Capa_1" x="0px" y="0px" viewBox="0 0 24.08 24.08" style="enable-background:new 0 0 24.08 24.08;" xml:space="preserve"><g><path d="M23.029,13.494c0.34,0.481,0.599,1.003,0.78,1.575c0.18,0.57,0.271,1.16,0.271,1.771c0,0.875-0.177,1.697-0.527,2.467 c-0.351,0.768-0.834,1.445-1.45,2.033c-0.616,0.582-1.333,1.039-2.157,1.371s-1.691,0.495-2.613,0.495 c-1.313,0-2.491-0.31-3.536-0.929c-0.29,0.04-0.582,0.069-0.877,0.091c-0.296,0.02-0.589,0.028-0.882,0.028 c-1.534,0-2.974-0.275-4.321-0.823c-1.344-0.551-2.521-1.299-3.535-2.252c-1.011-0.949-1.808-2.068-2.382-3.349 c-0.579-1.281-0.868-2.65-0.868-4.105c0-0.282,0.014-0.55,0.044-0.798c0.027-0.248,0.064-0.501,0.102-0.754 C0.358,9.316,0,8.243,0,7.092c0-0.856,0.177-1.665,0.528-2.426c0.35-0.76,0.83-1.421,1.446-1.982C2.59,2.122,3.311,1.68,4.13,1.356 c0.821-0.324,1.692-0.482,2.614-0.482c0.664,0,1.287,0.078,1.879,0.237c0.592,0.161,1.146,0.385,1.657,0.678 c0.289-0.041,0.585-0.07,0.877-0.093c0.296-0.018,0.592-0.029,0.881-0.029c1.539,0,2.984,0.268,4.335,0.801 c1.348,0.529,2.528,1.262,3.542,2.192c1.014,0.934,1.813,2.015,2.393,3.245c0.578,1.232,0.867,2.554,0.867,3.962 C23.176,12.386,23.128,12.929,23.029,13.494z M17.333,16.696c0.474-0.624,0.708-1.357,0.708-2.199c0-0.663-0.132-1.22-0.392-1.672 c-0.271-0.45-0.653-0.827-1.146-1.128c-0.453-0.292-1.042-0.551-1.763-0.783c-0.725-0.182-1.494-0.36-2.307-0.542l-0.891-0.203 c-0.239-0.051-0.429-0.094-0.572-0.133c-0.159-0.039-0.306-0.082-0.446-0.133c-0.132-0.047-0.272-0.102-0.412-0.162 C9.84,9.627,9.612,9.472,9.431,9.29c-0.14-0.157-0.21-0.368-0.21-0.63c0-0.383,0.228-0.725,0.681-1.028 c0.513-0.283,1.14-0.419,1.885-0.41c0.861,0,1.466,0.127,1.807,0.382c0.412,0.302,0.735,0.674,0.966,1.113 c0.201,0.322,0.405,0.562,0.616,0.72c0.201,0.154,0.48,0.237,0.831,0.248c0.395,0,0.722-0.131,0.997-0.395 c0.269-0.246,0.398-0.523,0.391-0.835c0-0.361-0.102-0.716-0.302-1.058c-0.198-0.321-0.531-0.663-0.99-1.026 c-0.232-0.156-0.487-0.299-0.762-0.43c-0.276-0.132-0.586-0.248-0.923-0.346c-0.353-0.096-0.724-0.17-1.115-0.22 c-0.392-0.049-0.82-0.072-1.294-0.072c-1.194,0-2.201,0.146-3.021,0.438c-0.881,0.304-1.548,0.722-2,1.264 C6.536,7.521,6.31,8.141,6.31,8.865c0,0.762,0.219,1.382,0.651,1.86c0.435,0.517,1.024,0.908,1.769,1.173 c0.708,0.283,1.613,0.531,2.723,0.745c0.415,0.098,0.778,0.181,1.099,0.244c0.316,0.062,0.603,0.133,0.854,0.21 c0.473,0.129,0.857,0.345,1.15,0.652c0.313,0.266,0.47,0.608,0.47,1.03c0,0.583-0.286,1.055-0.851,1.415 c-0.534,0.369-1.256,0.551-2.165,0.538c-0.728,0-1.255-0.084-1.589-0.254c-0.415-0.189-0.721-0.429-0.922-0.715 c-0.255-0.326-0.459-0.688-0.623-1.079c-0.143-0.371-0.336-0.651-0.588-0.84c-0.235-0.191-0.51-0.286-0.833-0.286 c-0.412,0-0.752,0.115-1.021,0.341c-0.269,0.257-0.398,0.558-0.392,0.896c0,0.589,0.218,1.178,0.65,1.768 c0.429,0.607,0.98,1.081,1.651,1.422c0.983,0.508,2.218,0.765,3.702,0.775c1.211,0,2.29-0.18,3.229-0.539 C16.196,17.812,16.884,17.305,17.333,16.696z"/></g></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" id="Capa_1" x="0px" y="0px" viewBox="0 0 24.08 24.08" style="enable-background:new 0 0 24.08 24.08;" xml:space="preserve"><g><path d="M23.029,13.494c0.34,0.481,0.599,1.003,0.78,1.575c0.18,0.57,0.271,1.16,0.271,1.771c0,0.875-0.177,1.697-0.527,2.467 c-0.351,0.768-0.834,1.445-1.45,2.033c-0.616,0.582-1.333,1.039-2.157,1.371s-1.691,0.495-2.613,0.495 c-1.313,0-2.491-0.31-3.536-0.929c-0.29,0.04-0.582,0.069-0.877,0.091c-0.296,0.02-0.589,0.028-0.882,0.028 c-1.534,0-2.974-0.275-4.321-0.823c-1.344-0.551-2.521-1.299-3.535-2.252c-1.011-0.949-1.808-2.068-2.382-3.349 c-0.579-1.281-0.868-2.65-0.868-4.105c0-0.282,0.014-0.55,0.044-0.798c0.027-0.248,0.064-0.501,0.102-0.754 C0.358,9.316,0,8.243,0,7.092c0-0.856,0.177-1.665,0.528-2.426c0.35-0.76,0.83-1.421,1.446-1.982C2.59,2.122,3.311,1.68,4.13,1.356 c0.821-0.324,1.692-0.482,2.614-0.482c0.664,0,1.287,0.078,1.879,0.237c0.592,0.161,1.146,0.385,1.657,0.678 c0.289-0.041,0.585-0.07,0.877-0.093c0.296-0.018,0.592-0.029,0.881-0.029c1.539,0,2.984,0.268,4.335,0.801 c1.348,0.529,2.528,1.262,3.542,2.192c1.014,0.934,1.813,2.015,2.393,3.245c0.578,1.232,0.867,2.554,0.867,3.962 C23.176,12.386,23.128,12.929,23.029,13.494z M17.333,16.696c0.474-0.624,0.708-1.357,0.708-2.199c0-0.663-0.132-1.22-0.392-1.672 c-0.271-0.45-0.653-0.827-1.146-1.128c-0.453-0.292-1.042-0.551-1.763-0.783c-0.725-0.182-1.494-0.36-2.307-0.542l-0.891-0.203 c-0.239-0.051-0.429-0.094-0.572-0.133c-0.159-0.039-0.306-0.082-0.446-0.133c-0.132-0.047-0.272-0.102-0.412-0.162 C9.84,9.627,9.612,9.472,9.431,9.29c-0.14-0.157-0.21-0.368-0.21-0.63c0-0.383,0.228-0.725,0.681-1.028 c0.513-0.283,1.14-0.419,1.885-0.41c0.861,0,1.466,0.127,1.807,0.382c0.412,0.302,0.735,0.674,0.966,1.113 c0.201,0.322,0.405,0.562,0.616,0.72c0.201,0.154,0.48,0.237,0.831,0.248c0.395,0,0.722-0.131,0.997-0.395 c0.269-0.246,0.398-0.523,0.391-0.835c0-0.361-0.102-0.716-0.302-1.058c-0.198-0.321-0.531-0.663-0.99-1.026 c-0.232-0.156-0.487-0.299-0.762-0.43c-0.276-0.132-0.586-0.248-0.923-0.346c-0.353-0.096-0.724-0.17-1.115-0.22 c-0.392-0.049-0.82-0.072-1.294-0.072c-1.194,0-2.201,0.146-3.021,0.438c-0.881,0.304-1.548,0.722-2,1.264 C6.536,7.521,6.31,8.141,6.31,8.865c0,0.762,0.219,1.382,0.651,1.86c0.435,0.517,1.024,0.908,1.769,1.173 c0.708,0.283,1.613,0.531,2.723,0.745c0.415,0.098,0.778,0.181,1.099,0.244c0.316,0.062,0.603,0.133,0.854,0.21 c0.473,0.129,0.857,0.345,1.15,0.652c0.313,0.266,0.47,0.608,0.47,1.03c0,0.583-0.286,1.055-0.851,1.415 c-0.534,0.369-1.256,0.551-2.165,0.538c-0.728,0-1.255-0.084-1.589-0.254c-0.415-0.189-0.721-0.429-0.922-0.715 c-0.255-0.326-0.459-0.688-0.623-1.079c-0.143-0.371-0.336-0.651-0.588-0.84c-0.235-0.191-0.51-0.286-0.833-0.286 c-0.412,0-0.752,0.115-1.021,0.341c-0.269,0.257-0.398,0.558-0.392,0.896c0,0.589,0.218,1.178,0.65,1.768 c0.429,0.607,0.98,1.081,1.651,1.422c0.983,0.508,2.218,0.765,3.702,0.775c1.211,0,2.29-0.18,3.229-0.539 C16.196,17.812,16.884,17.305,17.333,16.696z"/></g></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Youtube Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M19.615 3.184c-3.604-.246-11.631-.245-15.23 0-3.897.266-4.356 2.62-4.385 8.816.029 6.185.484 8.549 4.385 8.816 3.6.245 11.626.246 15.23 0 3.897-.266 4.356-2.62 4.385-8.816-.029-6.185-.484-8.549-4.385-8.816zm-10.615 12.816v-8l8 3.993-8 4.007z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M19.615 3.184c-3.604-.246-11.631-.245-15.23 0-3.897.266-4.356 2.62-4.385 8.816.029 6.185.484 8.549 4.385 8.816 3.6.245 11.626.246 15.23 0 3.897-.266 4.356-2.62 4.385-8.816-.029-6.185-.484-8.549-4.385-8.816zm-10.615 12.816v-8l8 3.993-8 4.007z"/></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="Spotify Logo" i] {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" id="Capa_1" x="0px" y="0px" width="98.372px" height="98.372px" viewBox="0 0 98.372 98.372" style="enable-background:new 0 0 98.372 98.372;" xml:space="preserve"><g><path d="M49.186,0.002C22.022,0.002,0,22.021,0,49.186C0,76.35,22.022,98.37,49.186,98.37c27.164,0,49.186-22.021,49.186-49.185 C98.372,22.021,76.35,0.002,49.186,0.002z M68.116,72.547c-0.796,0-1.339-0.275-2.082-0.729c-7.129-4.313-16.019-6.58-25.449-6.58 c-5.264,0-10.561,0.677-15.515,1.707c-0.805,0.175-1.817,0.484-2.425,0.484c-1.867,0-3.111-1.482-3.111-3.092 c0-2.064,1.19-3.096,2.675-3.379c6.075-1.385,12.125-2.176,18.409-2.176c10.762,0,20.354,2.471,28.608,7.418 c1.228,0.717,1.947,1.449,1.947,3.27C71.174,71.245,69.732,72.547,68.116,72.547z M73.475,59.529 c-1.067,0-1.738-0.432-2.465-0.854c-8-4.748-19.09-7.902-31.232-7.902c-6.228,0-11.604,0.873-16.053,2.058 c-0.959,0.265-1.496,0.549-2.394,0.549c-2.114,0-3.842-1.726-3.842-3.856c0-2.091,1.015-3.529,3.059-4.105 c5.529-1.52,11.177-2.689,19.394-2.689c12.875,0,25.33,3.206,35.121,9.066c1.642,0.939,2.246,2.137,2.246,3.887 C77.309,57.809,75.613,59.529,73.475,59.529z M79.577,44.389c-1,0-1.595-0.244-2.533-0.758 c-8.901-5.338-22.719-8.277-36.079-8.277c-6.67,0-13.443,0.679-19.648,2.362c-0.715,0.179-1.616,0.537-2.521,0.537 c-2.624,0-4.638-2.076-4.638-4.699c0-2.674,1.656-4.174,3.442-4.701c7.012-2.065,14.838-3.027,23.346-3.027 c14.443,0,29.639,2.971,40.738,9.488c1.496,0.849,2.533,2.126,2.533,4.468C84.215,42.462,82.061,44.389,79.577,44.389z"/></g></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" version="1.1" id="Capa_1" x="0px" y="0px" width="98.372px" height="98.372px" viewBox="0 0 98.372 98.372" style="enable-background:new 0 0 98.372 98.372;" xml:space="preserve"><g><path d="M49.186,0.002C22.022,0.002,0,22.021,0,49.186C0,76.35,22.022,98.37,49.186,98.37c27.164,0,49.186-22.021,49.186-49.185 C98.372,22.021,76.35,0.002,49.186,0.002z M68.116,72.547c-0.796,0-1.339-0.275-2.082-0.729c-7.129-4.313-16.019-6.58-25.449-6.58 c-5.264,0-10.561,0.677-15.515,1.707c-0.805,0.175-1.817,0.484-2.425,0.484c-1.867,0-3.111-1.482-3.111-3.092 c0-2.064,1.19-3.096,2.675-3.379c6.075-1.385,12.125-2.176,18.409-2.176c10.762,0,20.354,2.471,28.608,7.418 c1.228,0.717,1.947,1.449,1.947,3.27C71.174,71.245,69.732,72.547,68.116,72.547z M73.475,59.529 c-1.067,0-1.738-0.432-2.465-0.854c-8-4.748-19.09-7.902-31.232-7.902c-6.228,0-11.604,0.873-16.053,2.058 c-0.959,0.265-1.496,0.549-2.394,0.549c-2.114,0-3.842-1.726-3.842-3.856c0-2.091,1.015-3.529,3.059-4.105 c5.529-1.52,11.177-2.689,19.394-2.689c12.875,0,25.33,3.206,35.121,9.066c1.642,0.939,2.246,2.137,2.246,3.887 C77.309,57.809,75.613,59.529,73.475,59.529z M79.577,44.389c-1,0-1.595-0.244-2.533-0.758 c-8.901-5.338-22.719-8.277-36.079-8.277c-6.67,0-13.443,0.679-19.648,2.362c-0.715,0.179-1.616,0.537-2.521,0.537 c-2.624,0-4.638-2.076-4.638-4.699c0-2.674,1.656-4.174,3.442-4.701c7.012-2.065,14.838-3.027,23.346-3.027 c14.443,0,29.639,2.971,40.738,9.488c1.496,0.849,2.533,2.126,2.533,4.468C84.215,42.462,82.061,44.389,79.577,44.389z"/></g></svg>');
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 img[alt="League of Legends Logo" i] {
  -webkit-mask-image: url("/assets/806953fe1cc616477175cbcdf90d5cd3.png");
          mask-image: url("/assets/806953fe1cc616477175cbcdf90d5cd3.png");
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 a {
  font-size: var(--font-size);
  margin-top: var(--spacing-third);
  width: 100%;
  display: block;
  position: relative;
  overflow: hidden;
  text-overflow: ellipsis;
  border-top: 1px solid var(--base-border);
  padding-top: var(--spacing-half);
  margin-top: var(--spacing-half);
  line-height: normal;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 a svg {
  display: none;
}
.root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 a:after {
  content: attr(href);
  width: 100%;
  white-space: nowrap;
}

html.theme-light .root-SR8cQa .header-QKLPzZ + div[class]:before,
html.theme-light .root-SR8cQa .body-3ND3kc .infoScroller-3EYYns .userInfoSection-2acyCx .connectedAccounts-repVzS .connectedAccount-36nQx7 {
  background: var(--background);
}
html.theme-light .root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z {
  background: var(--background);
}
html.theme-light .root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .item-PXvHYJ:hover {
  background: var(--background-modifier-hover) !important;
}
html.theme-light .root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .item-PXvHYJ.selected-3s45Ha,
html.theme-light .root-SR8cQa .header-QKLPzZ + div[class] .tabBarContainer-1s1u-z .item-PXvHYJ[style*="rgb(255, 255, 255)"] {
  background: transparent !important;
}
html.theme-light .root-SR8cQa .header-QKLPzZ .actionButton-3W1xZa + div:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light .root-SR8cQa .header-QKLPzZ .actionButton-3W1xZa + div:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .uploadModal-2ifh8j {
  box-shadow: var(--elevation-high);
  background-color: var(--background);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  box-sizing: border-box;
  position: relative;
  padding-top: 32px;
  min-height: unset;
}
#app-mount .uploadModal-2ifh8j .inner-3nWsbo {
  margin: 0;
  padding: var(--spacing-double);
  box-sizing: border-box;
}
#app-mount .uploadModal-2ifh8j .file-34mY5K {
  position: unset;
  height: auto;
}
#app-mount .uploadModal-2ifh8j .icon-kyxXVr:not(.image-2yrs5j) {
  display: none;
}
#app-mount .uploadModal-2ifh8j .icon-kyxXVr.image-2yrs5j {
  margin: 0 !important;
  width: 100% !important;
  height: auto !important;
  background-size: cover;
  box-shadow: none;
  box-sizing: border-box;
  border: 1px solid var(--base-border);
  background-color: var(--background);
  border-radius: var(--border-radius);
}
#app-mount .uploadModal-2ifh8j .icon-kyxXVr.image-2yrs5j:active {
  background-size: 100%;
}
#app-mount .uploadModal-2ifh8j .description-2ug5H_ {
  height: auto;
  padding-top: 0;
  position: absolute;
  top: 0;
  left: 0;
  z-index: 2;
  height: 32px;
  display: flex;
  align-items: center;
  padding: 0 var(--spacing);
  border-bottom: 1px solid var(--base-border);
  background: var(--background);
  width: 100%;
  border-radius: var(--border-radius) var(--border-radius) 0 0;
}
#app-mount .uploadModal-2ifh8j .description-2ug5H_ .filename-ovv3c5 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  line-height: normal;
  height: auto;
  -webkit-user-select: text;
          user-select: text;
}
#app-mount .uploadModal-2ifh8j .comment-4IWttf {
  margin: 0;
  margin-top: var(--spacing);
}
#app-mount .uploadModal-2ifh8j .comment-4IWttf .label-3aiqT2 {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  text-transform: none;
  margin-bottom: var(--spacing-third);
}
#app-mount .uploadModal-2ifh8j .comment-4IWttf .label-3aiqT2 .optional--ezibr {
  margin: 0;
  color: var(--text-muted);
}
#app-mount .uploadModal-2ifh8j .comment-4IWttf .label-3aiqT2 .optional--ezibr::before {
  content: " ";
}
#app-mount .uploadModal-2ifh8j .comment-4IWttf .channelTextArea-2VhZ6z {
  margin: 0;
}
#app-mount .uploadModal-2ifh8j .comment-4IWttf .channelTextArea-2VhZ6z .inner-MADQqc {
  background: var(--background-alt);
}
#app-mount .uploadModal-2ifh8j .comment-4IWttf .channelTextArea-2VhZ6z .inner-MADQqc .scrollableContainer-2NUZem {
  border-radius: var(--border-radius);
}
#app-mount .uploadModal-2ifh8j .charcounter {
  font-size: var(--font-size);
  opacity: 0.5;
}
#app-mount .uploadModal-2ifh8j .footer-3mqk7D {
  background: var(--background);
  box-shadow: none;
  border-top: 1px solid var(--base-border);
  padding: var(--spacing);
}
#app-mount .uploadModal-2ifh8j .footer-3mqk7D .checkboxWrapper-SkhIWG {
  flex: none;
}
#app-mount .uploadModal-2ifh8j .footer-3mqk7D .checkbox-1ix_J3 {
  border: none;
  background: var(--background-dark);
}
#app-mount .uploadModal-2ifh8j .footer-3mqk7D .checkbox-1ix_J3.checked-3_4uQ9 {
  background: var(--accent-solid);
}
#app-mount .uploadModal-2ifh8j .footer-3mqk7D .checkbox-1ix_J3.checked-3_4uQ9 polyline {
  stroke: #fff;
}

#app-mount [aria-label="Delete Message"] .inner-ZyuQk0 {
  padding: var(--spacing);
}
#app-mount [aria-label="Delete Message"] .spacing-2P-ODW {
  margin-bottom: var(--spacing);
}
#app-mount [aria-label="Delete Message"] .message-2qRu38 {
  box-shadow: none;
  background: transparent;
  padding: 0;
}
#app-mount [aria-label="Delete Message"] .message-2qRu38 .cozy-3raOZG {
  padding-bottom: 0;
}
#app-mount [aria-label="Delete Message"] .spacingTop-3Dhr0L.block-2RXqH9 {
  display: none;
}

#app-mount .theme-light .root-1gCeng {
  transform: none !important;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW {
  width: 100%;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] {
  width: 100% !important;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] {
  width: 100% !important;
  transform: none !important;
  top: 0 !important;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 {
  align-items: flex-start;
  justify-content: center;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 .title-3w8xhj,
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 .title-Z_XiOC,
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 .title-XLSR78 {
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  font-size: var(--font-size-md);
  text-align: left;
  line-height: normal;
  margin: 0;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 .colorHeaderSecondary-3Sp3Ft {
  display: none;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 .closeButton-9dkb_x,
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 .closeButton-26zew5,
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .header-1TKi98 .closeButton-1RFOLl {
  top: unset;
  right: calc(var(--spacing) * 1.25);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe {
  margin: 0;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .optionHeader-1-5lcp {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  text-transform: none;
  color: var(--text-normal);
  margin: var(--spacing) 0;
  margin-top: var(--spacing-double);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  box-sizing: border-box;
  line-height: normal;
  transition: none;
  padding: var(--spacing);
  border-radius: var(--button-border-radius);
  margin-bottom: var(--spacing);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1::before {
  content: "";
  margin: var(--spacing-half) var(--spacing) var(--spacing-half) var(--spacing-half);
  width: 24px;
  height: 24px;
  background: currentColor;
  -webkit-mask-size: contain;
          mask-size: contain;
  -webkit-mask-position: center;
          mask-position: center;
  -webkit-mask-repeat: no-repeat;
          mask-repeat: no-repeat;
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="256" height="256" viewBox="0 0 14 16" version="1.1" aria-hidden="true"><path fill-rule="evenodd" d="M14 8.77v-1.6l-1.94-.64-.45-1.09.88-1.84-1.13-1.13-1.81.91-1.09-.45-.69-1.92h-1.6l-.63 1.94-1.11.45-1.84-.88-1.13 1.13.91 1.81-.45 1.09L0 7.23v1.59l1.94.64.45 1.09-.88 1.84 1.13 1.13 1.81-.91 1.09.45.69 1.92h1.59l.63-1.94 1.11-.45 1.84.88 1.13-1.13-.92-1.81.47-1.09L14 8.75v.02zM7 11c-1.66 0-3-1.34-3-3s1.34-3 3-3 3 1.34 3 3-1.34 3-3 3z"></path></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1 .text-1FOLJS {
  font-weight: var(--font-weight-normal);
  color: inherit;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1 img {
  display: none;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:first-child {
  color: var(--white);
  background-color: rgb(var(--accent));
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:first-child:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:first-child:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:first-child::before {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" version="1.1" viewBox="0 0 16 16"><path d="M15 0H9v7c0 .55.45 1 1 1h1v1h1V8h3c.55 0 1-.45 1-1V1c0-.55-.45-1-1-1zm-4 7h-1V6h1v1zm4 0h-3V6h3v1zm0-2h-4V1h4v4zM4 5H3V4h1v1zm0-2H3V2h1v1zM2 1h6V0H1C.45 0 0 .45 0 1v12c0 .55.45 1 1 1h2v2l1.5-1.5L6 16v-2h5c.55 0 1-.45 1-1v-3H2V1zm9 10v2H6v-1H3v1H1v-2h10zM3 8h1v1H3V8zm1-1H3V6h1v1z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" version="1.1" viewBox="0 0 16 16"><path d="M15 0H9v7c0 .55.45 1 1 1h1v1h1V8h3c.55 0 1-.45 1-1V1c0-.55-.45-1-1-1zm-4 7h-1V6h1v1zm4 0h-3V6h3v1zm0-2h-4V1h4v4zM4 5H3V4h1v1zm0-2H3V2h1v1zM2 1h6V0H1C.45 0 0 .45 0 1v12c0 .55.45 1 1 1h2v2l1.5-1.5L6 16v-2h5c.55 0 1-.45 1-1v-3H2V1zm9 10v2H6v-1H3v1H1v-2h10zM3 8h1v1H3V8zm1-1H3V6h1v1z"/></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:not(:first-child) {
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  cursor: var(--cursor);
  box-shadow: none !important;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:not(:first-child):hover {
  border: 1px solid currentColor;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:not(:first-child):focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:nth-last-child(2) {
  margin: 0;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:nth-last-child(2):before {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M6 0C2.69 0 0 2.5 0 5.5 0 10.02 6 16 6 16s6-5.98 6-10.5C12 2.5 9.31 0 6 0zm0 14.55C4.14 12.52 1 8.44 1 5.5 1 3.02 3.25 1 6 1c1.34 0 2.61.48 3.56 1.36.92.86 1.44 1.97 1.44 3.14 0 2.94-3.14 7.02-5 9.05zM8 5.5c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M6 0C2.69 0 0 2.5 0 5.5 0 10.02 6 16 6 16s6-5.98 6-10.5C12 2.5 9.31 0 6 0zm0 14.55C4.14 12.52 1 8.44 1 5.5 1 3.02 3.25 1 6 1c1.34 0 2.61.48 3.56 1.36.92.86 1.44 1.97 1.44 3.14 0 2.94-3.14 7.02-5 9.05zM8 5.5c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:nth-last-child(5)::before {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088A6.78 6.78 0 0 1 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M16 12.999c0 .439-.45 1-1 1H7.995c-.539 0-.994-.447-.995-.999H1c-.54 0-1-.561-1-1 0-2.634 3-4 3-4s.229-.409 0-1c-.841-.621-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.442.58 2.5 3c.058 2.41-.159 2.379-1 3-.229.59 0 1 0 1s1.549.711 2.42 2.088A6.78 6.78 0 0 1 10 8.999s.229-.409 0-1c-.841-.62-1.058-.59-1-3 .058-2.419 1.367-3 2.5-3s2.437.581 2.495 3c.059 2.41-.158 2.38-1 3-.229.59 0 1 0 1s3.005 1.366 3.005 4z"/></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:nth-last-child(3)::before {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M6 0C2.69 0 0 2.69 0 6v1c0 .55.45 1 1 1v5c0 1.1 2.24 2 5 2s5-.9 5-2V8c.55 0 1-.45 1-1V6c0-3.31-2.69-6-6-6zm3 10v.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5V10c0-.28-.22-.5-.5-.5s-.5.22-.5.5v2.5c0 .28-.22.5-.5.5s-.5-.22-.5-.5v-2c0-.28-.22-.5-.5-.5s-.5.22-.5.5v.5c0 .55-.45 1-1 1s-1-.45-1-1v-1c-.55 0-1-.45-1-1V7.2c.91.49 2.36.8 4 .8 1.64 0 3.09-.31 4-.8V9c0 .55-.45 1-1 1zM6 7c-1.68 0-3.12-.41-3.71-1C2.88 5.41 4.32 5 6 5c1.68 0 3.12.41 3.71 1-.59.59-2.03 1-3.71 1zm0-3c-2.76 0-5 .89-5 2 0-2.76 2.24-5 5-5s5 2.24 5 5c0-1.1-2.24-2-5-2z"/></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:nth-last-child(6)::before {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M7.808 9.405l-3.83-1.19c-4-8 0 1.5 0 2.5s1.8 1.5 4 1.5 4-.5 4-1.5v-2.5l-3.83 1.19a.73.73 0 0 1-.36 0h.02zm.28-6.39a.34.34 0 0 0-.2 0l-7.64 2.38a.35.35 0 0 0 0 .67l1.73.55v1.77c-.3.17-.5.5-.5.86 0 .19.05.36.14.5-.08.14-.14.31-.14.5v2.58c0 .55 2 .55 2 0v-2.58c0-.19-.05-.36-.14-.5.08-.14.14-.31.14-.5 0-.38-.2-.69-.5-.86v-1.45l4.89 1.53c.06.02.14.02.2 0l7.64-2.38a.35.35 0 0 0 0-.67l-7.63-2.39.01-.01zm-.09 3.2c-.55 0-1-.22-1-.5s.45-.5 1-.5 1 .22 1 .5-.45.5-1 .5z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M7.808 9.405l-3.83-1.19c-4-8 0 1.5 0 2.5s1.8 1.5 4 1.5 4-.5 4-1.5v-2.5l-3.83 1.19a.73.73 0 0 1-.36 0h.02zm.28-6.39a.34.34 0 0 0-.2 0l-7.64 2.38a.35.35 0 0 0 0 .67l1.73.55v1.77c-.3.17-.5.5-.5.86 0 .19.05.36.14.5-.08.14-.14.31-.14.5v2.58c0 .55 2 .55 2 0v-2.58c0-.19-.05-.36-.14-.5.08-.14.14-.31.14-.5 0-.38-.2-.69-.5-.86v-1.45l4.89 1.53c.06.02.14.02.2 0l7.64-2.38a.35.35 0 0 0 0-.67l-7.63-2.39.01-.01zm-.09 3.2c-.55 0-1-.22-1-.5s.45-.5 1-.5 1 .22 1 .5-.45.5-1 .5z"/></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:nth-last-child(4)::before {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M11.2 3c-.52-.63-1.25-.95-2.2-1-.97 0-1.69.42-2.2 1-.51.58-.78.92-.8 1-.02-.08-.28-.42-.8-1-.52-.58-1.17-1-2.2-1-.95.05-1.69.38-2.2 1-.52.61-.78 1.28-.8 2 0 .52.09 1.52.67 2.67C1.25 8.82 3.01 10.61 6 13c2.98-2.39 4.77-4.17 5.34-5.33C11.91 6.51 12 5.5 12 5c-.02-.72-.28-1.39-.8-2.02V3z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M11.2 3c-.52-.63-1.25-.95-2.2-1-.97 0-1.69.42-2.2 1-.51.58-.78.92-.8 1-.02-.08-.28-.42-.8-1-.52-.58-1.17-1-2.2-1-.95.05-1.69.38-2.2 1-.52.61-.78 1.28-.8 2 0 .52.09 1.52.67 2.67C1.25 8.82 3.01 10.61 6 13c2.98-2.39 4.77-4.17 5.34-5.33C11.91 6.51 12 5.5 12 5c-.02-.72-.28-1.39-.8-2.02V3z"/></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .container-UC8Ug1:nth-last-child(7)::before {
  -webkit-mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12.17 3.83c-.27-.27-.47-.55-.63-.88-.16-.31-.27-.66-.34-1.02-.58.33-1.16.7-1.73 1.13-.58.44-1.14.94-1.69 1.48-.7.7-1.33 1.81-1.78 2.45H3L0 10h3l2-2c-.34.77-1.02 2.98-1 3l1 1c.02.02 2.23-.64 3-1l-2 2v3l3-3v-3c.64-.45 1.75-1.09 2.45-1.78.55-.55 1.05-1.13 1.47-1.7.44-.58.81-1.16 1.14-1.72-.36-.08-.7-.19-1.03-.34a3.39 3.39 0 0 1-.86-.63zM16 0s-.09.38-.3 1.06c-.2.7-.55 1.58-1.06 2.66-.7-.08-1.27-.33-1.66-.72-.39-.39-.63-.94-.7-1.64C13.36.84 14.23.48 14.92.28 15.62.08 16 0 16 0z"/></svg>');
          mask-image: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 16 16" width="64" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12.17 3.83c-.27-.27-.47-.55-.63-.88-.16-.31-.27-.66-.34-1.02-.58.33-1.16.7-1.73 1.13-.58.44-1.14.94-1.69 1.48-.7.7-1.33 1.81-1.78 2.45H3L0 10h3l2-2c-.34.77-1.02 2.98-1 3l1 1c.02.02 2.23-.64 3-1l-2 2v3l3-3v-3c.64-.45 1.75-1.09 2.45-1.78.55-.55 1.05-1.13 1.47-1.7.44-.58.81-1.16 1.14-1.72-.36-.08-.7-.19-1.03-.34a3.39 3.39 0 0 1-.86-.63zM16 0s-.09.38-.3 1.06c-.2.7-.55 1.58-1.06 2.66-.7-.08-1.27-.33-1.66-.72-.39-.39-.63-.94-.7-1.64C13.36.84 14.23.48 14.92.28 15.62.08 16 0 16 0z"/></svg>');
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .createGuild-23lWNm {
  margin: 0;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .createGuild-23lWNm .nameInput-2LpnKg {
  margin-top: var(--spacing-double);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .createGuild-23lWNm .uploadIcon-2IFzZU {
  color: var(--text-muted);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .createGuild-23lWNm .uploadIcon-2IFzZU circle {
  fill: var(--accent-solid);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .createGuild-23lWNm .guidelines-1NSoht {
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  margin-top: var(--spacing);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .createGuild-23lWNm .guidelines-1NSoht strong {
  font-weight: var(--font-weight-normal);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .input--jS-j2 {
  background: transparent;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .inputForm-N3LGqy {
  margin-bottom: var(--spacing);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .formTitle-aeXUoN,
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .h5-18_1nd {
  margin-bottom: var(--spacing-third);
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .examplesForm-1PzAn- {
  margin-bottom: 0;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .examplesForm-1PzAn- .sampleLink-2NLvZg {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  flex-grow: 0;
  display: inline-block;
  margin-right: var(--spacing-half);
  margin-bottom: var(--spacing-half);
  -webkit-user-select: none;
          user-select: none;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe + .footer-2gL1pp button {
  padding: var(--spacing);
  height: auto;
  margin: 0;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .footer-2gL1pp {
  justify-content: flex-start;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .footer-2gL1pp .footerTitle-2CYZch {
  display: none;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .footer-2gL1pp button.lookBlank-3eh9lL {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  cursor: var(--cursor);
  box-shadow: none !important;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .footer-2gL1pp button.lookBlank-3eh9lL:hover {
  border: 1px solid currentColor;
}
#app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .footer-2gL1pp button.lookBlank-3eh9lL:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}

html.theme-light #app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .itemContainer-1LSFks:not(:first-child):hover,
html.theme-light #app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .footer-2gL1pp button.lookBlank-3eh9lL:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .templatesList-2E6rTe .itemContainer-1LSFks:not(:first-child):focus,
html.theme-light #app-mount .theme-light .root-1gCeng .container-1CE3eW > div[style*=width] > div[style*=width] .footer-2gL1pp button.lookBlank-3eh9lL:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .modal-1sor29 {
  min-height: auto;
  color: var(--text-normal);
  box-shadow: var(--elevation-2);
}
#app-mount .modal-1sor29 .header-2tA9Os {
  padding: var(--spacing-double);
  border-bottom: 1px solid var(--base-border);
}
#app-mount .modal-1sor29 .header-2tA9Os button {
  padding: 0;
}
#app-mount .modal-1sor29 .inner-ZyuQk0 {
  padding: var(--spacing-double);
}
#app-mount .modal-1sor29 .inner-ZyuQk0 .content-38qMG0 {
  padding-bottom: 0;
}

#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ {
  margin-bottom: var(--spacing-double);
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ:nth-last-child(2) {
  margin: 0;
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .clearButton-13g8ju {
  background: var(--text-muted);
  opacity: 1;
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/10px no-repeat;
          mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/10px no-repeat;
  width: 16px;
  height: 100%;
  right: var(--spacing-half);
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .clearButton-13g8ju .clearIcon-xXwSFS {
  display: none;
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .clearButton-13g8ju:hover {
  background: var(--text-normal);
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .emojiButtonContainer-3d6DFV {
  margin-right: var(--spacing);
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .emojiButtonContainer-3d6DFV .emojiButton-3uL3Aw {
  cursor: var(--cursor);
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .emojiButtonContainer-3d6DFV .emojiButton-3uL3Aw .sprite-2iCowe {
  height: 20px;
  width: 20px;
  transform: none !important;
  filter: none !important;
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 16 16" fill="currentColor" style="display: inline-block; vertical-align: text-bottom;"><path fill-rule="evenodd" d="M1.5 8a6.5 6.5 0 1113 0 6.5 6.5 0 01-13 0zM8 0a8 8 0 100 16A8 8 0 008 0zM5 8a1 1 0 100-2 1 1 0 000 2zm7-1a1 1 0 11-2 0 1 1 0 012 0zM5.32 9.636a.75.75 0 011.038.175l.007.009c.103.118.22.222.35.31.264.178.683.37 1.285.37.602 0 1.02-.192 1.285-.371.13-.088.247-.192.35-.31l.007-.008a.75.75 0 111.222.87l-.614-.431c.614.43.614.431.613.431v.001l-.001.002-.002.003-.005.007-.014.019a1.984 1.984 0 01-.184.213c-.16.166-.338.316-.53.445-.63.418-1.37.638-2.127.629-.946 0-1.652-.308-2.126-.63a3.32 3.32 0 01-.715-.657l-.014-.02-.005-.006-.002-.003v-.002h-.001l.613-.432-.614.43a.75.75 0 01.183-1.044h.001z"/></svg>') center/90% no-repeat;
}
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .emojiButtonContainer-3d6DFV .emojiButton-3uL3Aw:hover .sprite-2iCowe,
#app-mount .modalRoot-1Kx4Hb .formGroup-2hEDrJ .emojiButtonContainer-3d6DFV .emojiButton-3uL3Aw .sprite-2iCowe[style*="grayscale(0%)"] {
  background: var(--text-normal);
}
#app-mount .modalRoot-1Kx4Hb .art-347BZj {
  display: none;
}
#app-mount .modalRoot-1Kx4Hb .header-3C6qT5 {
  padding-top: 0;
  align-items: flex-start;
  width: auto;
  position: relative;
}
#app-mount .modalRoot-1Kx4Hb .header-3C6qT5 .headerText-2uyvpY {
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .modalRoot-1Kx4Hb .modalCloseButton-3ztS-g {
  top: unset;
  right: calc(var(--spacing-double) - 6px) !important;
}

#app-mount .container-3qKHyN {
  position: fixed;
  top: var(--titlebar-height);
  left: 0;
  width: calc(var(--noasw-base) + var(--sidebar-width));
  height: calc(100vh - var(--titlebar-height));
}
#app-mount .quickswitcher-3JagVE {
  width: 100%;
  height: 100%;
  border-radius: 0;
  padding: 0;
  background: var(--background);
  border-right: 1px solid var(--base-border);
  box-shadow: none;
}
#app-mount .quickswitcher-3JagVE div[style="height: 15px;"] {
  height: 1px !important;
  background: var(--base-border);
}
#app-mount .quickswitcher-3JagVE .avatarSizeOverride-2KySyz {
  border-radius: var(--border-radius);
}
#app-mount .input-2VB9rf {
  box-sizing: border-box;
  background-color: var(--background-dark);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  height: var(--input-height);
  transform: translateZ(0);
  width: calc(100% - var(--spacing-double));
  padding: 0 var(--spacing-half);
  margin: var(--spacing);
  margin-top: calc((var(--toolbar-height) / 2) - (var(--input-height) / 2));
  margin-bottom: calc((var(--toolbar-height) / 2) - (var(--input-height) / 2));
  font-size: var(--font-size);
  box-shadow: none;
  position: relative;
}
#app-mount .input-2VB9rf::placeholder {
  font-size: var(--font-size);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
}
#app-mount .input-2VB9rf:focus {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
  border-radius: var(--border-radius);
}
#app-mount .scroller-zPkAnE {
  margin-right: 0;
  background: transparent;
  max-height: unset;
  margin-top: 0;
}
#app-mount .content-1jxX5g {
  height: calc(var(--item-height) - 4px);
  line-height: var(--line-height);
  padding: 0;
  width: 100%;
  cursor: var(--cursor);
  display: flex;
  align-items: center;
}
#app-mount .result-oB0z-- {
  height: auto;
  cursor: var(--cursor);
}
#app-mount .result-oB0z--.resultFocused-3aIoYe {
  background: var(--background-modifier-hover);
}
#app-mount .result-oB0z--:active[role=button] {
  background: var(--background-modifier-active);
}
#app-mount .result-oB0z--[role=button] {
  border-radius: 0;
  display: flex;
  align-items: center;
  height: var(--item-height);
  padding: 0 var(--spacing);
}
#app-mount .note-S--UP5,
#app-mount .wrapper-232cHJ,
#app-mount .autocompleteQuerySymbol-1kyGZ5 {
  margin-top: 0;
  text-transform: none;
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  box-shadow: none;
}
#app-mount .iconContainer-3UxHn2 {
  margin-right: var(--spacing);
}
#app-mount .match-38WbBN {
  color: var(--text-normal);
  margin-right: var(--spacing-half);
  font-size: var(--font-size);
}
#app-mount .username-2hHyRL,
#app-mount .miscContainer-2ptJ_C {
  opacity: 1;
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
}
#app-mount .misc-1CT3G7 {
  margin-left: var(--spacing);
}
#app-mount .resultFocused-3aIoYe .match-38WbBN,
#app-mount .resultFocused-3aIoYe .note-S--UP5,
#app-mount .resultFocused-3aIoYe .username-2hHyRL,
#app-mount .resultFocused-3aIoYe .miscContainer-2ptJ_C,
#app-mount .resultFocused-3aIoYe .icon-30q1Or {
  color: var(--text-normal);
}
#app-mount .header-13MUnb {
  margin: 0;
  line-height: var(--line-height);
  padding: 0 var(--spacing);
  font-size: var(--font-size);
  text-transform: none;
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .protip-1b9XPC {
  padding: var(--spacing);
  border-color: var(--base-border);
  background: var(--background-alt);
}
#app-mount .protip-1b9XPC .pro-1T8RK7 {
  display: none;
}
#app-mount .protip-1b9XPC .autocompleteQuerySymbol-1kyGZ5 {
  font-family: var(--font-family-monospace);
}
#app-mount .protip-1b9XPC .tip-2ab612 {
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size);
  opacity: 1;
}
#app-mount .emptyState-2gL-9T {
  flex-grow: 1;
  background: transparent;
  padding: var(--spacing);
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  border-top: 1px solid var(--base-border);
}
#app-mount .emptyState-2gL-9T .emptyStateNote-ZYTetQ {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-muted);
}
#app-mount .emptyState-2gL-9T .emptyStateCTA-veJ2Cu {
  opacity: 1;
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .emptyState-2gL-9T:before {
  content: "";
  width: 280px;
  height: 140px;
  background: var(--text-muted);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/5.svg") center/contain no-repeat;
  margin-bottom: var(--spacing-double);
}

#app-mount .downloadLink-1ywL9o {
  opacity: 1;
  text-shadow: var(--elevation-2);
}

#app-mount .container-1If-HZ {
  background: var(--background);
  flex-wrap: wrap;
}
#app-mount .container-1If-HZ::before {
  content: "Reactions";
  height: 50px;
  display: flex;
  align-items: center;
  padding: var(--spacing-double);
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
  width: 100%;
  box-sizing: border-box;
  border-bottom: 1px solid var(--base-border);
}
#app-mount .container-1If-HZ .reactors-Blmlhw {
  background: var(--background);
  border-left: 1px solid var(--base-border);
  height: calc(100% - 50px);
  flex: 1;
}
#app-mount .container-1If-HZ .reactors-Blmlhw .content-3YMskv {
  height: auto !important;
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI {
  box-shadow: none;
  margin: 0;
  padding: 0 var(--spacing);
  height: var(--item-height);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI:hover {
  background: var(--background-modifier-hover);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI:active {
  background: var(--background-modifier-active);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .remove-3V-yj8 {
  cursor: var(--cursor);
  padding: 0;
  background: transparent;
  color: var(--text-muted);
  opacity: 1;
  width: 12px;
  height: 12px;
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .remove-3V-yj8:hover {
  color: var(--text-normal);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .remove-3V-yj8 path {
  d: path("M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z");
  transform: scale(2) translateY(-2px);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .nickname-miBZxb {
  line-height: normal;
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .nameTag-m8r81H {
  line-height: normal;
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .nameTag-m8r81H .username-Af3M5Y {
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .nameTag-m8r81H .discriminator-byOsvi {
  font-size: var(--font-size);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .nameTag-m8r81H.tagFaded-WP86yt {
  opacity: 1;
  padding-left: var(--spacing-half);
}
#app-mount .container-1If-HZ .reactors-Blmlhw .reactor-3UBcOI .nameTag-m8r81H.tagFaded-WP86yt .username-Af3M5Y {
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
}
#app-mount .container-1If-HZ .scroller-1-nKid {
  background: var(--background);
  padding: 0;
  width: auto;
  height: calc(100% - 50px);
}
#app-mount .container-1If-HZ .scroller-1-nKid .reactionDefault-GBA58K,
#app-mount .container-1If-HZ .scroller-1-nKid .reactionSelected-1pqISm {
  border-radius: var(--border-radius);
  padding: var(--spacing-half) var(--spacing);
  cursor: var(--cursor);
  margin: var(--spacing);
  color: var(--text-normal);
}
#app-mount .container-1If-HZ .scroller-1-nKid .colorStandard-2KCXvj {
  color: inherit;
}
#app-mount .container-1If-HZ .scroller-1-nKid .reactionSelected-1pqISm {
  background: var(--accent-solid);
  color: var(--white);
}
#app-mount .container-1If-HZ .scroller-1-nKid .reactionDefault-GBA58K:hover {
  background: transparent;
}
#app-mount .container-1If-HZ .scroller-1-nKid .emoji-236_Ij {
  padding: 0;
  margin-right: var(--spacing);
}

#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d div[style*="transform: translate"] {
  transform: none !important;
}
#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d button .cardIconSmall-2gJ6xX {
  width: 24px;
  height: 16.5px;
  box-shadow: none;
}
#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d button .cardIconSmall-2gJ6xX:before, #app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d button .cardIconSmall-2gJ6xX:after {
  border-radius: 0;
}
#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d button:first-child {
  margin: 0;
}
#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d .inputWrapper-2YCfto .cardIconSmall-2gJ6xX,
#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d .cardNumberWrapper-3YhV1H .cardIconSmall-2gJ6xX {
  display: none;
}
#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d .row-2grg9k {
  padding-top: var(--spacing);
}
#app-mount .form-77IDep .content-sp-7A3 .transitionGroup-aR7y1d .row-2grg9k:first-child {
  padding-top: 0;
}

#app-mount .shaker-1QVc6p {
  flex-grow: 0;
}
#app-mount .shaker-1QVc6p .modalHeader-1a6oWz {
  display: none;
}
#app-mount .shaker-1QVc6p .breadcrumbsWrapper-3avBWN {
  position: relative;
  left: calc(var(--spacing-double) * -1);
  padding: 0 var(--spacing-double);
  height: 50px;
  box-sizing: border-box;
  width: calc(100% + var(--spacing) * 4);
  border-bottom: 1px solid var(--base-border);
  display: flex;
  align-items: center;
}
#app-mount .shaker-1QVc6p .breadcrumbsWrapper-3avBWN .breadcrumbWrapper-WmDjgG {
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
}
#app-mount .shaker-1QVc6p .breadcrumbsWrapper-3avBWN .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a {
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  opacity: 0.5;
  line-height: 18px;
}
#app-mount .shaker-1QVc6p .breadcrumbsWrapper-3avBWN .breadcrumbWrapper-WmDjgG .breadcrumb-OALf_a.activeBreadcrumb-p6aw-F {
  opacity: 1;
  color: var(--text-normal);
}
#app-mount .shaker-1QVc6p .content-1LAB8Z {
  padding-top: 0;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d div[style*="transform: translate"] {
  transform: none !important;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 {
  padding-top: var(--spacing-double);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .selectPlanChooseTitle-2ClZSL {
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .selectPlanDivider-1mx_6q {
  display: none;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .selectPlanTotalRow-Coq3OB {
  margin-top: var(--spacing);
  border-radius: var(--border-radius);
  background: var(--background-alt);
  border: 1px solid var(--base-border);
  padding: var(--spacing);
  height: auto;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .selectPlanTotalRow-Coq3OB .totalLabel-kW8CA9 {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .selectPlanTotalRow-Coq3OB .totalAmount-QMwGZT {
  font-weight: var(--font-weight-normal);
  color: var(--text-normal);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .selectPlanTotalRow-Coq3OB .totalAmount-QMwGZT .pricePerInterval-WZc5oR {
  font-size: var(--font-size);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .selectPlanTotalRow-Coq3OB .totalAmount-QMwGZT .pricePerInterval-WZc5oR strong {
  color: var(--text-normal);
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  line-height: normal;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .planOption-3m2svN {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  padding: 0;
  margin-bottom: var(--spacing-half);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .planOption-3m2svN .planOptionClickable-2m4lfF {
  cursor: var(--cursor);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .planOption-3m2svN .optionSelected-1d91jC {
  color: var(--text-normal);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .planOption-3m2svN .planOptionDiscount-cS8uaO {
  color: var(--white);
  background: rgb(var(--status-green));
  border-radius: var(--border-radius);
  text-transform: capitalize;
  font-size: var(--font-size);
  margin-left: var(--spacing-half);
  padding: calc(var(--spacing) / 5) var(--spacing-half);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .planOption-3m2svN .planOptionCheckbox-3ik8cg {
  margin-right: var(--spacing-half);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .planOption-3m2svN .planOptionCheckbox-3ik8cg .inputReadonly-rYU97L {
  z-index: 1;
  opacity: 1;
  position: relative;
  -webkit-appearance: checkbox;
     -moz-appearance: checkbox;
          appearance: checkbox;
  width: 14px !important;
  height: 14px !important;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .stepBody-1cR8n4 .planOption-3m2svN .planOptionCheckbox-3ik8cg .checkbox-1ix_J3 {
  display: none;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .paymentTypeSelectStep-q07Z2s {
  padding: 0;
  margin-top: var(--spacing);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .inputWrapper-2YCfto .cardIconSmall-2gJ6xX,
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .cardNumberWrapper-3YhV1H .cardIconSmall-2gJ6xX {
  display: none;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .row-2grg9k {
  padding-top: var(--spacing);
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d .row-2grg9k:first-child {
  padding-top: 0;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d button .cardIconSmall-2gJ6xX {
  width: 24px;
  height: 16.5px;
  box-shadow: none;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d button .cardIconSmall-2gJ6xX:before, #app-mount .shaker-1QVc6p .transitionGroup-aR7y1d button .cardIconSmall-2gJ6xX:after {
  border-radius: 0;
}
#app-mount .shaker-1QVc6p .transitionGroup-aR7y1d button:first-child {
  margin: 0;
}
#app-mount .shaker-1QVc6p .link-3dHnkW {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
  display: flex;
  align-items: center;
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  cursor: var(--cursor);
  text-decoration: none;
}
#app-mount .shaker-1QVc6p .link-3dHnkW:hover {
  border: 1px solid currentColor;
}
#app-mount .shaker-1QVc6p .link-3dHnkW:hover .contents-18-Yxp {
  background-image: none;
}
#app-mount .shaker-1QVc6p .link-3dHnkW:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}

#app-mount .shaker-1QVc6p .link-3dHnkW:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
#app-mount .shaker-1QVc6p .link-3dHnkW:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .main-3auUui {
  padding: var(--spacing-double);
  justify-content: center;
}
#app-mount .main-3auUui .close-hZ94c6 {
  background: var(--text-muted);
  width: 16px;
  height: 16px;
  top: var(--spacing-double);
  right: var(--spacing-double);
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/contain no-repeat;
  transition: none;
  opacity: 1;
}
#app-mount .main-3auUui .close-hZ94c6:hover {
  background: var(--text-normal);
}
#app-mount .main-3auUui .close-hZ94c6 svg {
  display: none;
}
#app-mount .main-3auUui .guildIcon-1F8t_p {
  margin: var(--spacing-double) 0;
}
#app-mount .main-3auUui .guildIcon-1F8t_p foreignObject {
  -webkit-mask: none;
          mask: none;
}
#app-mount .main-3auUui .guildIcon-1F8t_p foreignObject .iconActiveLarger-1L4Joi {
  width: var(--avatar-size-xl);
  height: var(--avatar-size-xl);
  border-radius: var(--border-radius);
}
#app-mount .main-3auUui .header-QjU-Vz {
  color: var(--text-normal);
  font-size: var(--font-size-xl);
  font-weight: var(--font-weight-light);
  margin-bottom: var(--spacing);
}
#app-mount .main-3auUui .header-QjU-Vz strong {
  font-weight: inherit;
}
#app-mount .main-3auUui .header-QjU-Vz .headerGuildBadge-1qhaRY {
  position: absolute;
  margin: 0;
  margin-top: -11px;
  margin-left: -11px;
  top: calc(var(--spacing) * 4 + var(--avatar-size-xl));
  left: calc(50% + 32px);
  transform: scale(1.25);
}
#app-mount .main-3auUui .guildDescription-GPbJqa {
  margin: 0;
  padding: 0;
}
#app-mount .main-3auUui .choiceHeader-3g-iq5 {
  margin-top: 0;
  width: 100%;
  text-align: center;
  color: var(--text-muted);
}
#app-mount .main-3auUui .options-1VK2u9 {
  margin: 0;
}
#app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc {
  margin-top: var(--spacing);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  box-sizing: border-box;
  line-height: normal;
  transition: none;
  padding: var(--spacing);
  border-radius: var(--button-border-radius);
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
}
#app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc:hover {
  border: 1px solid currentColor;
}
#app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc .channelDescription-1Vw6Lv {
  line-height: normal;
}
#app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc .optionTextContainer-1WT7xh {
  margin: 0 var(--spacing);
}
#app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc .optionArrow-2L2fza {
  color: var(--text-normal);
}
#app-mount .main-3auUui .skip-1vOolA {
  margin-top: var(--spacing-double);
}

html.theme-light #app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .main-3auUui .options-1VK2u9 .optionContainer-15srkc:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .keyboardShortcutsModal-3piNz7 {
  background: var(--background);
  box-shadow: var(--elevation-2);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  opacity: 1 !important;
  max-width: 550px;
  min-width: 550px;
  width: 550px;
  max-height: 575px;
  animation: modal 150ms cubic-bezier(0.175, 0.885, 0.32, 1.275);
}
#app-mount .keyboardShortcutsModal-3piNz7 .modalTitle-37O4n6 {
  padding: var(--spacing-double);
  max-height: 50px;
  margin: 0;
  box-sizing: border-box;
  font-size: var(--font-size-md);
  color: var(--text-normal);
  font-weight: var(--font-weight-semibold);
  border-bottom: 1px solid var(--base-border);
}
#app-mount .keyboardShortcutsModal-3piNz7 .modalTitle-37O4n6 .content-2Add9f {
  margin-right: var(--spacing);
}
#app-mount .keyboardShortcutsModal-3piNz7 .modalTitle-37O4n6 .keybindShortcut-1BD6Z1 {
  margin: 0;
}
#app-mount .keyboardShortcutsModal-3piNz7 .keybindShortcut-1BD6Z1 {
  font-size: var(--font-size-sm);
  height: -webkit-fit-content;
  height: -moz-fit-content;
  height: fit-content;
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  margin-bottom: var(--spacing-half);
  margin-right: 0;
  text-transform: capitalize;
}
#app-mount .keyboardShortcutsModal-3piNz7 .keybindShortcut-1BD6Z1 span {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: var(--spacing-third) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  box-shadow: none;
  border: none;
  margin-right: var(--spacing-half);
  -webkit-user-select: none;
          user-select: none;
  height: 23px;
  transform: none;
}
#app-mount .keyboardShortcutsModal-3piNz7 .ddrArrows-lSnH7P {
  top: 0;
  right: 0;
  height: 50px;
  padding: 0 var(--spacing-double);
  box-sizing: border-box;
  display: flex;
  align-items: center;
}
#app-mount .keyboardShortcutsModal-3piNz7 .ddrArrows-lSnH7P .arrow-2enltQ {
  margin: 0;
  height: 26px;
  width: 26px;
  margin-left: var(--spacing);
  background: var(--text-muted);
  opacity: 0.75;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16" width="16" height="16"><path fill-rule="evenodd" d="M13.03 8.22a.75.75 0 010 1.06l-4.25 4.25a.75.75 0 01-1.06 0L3.47 9.28a.75.75 0 011.06-1.06l2.97 2.97V3.75a.75.75 0 011.5 0v7.44l2.97-2.97a.75.75 0 011.06 0z"/></svg>') center/cover no-repeat;
}
#app-mount .keyboardShortcutsModal-3piNz7 .ddrArrows-lSnH7P .arrow-2enltQ.left-21PxOi {
  transform: rotate(90deg);
}
#app-mount .keyboardShortcutsModal-3piNz7 .ddrArrows-lSnH7P .arrow-2enltQ.up-fkTose {
  transform: rotate(180deg);
}
#app-mount .keyboardShortcutsModal-3piNz7 .ddrArrows-lSnH7P .arrow-2enltQ.right-1AEPK3 {
  transform: rotate(-90deg);
}
#app-mount .keyboardShortcutsModal-3piNz7 .ddrArrows-lSnH7P .arrow-2enltQ.active-2X6Ewx {
  background: var(--text-normal);
  opacity: 1;
}
#app-mount .keyboardShortcutsModal-3piNz7 .modalSubtitle-1Pj5nv {
  display: none;
}
#app-mount .keyboardShortcutsModal-3piNz7 .keyboardShortcutList-13cQ-8 {
  padding: var(--spacing-double);
  grid-gap: var(--spacing);
  height: auto;
  column-count: 2;
  column-gap: var(--spacing);
  display: block;
  overflow: visible;
}
#app-mount .keyboardShortcutsModal-3piNz7 .keyboardShortcutList-13cQ-8 .keybindGroup--6Qp-w {
  padding: var(--spacing);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  height: -webkit-fit-content;
  height: -moz-fit-content;
  height: fit-content;
  width: auto;
  background: var(--background-alt);
  transition: 150ms ease;
  min-height: auto;
  box-sizing: border-box;
  position: relative;
  margin-bottom: var(--spacing);
  break-inside: avoid;
  break-after: always;
}
#app-mount .keyboardShortcutsModal-3piNz7 .keyboardShortcutList-13cQ-8 .keybindGroup--6Qp-w .keybindDescription-2RDbC2 {
  margin-bottom: var(--spacing-third);
  color: var(--text-normal);
  font-size: var(--font-size);
  text-transform: none;
  font-weight: var(--font-weight-normal);
  width: unset;
}

#app-mount .ragingDemon-bDcoXE {
  display: flex;
  align-items: center;
  justify-content: center;
}
#app-mount .ragingDemon-bDcoXE .symbol-3ffeCr {
  height: 25vw;
  width: 25vw;
  position: relative;
  background: url("https://cdn.discordapp.com/emojis/477825238172958730.png?v=1") center/cover no-repeat;
}
#app-mount .ragingDemon-bDcoXE .symbol-3ffeCr img {
  display: none;
}
#app-mount .ragingDemon-bDcoXE .symbol-3ffeCr::after {
  content: "";
  position: absolute;
  bottom: -6vw;
  left: -12vw;
  background: url(https://i.imgur.com/oN8q6xv.png) center/cover no-repeat;
  width: 15vw;
  height: 15vw;
  animation: vibecheck 250ms ease-in-out forwards infinite;
  opacity: 0;
  animation-delay: 1.5s;
}
#app-mount .ragingDemon-bDcoXE .symbol-3ffeCr .symbolBackground-1w6i-M {
  position: fixed;
  background: red !important;
  left: 0;
  top: 0;
  width: 100vw;
  height: 100vh;
  opacity: 1;
  animation: fadeIn 7s linear;
  z-index: -1;
}

#app-mount .modal-3O0aXp {
  font-size: var(--font-size);
  max-width: 435px !important;
}
#app-mount .modal-3O0aXp .date-1k6kG2 {
  position: absolute;
  background: var(--background);
  top: 0;
  height: 18px;
  top: 50%;
  margin-top: -9px;
}
#app-mount .modal-3O0aXp .video-1FESK- {
  border-radius: var(--border-radius);
  box-shadow: var(--elevation-1);
  width: 100%;
  height: auto;
}
#app-mount .modal-3O0aXp .content-s2SEQO {
  line-height: normal;
  font-size: var(--font-size);
}
#app-mount .modal-3O0aXp .content-s2SEQO ul {
  margin: 0;
}
#app-mount .modal-3O0aXp .content-s2SEQO ul li {
  margin-bottom: var(--spacing);
  color: var(--text-muted);
  text-indent: 0;
  background: var(--background-alt);
  border: 1px solid var(--base-border);
  padding: var(--spacing);
}
#app-mount .modal-3O0aXp .content-s2SEQO ul li strong {
  color: var(--text-normal);
}
#app-mount .modal-3O0aXp .content-s2SEQO ul li:before {
  content: none;
}
#app-mount .modal-3O0aXp .content-s2SEQO ul a {
  color: var(--text-link);
}
#app-mount .modal-3O0aXp .container-1_ClKi {
  height: 500px;
}
#app-mount .modal-3O0aXp .added-2hLRj3,
#app-mount .modal-3O0aXp .fixed-3zCC84,
#app-mount .modal-3O0aXp .improved-1NJK-y,
#app-mount .modal-3O0aXp .progress-YsDrV- {
  font-size: var(--font-size);
  font-weight: var(--font-weight-bold);
  margin-top: var(--spacing-double);
  margin-bottom: var(--spacing-half);
}
#app-mount .modal-3O0aXp .added-2hLRj3:after,
#app-mount .modal-3O0aXp .fixed-3zCC84:after,
#app-mount .modal-3O0aXp .improved-1NJK-y:after,
#app-mount .modal-3O0aXp .progress-YsDrV-:after {
  content: none;
}
#app-mount .modal-3O0aXp .added-2hLRj3.marginTop-2incQ6,
#app-mount .modal-3O0aXp .fixed-3zCC84.marginTop-2incQ6,
#app-mount .modal-3O0aXp .improved-1NJK-y.marginTop-2incQ6,
#app-mount .modal-3O0aXp .progress-YsDrV-.marginTop-2incQ6 {
  margin-top: var(--spacing);
}

#app-mount .regionSelectModal-12e-57 {
  background: var(--background) !important;
  padding: 0;
  max-width: 400px !important;
  overflow: hidden;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalHeader-21khC1 {
  text-align: left;
  height: 50px;
  background: var(--background);
  border-bottom: 1px solid var(--base-border);
  padding: var(--spacing-double);
  color: var(--text-normal);
  font-size: var(--font-size-md);
  font-weight: var(--font-weight-semibold);
  margin: 0;
  text-transform: none;
  box-sizing: border-box;
  line-height: normal;
  display: flex;
  align-items: center;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalFooter-20C5iA {
  padding: var(--spacing);
  box-sizing: border-box;
  margin: 0;
  color: var(--text-normal);
  font-size: var(--font-size);
  border-top: 1px solid var(--base-border);
  line-height: var(--line-height);
  display: flex;
  align-items: center;
  text-align: left;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalFooter-20C5iA:before {
  content: "";
  width: 14px;
  height: 14px;
  margin-right: var(--spacing);
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M6.3 5.71a.942.942 0 0 1-.28-.7c0-.28.09-.52.28-.7.19-.18.42-.28.7-.28.28 0 .52.09.7.28.18.19.28.42.28.7 0 .28-.09.52-.28.7a1 1 0 0 1-.7.3c-.28 0-.52-.11-.7-.3zM8 8.01c-.02-.25-.11-.48-.31-.69-.2-.19-.42-.3-.69-.31H6c-.27.02-.48.13-.69.31-.2.2-.3.44-.31.69h1v3c.02.27.11.5.31.69.2.2.42.31.69.31h1c.27 0 .48-.11.69-.31.2-.19.3-.42.31-.69H8V8v.01zM7 2.32C3.86 2.32 1.3 4.86 1.3 8c0 3.14 2.56 5.7 5.7 5.7s5.7-2.55 5.7-5.7c0-3.15-2.56-5.69-5.7-5.69v.01zM7 1c3.86 0 7 3.14 7 7s-3.14 7-7 7-7-3.12-7-7 3.14-7 7-7z"/></svg>') center/contain no-repeat;
  position: relative;
  display: inline-block;
  flex-shrink: 0;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB {
  height: 350px;
  overflow: auto;
  padding: var(--spacing-double);
  display: block;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  line-height: normal;
  transition: none;
  padding: var(--spacing);
  border-radius: var(--button-border-radius);
  margin: 0;
  margin-bottom: var(--spacing);
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  cursor: var(--cursor);
  width: auto;
  height: auto;
  display: flex;
  justify-content: flex-start;
  align-items: center;
  flex-direction: row;
  box-sizing: content-box;
  height: 24px;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3 .regionSelectName-2-2FWh {
  margin: 0;
  padding: 0;
  color: inherit;
  font-size: inherit;
  font-weight: inherit;
  margin-left: var(--spacing);
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3 .regionSelectFlag-3uwFtG {
  width: calc(44px / 1.5);
  height: calc(30px / 1.5);
  background-size: cover;
  background-color: var(--background);
  border: 1px solid var(--base-border);
  border-radius: var(--button-border-radius);
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3:last-child {
  margin: 0;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3:hover {
  border: 1px solid currentColor;
}
#app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}

html.theme-light #app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .regionSelectModal-12e-57 .regionSelectModalOptions-2TWQOB .regionSelectModalOption-2DSIZ3:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .wrapper-O5i5-0 .root-1gCeng {
  max-width: 600px;
  min-width: 400px;
  width: 500px;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .header-1TKi98 {
  position: relative;
  overflow: visible;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .header-1TKi98 .marginBottom8-AtZOdT {
  margin: 0;
  flex-grow: 0;
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .header-1TKi98 .close-hZ94c6 {
  right: calc(var(--spacing-double) - 6px);
  top: unset;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .container-2XeR5Z {
  margin: 0;
  padding: var(--spacing-double);
  background: var(--background);
  box-sizing: border-box;
  position: absolute;
  top: 50px;
  left: 0;
  width: 100%;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .container-2XeR5Z .inner-3ErfOT {
  overflow: visible !important;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .container-2XeR5Z .iconLayout-1WxHy4 {
  position: absolute;
  height: 100%;
  width: 24px;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .container-2XeR5Z .iconLayout-1WxHy4 .iconContainer-O4O2CN {
  width: 14px;
  height: 14px;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .container-2XeR5Z .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-3cZ1F_ {
  color: var(--text-muted);
  cursor: var(--cursor);
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .container-2XeR5Z .iconLayout-1WxHy4 .iconContainer-O4O2CN .icon-3cZ1F_:hover {
  color: var(--text-normal);
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .content-1LAB8Z {
  height: 300px;
  margin-top: 65px;
  margin-bottom: 0;
  display: flex;
  align-items: center;
  justify-content: center;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .content-1LAB8Z .title-2BxgL2 {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  text-transform: none;
  display: flex;
  align-items: center;
  flex-direction: column;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .content-1LAB8Z .title-2BxgL2::before {
  content: "";
  width: 272px;
  height: 146px;
  background: var(--text-muted);
  position: relative;
  display: block;
  margin-bottom: var(--spacing-half);
  -webkit-mask: url("https://discordstyles.github.io/Slate/assets/illustrations/4.svg") center/contain no-repeat;
          mask: url("https://discordstyles.github.io/Slate/assets/illustrations/4.svg") center/contain no-repeat;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C {
  height: 300px;
  max-height: unset;
  padding: 0;
  margin-top: 65px;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .content-3YMskv {
  height: auto !important;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae {
  box-sizing: border-box;
  height: var(--item-height);
  margin: 0;
  padding: 0 var(--spacing-double);
  border-radius: 0;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae:hover {
  background: var(--background-modifier-hover);
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae:active {
  background: var(--background-modifier-active);
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowButton-3opYo2,
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .lookLink-9FtZy- {
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
  cursor: var(--cursor);
  height: var(--input-height);
  min-height: var(--input-height);
  width: auto;
  margin: 0;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowButton-3opYo2:hover,
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .lookLink-9FtZy-:hover {
  border: 1px solid currentColor;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowButton-3opYo2:hover .contents-18-Yxp,
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .lookLink-9FtZy-:hover .contents-18-Yxp {
  text-decoration: none;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowButton-3opYo2:focus,
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .lookLink-9FtZy-:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowButton-3opYo2.lookLink-9FtZy-,
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .lookLink-9FtZy-.lookLink-9FtZy- {
  pointer-events: none;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowInfo-I9V9v- {
  margin-right: var(--spacing);
  overflow: visible;
  max-width: 85%;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowInfo-I9V9v- .inviteRowAvatar-EURMT6 {
  height: var(--avatar-size-sm) !important;
  width: var(--avatar-size-sm) !important;
  margin-right: var(--spacing);
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowInfo-I9V9v- .inviteRowAvatar-EURMT6 foreignObject {
  overflow: visible;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowInfo-I9V9v- .inviteRowName-1tVaxu {
  color: var(--text-normal);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .settingsContent-3Pxg5D {
  margin: 0;
  align-items: flex-start;
  height: auto;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .settingsContent-3Pxg5D .marginTop20-3TxNs6:first-child {
  margin: 0;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .settingsContent-3Pxg5D .switch-3wwwcV {
  margin-right: var(--spacing-half);
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .footer-2gL1pp .title-3sZWYQ,
#app-mount .wrapper-O5i5-0 .root-1gCeng .footer-2gL1pp .content-3CCvMx:before {
  display: none;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .footer-2gL1pp div.input-cIJ7To {
  background: transparent;
  border: none;
  padding: 0;
  height: auto;
}
#app-mount .wrapper-O5i5-0 .root-1gCeng .footer-2gL1pp .footerText-2a7NxZ {
  color: var(--text-muted);
  margin-top: var(--spacing-half);
}

html.theme-light #app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowButton-3opYo2:hover,
html.theme-light #app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .lookLink-9FtZy-:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .inviteRowButton-3opYo2:focus,
html.theme-light #app-mount .wrapper-O5i5-0 .root-1gCeng .scroller-2hZ97C .inviteRow-2L02ae .lookLink-9FtZy-:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .root-1gCeng .modalContent-3_WBnz {
  padding: 0 !important;
}
#app-mount .root-1gCeng .modalContent-3_WBnz .editingContainer-3s5xK0 {
  background: #000;
  border-radius: var(--border-radius);
  margin: var(--spacing-double);
}
#app-mount .root-1gCeng .modalContent-3_WBnz .editingContainer-3s5xK0 .overlay-4k_Q4- {
  box-shadow: 0 0 0 100vmax rgba(0, 0, 0, 0.5);
}
#app-mount .root-1gCeng .modalContent-3_WBnz .sliderContainer-1N1-Pn {
  width: 100%;
  margin: 0;
  box-sizing: border-box;
  padding: 0 var(--spacing-double);
  margin-bottom: var(--spacing-double);
}
#app-mount .root-1gCeng .modalContent-3_WBnz .sliderContainer-1N1-Pn .icon-2glot6 {
  display: none;
}
#app-mount .root-1gCeng .modalContent-3_WBnz .sliderContainer-1N1-Pn .slider-1PF9SW {
  top: 0;
}

#app-mount .lookFilled-1Gx00P,
#app-mount .lookInverted-2D7oAl,
#app-mount .lookLink-9FtZy-,
#app-mount .lookOutlined-3sRXeN,
#app-mount .lookGhost-2Fn_0-,
#app-mount .colorPrimary-3b3xI6.lookLink-9FtZy-,
#app-mount .bd-modal-wrapper .footer button {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
  min-height: var(--input-height);
  height: var(--input-height);
  line-height: normal;
  transition: none;
  box-sizing: border-box;
  padding: 0 var(--spacing);
  border-radius: var(--button-border-radius);
}
#app-mount .lookFilled-1Gx00P .buttonIcon-1BKzBu,
#app-mount .lookInverted-2D7oAl .buttonIcon-1BKzBu,
#app-mount .lookLink-9FtZy- .buttonIcon-1BKzBu,
#app-mount .lookOutlined-3sRXeN .buttonIcon-1BKzBu,
#app-mount .lookGhost-2Fn_0- .buttonIcon-1BKzBu,
#app-mount .colorPrimary-3b3xI6.lookLink-9FtZy- .buttonIcon-1BKzBu,
#app-mount .bd-modal-wrapper .footer button .buttonIcon-1BKzBu {
  margin-right: var(--spacing-half);
}
#app-mount .lookFilled-1Gx00P,
#app-mount .bd-modal-wrapper .footer button,
#app-mount .primaryButton-2BsGPp {
  color: var(--white);
  background-color: rgb(var(--accent));
  margin-left: var(--spacing);
}
#app-mount .lookFilled-1Gx00P:hover,
#app-mount .bd-modal-wrapper .footer button:hover,
#app-mount .primaryButton-2BsGPp:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .lookFilled-1Gx00P:focus,
#app-mount .bd-modal-wrapper .footer button:focus,
#app-mount .primaryButton-2BsGPp:focus {
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .lookLink-9FtZy- {
  padding: 0;
  color: var(--text-link);
  height: auto;
  min-height: unset;
  cursor: pointer;
}
#app-mount .lookLink-9FtZy-:hover .contents-18-Yxp {
  background-image: none !important;
  text-decoration: underline;
}
#app-mount .lookLink-9FtZy-.reset-2ikQ30 {
  opacity: 1;
  margin: 0 !important;
}
#app-mount .secondaryButton-BIo-2g {
  margin: 0;
}
#app-mount .primaryButton-2BsGPp,
#app-mount .secondaryButton-BIo-2g {
  flex: 0;
}
#app-mount .colorPrimary-3b3xI6.lookLink-9FtZy-,
#app-mount .colorPrimary-3b3xI6.lookFilled-1Gx00P,
#app-mount .lookInverted-2D7oAl,
#app-mount .lookOutlined-3sRXeN,
#app-mount .secondaryButton-BIo-2g,
#app-mount .actionButton-uPB8Fs,
#app-mount .lookGhost-2Fn_0-,
#app-mount .cancelButton-10XRsm {
  color: var(--text-normal);
  background: var(--background-light);
  border: 1px solid var(--base-border);
  box-shadow: none !important;
  cursor: var(--cursor);
}
#app-mount .colorPrimary-3b3xI6.lookLink-9FtZy-:hover,
#app-mount .colorPrimary-3b3xI6.lookFilled-1Gx00P:hover,
#app-mount .lookInverted-2D7oAl:hover,
#app-mount .lookOutlined-3sRXeN:hover,
#app-mount .secondaryButton-BIo-2g:hover,
#app-mount .actionButton-uPB8Fs:hover,
#app-mount .lookGhost-2Fn_0-:hover,
#app-mount .cancelButton-10XRsm:hover {
  border: 1px solid currentColor;
}
#app-mount .colorPrimary-3b3xI6.lookLink-9FtZy-:hover .contents-18-Yxp,
#app-mount .colorPrimary-3b3xI6.lookFilled-1Gx00P:hover .contents-18-Yxp,
#app-mount .lookInverted-2D7oAl:hover .contents-18-Yxp,
#app-mount .lookOutlined-3sRXeN:hover .contents-18-Yxp,
#app-mount .secondaryButton-BIo-2g:hover .contents-18-Yxp,
#app-mount .actionButton-uPB8Fs:hover .contents-18-Yxp,
#app-mount .lookGhost-2Fn_0-:hover .contents-18-Yxp,
#app-mount .cancelButton-10XRsm:hover .contents-18-Yxp {
  text-decoration: none;
}
#app-mount .colorPrimary-3b3xI6.lookLink-9FtZy-:focus,
#app-mount .colorPrimary-3b3xI6.lookFilled-1Gx00P:focus,
#app-mount .lookInverted-2D7oAl:focus,
#app-mount .lookOutlined-3sRXeN:focus,
#app-mount .secondaryButton-BIo-2g:focus,
#app-mount .actionButton-uPB8Fs:focus,
#app-mount .lookGhost-2Fn_0-:focus,
#app-mount .cancelButton-10XRsm:focus {
  box-shadow: 0 0 0 1px currentColor !important;
  border: 1px solid currentColor !important;
}
#app-mount .premiumIcon-YgHhed {
  margin-right: var(--spacing-third);
  height: 16px;
  width: 16px;
}

html.theme-light #app-mount .colorPrimary-3b3xI6.lookLink-9FtZy-:hover,
html.theme-light #app-mount .colorPrimary-3b3xI6.lookFilled-1Gx00P:hover,
html.theme-light #app-mount .lookInverted-2D7oAl:hover,
html.theme-light #app-mount .lookOutlined-3sRXeN:hover,
html.theme-light #app-mount .lookGhost-2Fn_0-:hover,
html.theme-light #app-mount .secondaryButton-BIo-2g:hover,
html.theme-light #app-mount .actionButton-uPB8Fs:hover,
html.theme-light #app-mount .cancelButton-10XRsm:hover {
  background: var(--background);
  border: 1px solid var(--secondary-border);
}
html.theme-light #app-mount .colorPrimary-3b3xI6.lookLink-9FtZy-:focus,
html.theme-light #app-mount .colorPrimary-3b3xI6.lookFilled-1Gx00P:focus,
html.theme-light #app-mount .lookInverted-2D7oAl:focus,
html.theme-light #app-mount .lookOutlined-3sRXeN:focus,
html.theme-light #app-mount .lookGhost-2Fn_0-:focus,
html.theme-light #app-mount .secondaryButton-BIo-2g:focus,
html.theme-light #app-mount .actionButton-uPB8Fs:focus,
html.theme-light #app-mount .cancelButton-10XRsm:focus {
  box-shadow: 0 0 0 2px rgba(0, 0, 0, 0.05) !important;
  border: 1px solid var(--secondary-border) !important;
}

#app-mount .container-3auIfb,
#app-mount .checkboxWrapper-SkhIWG {
  width: auto;
  border-radius: 0;
  background: transparent !important;
  display: flex;
  align-items: center;
  box-shadow: none;
  -webkit-box-shadow: none;
  cursor: var(--cursor);
}
#app-mount .container-3auIfb .slider-TkfMQL,
#app-mount .checkboxWrapper-SkhIWG .slider-TkfMQL {
  display: none;
}
#app-mount .container-3auIfb .input-rwLH4i,
#app-mount .container-3auIfb .input-3ITkQf,
#app-mount .checkboxWrapper-SkhIWG .input-rwLH4i,
#app-mount .checkboxWrapper-SkhIWG .input-3ITkQf {
  margin: 0;
  opacity: 1;
  height: 14px !important;
  width: 14px !important;
  position: relative;
  cursor: var(--cursor);
  -webkit-appearance: checkbox;
     -moz-appearance: checkbox;
          appearance: checkbox;
}
#app-mount .checkboxWrapper-SkhIWG {
  width: auto;
}
#app-mount .checkboxWrapper-SkhIWG .labelForward-1wfipV {
  padding-left: var(--spacing-half);
  cursor: var(--cursor);
}
#app-mount .checkboxWrapper-SkhIWG .labelForward-1wfipV .size14-e6ZScH {
  font-size: var(--font-size);
}
#app-mount .checkbox-1ix_J3 {
  display: none;
}
#app-mount .checkbox-3kaeSU .checkboxInner-3yjcPe .checkboxElement-1qV33p:checked + span {
  background-color: var(--accent-solid);
  border-color: var(--accent-solid);
}

.disabled-2HSEFa {
  --cursor:not-allowed;
}

#app-mount .container-1nZlH6 {
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  background: var(--background-dark);
  font-size: var(--font-size);
  height: var(--input-height);
  padding: 0 var(--spacing-half);
  min-height: auto;
  animation: none;
  transition: none;
  cursor: var(--cursor);
}
#app-mount .container-1nZlH6 .layout-eEMo5y {
  position: relative;
  height: 100%;
}
#app-mount .container-1nZlH6 .layout-eEMo5y .input-1UhAnY {
  padding: 0;
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight);
  height: 100%;
  cursor: var(--cursor);
}
#app-mount .container-1nZlH6 .layout-eEMo5y .flex-1xMQg5 {
  align-items: center;
}
#app-mount .container-1nZlH6 .layout-eEMo5y button {
  margin: 0;
  padding: 0;
  transition: none;
  cursor: var(--cursor);
  width: 16px;
  height: 16px;
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 14 16" width="56" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M0 11.592v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3l-1.3 1.3-3-3 1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>') center/12px no-repeat;
}
#app-mount .container-1nZlH6 .layout-eEMo5y button .contents-18-Yxp {
  display: none;
}
#app-mount .container-1nZlH6 .layout-eEMo5y .flag-16iIBd {
  display: none;
}
#app-mount .container-1nZlH6 .layout-eEMo5y .name-3suiPo {
  margin: 0;
}
#app-mount .container-1nZlH6:hover button {
  background: var(--text-normal);
}
#app-mount .container-1nZlH6.recording-1H2dS7 {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
}
#app-mount .container-1nZlH6.recording-1H2dS7 button {
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/12px no-repeat;
  background: var(--text-muted);
}
#app-mount .container-1nZlH6.recording-1H2dS7 button:hover {
  background: var(--text-normal);
}

html.theme-light #app-mount .container-1nZlH6 {
  background: var(--background);
}

#app-mount .radioGroup-1GBvlr .item-26Dhrx {
  border-radius: 0;
  margin: 0;
  background: transparent !important;
  border: 1px solid var(--base-border);
  border-top: none;
  cursor: var(--cursor);
  padding: var(--spacing) !important;
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx[style*=background] {
  background: var(--accent-solid) !important;
  border-color: var(--accent-solid) !important;
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx .info-3LOr12 {
  cursor: var(--cursor);
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx .labelForward-1wfipV {
  padding: 0;
  line-height: normal !important;
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx .title-3BE6m5 {
  font-size: var(--font-size);
  font-weight: var(--font-weight-semibold);
  color: var(--text-normal) !important;
  line-height: var(--line-height);
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx .title-3BE6m5 .icon-3pNFyS {
  display: none;
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx .desc-2Dttbk,
#app-mount .radioGroup-1GBvlr .item-26Dhrx .title-3BE6m5:after {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  color: var(--text-muted);
  line-height: normal;
  margin: 0;
  line-height: var(--line-height);
  display: block;
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx .descChecked-XkfPsU,
#app-mount .radioGroup-1GBvlr .item-26Dhrx .titleChecked-2wg0pd, #app-mount .radioGroup-1GBvlr .item-26Dhrx[style*=background] .title-3BE6m5:after {
  color: var(--white) !important;
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx .checkbox-1ix_J3,
#app-mount .radioGroup-1GBvlr .item-26Dhrx .inputDefault-3JxKJ2 {
  display: none;
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx:first-child {
  border-radius: var(--border-radius) var(--border-radius) 0 0;
  border-top: 1px solid var(--base-border);
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx:last-child {
  border-top: none;
  border-radius: 0 0 var(--border-radius) var(--border-radius);
}
#app-mount .radioGroup-1GBvlr .item-26Dhrx:hover .desc-2Dttbk, #app-mount .radioGroup-1GBvlr .item-26Dhrx:hover .title-3BE6m5:after {
  color: var(--text-normal);
}

#app-mount .slider-1PF9SW {
  height: var(--input-height);
  top: -5px;
}
#app-mount .slider-1PF9SW .mark-1xjQqt {
  top: -8px;
  height: 28px;
}
#app-mount .slider-1PF9SW .mark-1xjQqt .markValue-2DwdXI {
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
  font-size: var(--font-size-sm);
}
#app-mount .slider-1PF9SW .mark-1xjQqt .markDash-3hAolZ {
  background: transparent;
  border-left: thin solid var(--base-border);
  border-right: thin solid var(--base-border);
  width: 1px;
}
#app-mount .slider-1PF9SW .bar-2Qqk5Z {
  border-radius: 50px;
  height: 4px;
  background: var(--background-dark);
  box-shadow: 0 0 0 1px var(--base-border);
  top: 50%;
  transform: translateY(-50%);
}
#app-mount .slider-1PF9SW .track-11EASc {
  height: var(--input-height);
}
#app-mount .slider-1PF9SW .barFill-23-gu- {
  background: var(--accent-solid);
}
#app-mount .slider-1PF9SW .grabber-3mFHz2 {
  background: var(--accent-solid);
  box-shadow: none;
  border: none;
  margin: 0;
  transform: translateY(-50%) translateX(-50%);
  height: 16px;
  width: 16px;
  border-radius: 50px !important;
}
#app-mount .slider-1PF9SW .grabber-3mFHz2:hover {
  box-shadow: inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}
#app-mount .slider-1PF9SW .grabber-3mFHz2:active {
  box-shadow: 0 0 0 3px rgba(var(--accent), 0.25), inset 0 0 0 100vmax rgba(255, 255, 255, 0.1);
}

#app-mount .css-13kbzi0-control,
#app-mount .css-15ejc46-control,
#app-mount .css-1a8reka-control,
#app-mount .css-1yegjoj-control,
#app-mount .css-2yldzf-control,
#app-mount .css-oc2jo8-control,
#app-mount .css-oce0qz-control,
#app-mount .css-hygzao-control,
#app-mount .css-1qm8c5n-control,
#app-mount .sizeMedium-6vZ9JV.select-1Pkeg4,
#app-mount .css-gd8if9-control,
#app-mount .css-x3hllb-control,
#app-mount .css-z86t1q-control,
#app-mount .css-1ou54ee-control {
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  background: var(--background-dark);
  font-size: var(--font-size);
  height: var(--input-height);
  padding: 0;
  min-height: auto;
  transition: none;
  box-sizing: border-box;
  cursor: var(--cursor);
}
#app-mount .css-13kbzi0-control.css-1qm8c5n-control, #app-mount .css-13kbzi0-control.css-2yldzf-control, #app-mount .css-13kbzi0-control.css-1ou54ee-control, #app-mount .css-13kbzi0-control.selectOpen-hQuR6b,
#app-mount .css-15ejc46-control.css-1qm8c5n-control,
#app-mount .css-15ejc46-control.css-2yldzf-control,
#app-mount .css-15ejc46-control.css-1ou54ee-control,
#app-mount .css-15ejc46-control.selectOpen-hQuR6b,
#app-mount .css-1a8reka-control.css-1qm8c5n-control,
#app-mount .css-1a8reka-control.css-2yldzf-control,
#app-mount .css-1a8reka-control.css-1ou54ee-control,
#app-mount .css-1a8reka-control.selectOpen-hQuR6b,
#app-mount .css-1yegjoj-control.css-1qm8c5n-control,
#app-mount .css-1yegjoj-control.css-2yldzf-control,
#app-mount .css-1yegjoj-control.css-1ou54ee-control,
#app-mount .css-1yegjoj-control.selectOpen-hQuR6b,
#app-mount .css-2yldzf-control.css-1qm8c5n-control,
#app-mount .css-2yldzf-control.css-2yldzf-control,
#app-mount .css-2yldzf-control.css-1ou54ee-control,
#app-mount .css-2yldzf-control.selectOpen-hQuR6b,
#app-mount .css-oc2jo8-control.css-1qm8c5n-control,
#app-mount .css-oc2jo8-control.css-2yldzf-control,
#app-mount .css-oc2jo8-control.css-1ou54ee-control,
#app-mount .css-oc2jo8-control.selectOpen-hQuR6b,
#app-mount .css-oce0qz-control.css-1qm8c5n-control,
#app-mount .css-oce0qz-control.css-2yldzf-control,
#app-mount .css-oce0qz-control.css-1ou54ee-control,
#app-mount .css-oce0qz-control.selectOpen-hQuR6b,
#app-mount .css-hygzao-control.css-1qm8c5n-control,
#app-mount .css-hygzao-control.css-2yldzf-control,
#app-mount .css-hygzao-control.css-1ou54ee-control,
#app-mount .css-hygzao-control.selectOpen-hQuR6b,
#app-mount .css-1qm8c5n-control.css-1qm8c5n-control,
#app-mount .css-1qm8c5n-control.css-2yldzf-control,
#app-mount .css-1qm8c5n-control.css-1ou54ee-control,
#app-mount .css-1qm8c5n-control.selectOpen-hQuR6b,
#app-mount .sizeMedium-6vZ9JV.select-1Pkeg4.css-1qm8c5n-control,
#app-mount .sizeMedium-6vZ9JV.select-1Pkeg4.css-2yldzf-control,
#app-mount .sizeMedium-6vZ9JV.select-1Pkeg4.css-1ou54ee-control,
#app-mount .sizeMedium-6vZ9JV.select-1Pkeg4.selectOpen-hQuR6b,
#app-mount .css-gd8if9-control.css-1qm8c5n-control,
#app-mount .css-gd8if9-control.css-2yldzf-control,
#app-mount .css-gd8if9-control.css-1ou54ee-control,
#app-mount .css-gd8if9-control.selectOpen-hQuR6b,
#app-mount .css-x3hllb-control.css-1qm8c5n-control,
#app-mount .css-x3hllb-control.css-2yldzf-control,
#app-mount .css-x3hllb-control.css-1ou54ee-control,
#app-mount .css-x3hllb-control.selectOpen-hQuR6b,
#app-mount .css-z86t1q-control.css-1qm8c5n-control,
#app-mount .css-z86t1q-control.css-2yldzf-control,
#app-mount .css-z86t1q-control.css-1ou54ee-control,
#app-mount .css-z86t1q-control.selectOpen-hQuR6b,
#app-mount .css-1ou54ee-control.css-1qm8c5n-control,
#app-mount .css-1ou54ee-control.css-2yldzf-control,
#app-mount .css-1ou54ee-control.css-1ou54ee-control,
#app-mount .css-1ou54ee-control.selectOpen-hQuR6b {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
}
#app-mount .css-1k00wn6-singleValue,
#app-mount .css-111z1s-singleValue,
#app-mount .css-6nrxdk-singleValue,
#app-mount .css-548n9r-singleValue,
#app-mount .css-1yg49vj-singleValue {
  color: var(--text-normal);
  margin: 0;
  display: flex;
  align-items: center;
  height: calc(var(--input-height) - 2px);
  top: 0;
  transform: none;
}
#app-mount .lighten-2aYaaU {
  opacity: 1;
}
#app-mount .icon-JJBzjE {
  color: var(--text-muted);
  min-width: 12px;
  width: 12px;
}
#app-mount .subtitle-2yP_Eh {
  line-height: var(--line-height);
  border-radius: var(--border-radius);
  padding: calc(var(--spacing) / 5) var(--spacing-half);
  color: var(--text-normal);
  background: var(--background-modifier-active);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  flex-grow: 0;
  display: inline-block;
  -webkit-user-select: none;
          user-select: none;
  text-transform: none;
}
#app-mount .selectLabel-2ltwlE {
  padding: 0 var(--spacing-half);
}
#app-mount .css-1hwfws3 {
  padding: 0 var(--spacing-half);
  height: var(--input-height);
  display: flex;
  align-items: center;
}
#app-mount .css-1wy0on6 {
  height: var(--input-height);
}
#app-mount .css-12qlrak-indicatorContainer,
#app-mount .css-1flfamv-indicatorContainer,
#app-mount .css-11dkexk-indicatorContainer,
#app-mount .css-u3suk5-indicatorContainer,
#app-mount .css-1lqc17i-indicatorContainer,
#app-mount .css-95pa8n-indicatorContainer,
#app-mount .css-myto3z-indicatorContainer {
  padding: 0 var(--spacing-half);
  opacity: 1;
  height: 100%;
  display: flex;
  align-items: center;
  cursor: var(--cursor);
  color: var(--text-muted);
}
#app-mount .css-12qlrak-indicatorContainer svg,
#app-mount .css-1flfamv-indicatorContainer svg,
#app-mount .css-11dkexk-indicatorContainer svg,
#app-mount .css-u3suk5-indicatorContainer svg,
#app-mount .css-1lqc17i-indicatorContainer svg,
#app-mount .css-95pa8n-indicatorContainer svg,
#app-mount .css-myto3z-indicatorContainer svg {
  width: 10px;
  height: 10px;
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 10 16" width="40" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M5 11.5l-5-5L1.5 5 5 8.75 8.5 5 10 6.5l-5 5z"/></svg>') center/10px no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 10 16" width="40" style="display:inline-block;fill:currentColor;user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M5 11.5l-5-5L1.5 5 5 8.75 8.5 5 10 6.5l-5 5z"/></svg>') center/10px no-repeat;
  background: currentColor;
  color: inherit;
}
#app-mount .css-12qlrak-indicatorContainer svg path,
#app-mount .css-1flfamv-indicatorContainer svg path,
#app-mount .css-11dkexk-indicatorContainer svg path,
#app-mount .css-u3suk5-indicatorContainer svg path,
#app-mount .css-1lqc17i-indicatorContainer svg path,
#app-mount .css-95pa8n-indicatorContainer svg path,
#app-mount .css-myto3z-indicatorContainer svg path {
  display: none;
}
#app-mount .css-13kbzi0-control,
#app-mount .css-oce0qz-control {
  opacity: 0.5;
}
#app-mount .css-mhi7q3-placeholder,
#app-mount .css-1ao1kba-placeholder {
  opacity: 1;
  color: var(--text-muted);
  margin: 0;
}
#app-mount .title-1B76a1 {
  font-size: var(--font-size);
  line-height: normal;
}
#app-mount .title-1B76a1:only-child {
  margin: 0;
}

.theme-light #app-mount .css-13kbzi0-control,
.theme-light #app-mount .css-15ejc46-control,
.theme-light #app-mount .css-1a8reka-control,
.theme-light #app-mount .css-1yegjoj-control,
.theme-light #app-mount .css-2yldzf-control,
.theme-light #app-mount .css-oc2jo8-control,
.theme-light #app-mount .css-oce0qz-control,
.theme-light #app-mount .css-hygzao-control,
.theme-light #app-mount .css-1qm8c5n-control,
.theme-light #app-mount .sizeMedium-6vZ9JV.select-1Pkeg4,
.theme-light #app-mount .css-gd8if9-control,
.theme-light #app-mount .css-x3hllb-control,
.theme-light #app-mount .css-z86t1q-control,
.theme-light #app-mount .css-1ou54ee-control {
  background: var(--background);
}

#app-mount .input-2A_zIr,
#app-mount .input-cIJ7To,
#app-mount .input-1ppKdn {
  border-radius: var(--border-radius);
  background: var(--background-dark);
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
  border: 1px solid var(--base-border);
  color: var(--text-normal);
  transition: none;
  padding: 0 var(--spacing-half);
  height: var(--input-height);
  line-height: 24px;
  box-sizing: border-box;
}
#app-mount .input-2A_zIr:focus, #app-mount .input-2A_zIr .focused-1mmYsC,
#app-mount .input-cIJ7To:focus,
#app-mount .input-cIJ7To .focused-1mmYsC,
#app-mount .input-1ppKdn:focus,
#app-mount .input-1ppKdn .focused-1mmYsC {
  border: 1px solid var(--accent-solid);
  box-shadow: 0 0 0 2px rgba(var(--accent), 0.25);
}
#app-mount .input-2A_zIr::-webkit-input-placeholder,
#app-mount .input-cIJ7To::-webkit-input-placeholder,
#app-mount .input-1ppKdn::-webkit-input-placeholder {
  color: var(--text-muted);
}
#app-mount .input-2A_zIr.multiInput-1e2xJ7,
#app-mount .input-cIJ7To.multiInput-1e2xJ7,
#app-mount .input-1ppKdn.multiInput-1e2xJ7 {
  border: none;
  background: transparent;
  box-shadow: none;
  padding: 0;
}
#app-mount .input-2A_zIr .emoji-MCvpgl,
#app-mount .input-cIJ7To .emoji-MCvpgl,
#app-mount .input-1ppKdn .emoji-MCvpgl {
  background: var(--background);
}
#app-mount .input-2A_zIr .clearIcon-xXwSFS,
#app-mount .input-cIJ7To .clearIcon-xXwSFS,
#app-mount .input-1ppKdn .clearIcon-xXwSFS {
  width: 12px;
  height: 12px;
}
#app-mount .inputContainer-1SpwlU {
  display: flex;
  align-items: center;
}
#app-mount .inputContainer-1SpwlU .emojiButtonContainer-3d6DFV {
  position: relative;
  margin-left: 0;
}
#app-mount .inputWrapper-31_8H8 {
  flex-grow: 1;
}
#app-mount .inputWrapper-31_8H8 .inputPrefix-2VAOGg {
  display: none;
}
#app-mount .multiInputLast-1aQ3YA {
  flex-grow: 0;
  margin-left: var(--spacing);
}
#app-mount .multiInputLast-1aQ3YAinput {
  padding: 2px 6px;
  padding-left: 18px;
  width: 54px;
}
#app-mount .multiInputLast-1aQ3YA:before {
  content: none;
}
#app-mount .maxLength-39QFBo {
  color: var(--text-muted);
  font-family: var(--font-family-monospace);
  font-size: var(--font-size);
  right: 7px;
  top: 0;
  height: var(--input-height);
  display: flex;
  align-items: center;
}

html.theme-light #app-mount .input-2A_zIr,
html.theme-light #app-mount .input-cIJ7To,
html.theme-light #app-mount .input-1ppKdn {
  background: var(--background);
}

#app-mount .popout-2sKjHu {
  background: var(--background);
  border: 1px solid var(--base-border);
  box-shadow: var(--elevation-1);
}
#app-mount .optionLabel-2CkCZx {
  padding: var(--spacing);
  font-size: var(--font-size);
  line-height: inherit;
}
#app-mount .css-1gl4k7y {
  font-size: var(--font-size);
  color: var(--text-muted);
  font-weight: var(--font-weight-normal);
}
#app-mount .css-n57xjs-menu,
#app-mount .css-1s13zip-menu,
#app-mount .css-1x99fvh-menu,
#app-mount .lookFilled-1h1y05.popout-2sKjHu {
  background: var(--background);
  box-shadow: var(--elevation-1);
  border: 1px solid var(--base-border);
  border-radius: var(--border-radius);
  margin: 0;
  margin-top: -2px;
  overflow: hidden;
}
#app-mount .css-n57xjs-menu.lookFilled-1h1y05.popout-2sKjHu,
#app-mount .css-1s13zip-menu.lookFilled-1h1y05.popout-2sKjHu,
#app-mount .css-1x99fvh-menu.lookFilled-1h1y05.popout-2sKjHu,
#app-mount .lookFilled-1h1y05.popout-2sKjHu.lookFilled-1h1y05.popout-2sKjHu {
  margin: 0;
  z-index: 10;
}
#app-mount .css-n57xjs-menu [class*=-option],
#app-mount .css-n57xjs-menu .optionLabel-2CkCZx,
#app-mount .css-1s13zip-menu [class*=-option],
#app-mount .css-1s13zip-menu .optionLabel-2CkCZx,
#app-mount .css-1x99fvh-menu [class*=-option],
#app-mount .css-1x99fvh-menu .optionLabel-2CkCZx,
#app-mount .lookFilled-1h1y05.popout-2sKjHu [class*=-option],
#app-mount .lookFilled-1h1y05.popout-2sKjHu .optionLabel-2CkCZx {
  font-size: var(--font-size);
  padding: 0 var(--spacing);
  height: var(--item-height);
  min-height: unset;
  cursor: var(--cursor);
  color: var(--text-normal);
  display: flex;
  align-items: center;
  font-weight: var(--font-weight-normal);
}
#app-mount .css-n57xjs-menu [class*=-option]:active,
#app-mount .css-n57xjs-menu .optionLabel-2CkCZx:active,
#app-mount .css-1s13zip-menu [class*=-option]:active,
#app-mount .css-1s13zip-menu .optionLabel-2CkCZx:active,
#app-mount .css-1x99fvh-menu [class*=-option]:active,
#app-mount .css-1x99fvh-menu .optionLabel-2CkCZx:active,
#app-mount .lookFilled-1h1y05.popout-2sKjHu [class*=-option]:active,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .optionLabel-2CkCZx:active {
  background: var(--background-modifier-active);
}
#app-mount .css-n57xjs-menu [class*=-option] .arrow-2KJjTM,
#app-mount .css-n57xjs-menu .optionLabel-2CkCZx .arrow-2KJjTM,
#app-mount .css-1s13zip-menu [class*=-option] .arrow-2KJjTM,
#app-mount .css-1s13zip-menu .optionLabel-2CkCZx .arrow-2KJjTM,
#app-mount .css-1x99fvh-menu [class*=-option] .arrow-2KJjTM,
#app-mount .css-1x99fvh-menu .optionLabel-2CkCZx .arrow-2KJjTM,
#app-mount .lookFilled-1h1y05.popout-2sKjHu [class*=-option] .arrow-2KJjTM,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .optionLabel-2CkCZx .arrow-2KJjTM {
  color: var(--text-muted);
}
#app-mount .css-n57xjs-menu .css-1gnr91b-option,
#app-mount .css-1s13zip-menu .css-1gnr91b-option,
#app-mount .css-1x99fvh-menu .css-1gnr91b-option,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .css-1gnr91b-option {
  background: var(--background-modifier-hover);
}
#app-mount .css-n57xjs-menu .css-12o7ek3-option,
#app-mount .css-n57xjs-menu .css-1kft5vg-option,
#app-mount .css-n57xjs-menu .optionActive-KkAdqq,
#app-mount .css-1s13zip-menu .css-12o7ek3-option,
#app-mount .css-1s13zip-menu .css-1kft5vg-option,
#app-mount .css-1s13zip-menu .optionActive-KkAdqq,
#app-mount .css-1x99fvh-menu .css-12o7ek3-option,
#app-mount .css-1x99fvh-menu .css-1kft5vg-option,
#app-mount .css-1x99fvh-menu .optionActive-KkAdqq,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .css-12o7ek3-option,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .css-1kft5vg-option,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .optionActive-KkAdqq {
  background: var(--accent-solid);
  color: var(--white);
}
#app-mount .css-n57xjs-menu .css-12o7ek3-option .icon-JJBzjE,
#app-mount .css-n57xjs-menu .css-12o7ek3-option .colorStandard-2KCXvj,
#app-mount .css-n57xjs-menu .css-1kft5vg-option .icon-JJBzjE,
#app-mount .css-n57xjs-menu .css-1kft5vg-option .colorStandard-2KCXvj,
#app-mount .css-n57xjs-menu .optionActive-KkAdqq .icon-JJBzjE,
#app-mount .css-n57xjs-menu .optionActive-KkAdqq .colorStandard-2KCXvj,
#app-mount .css-1s13zip-menu .css-12o7ek3-option .icon-JJBzjE,
#app-mount .css-1s13zip-menu .css-12o7ek3-option .colorStandard-2KCXvj,
#app-mount .css-1s13zip-menu .css-1kft5vg-option .icon-JJBzjE,
#app-mount .css-1s13zip-menu .css-1kft5vg-option .colorStandard-2KCXvj,
#app-mount .css-1s13zip-menu .optionActive-KkAdqq .icon-JJBzjE,
#app-mount .css-1s13zip-menu .optionActive-KkAdqq .colorStandard-2KCXvj,
#app-mount .css-1x99fvh-menu .css-12o7ek3-option .icon-JJBzjE,
#app-mount .css-1x99fvh-menu .css-12o7ek3-option .colorStandard-2KCXvj,
#app-mount .css-1x99fvh-menu .css-1kft5vg-option .icon-JJBzjE,
#app-mount .css-1x99fvh-menu .css-1kft5vg-option .colorStandard-2KCXvj,
#app-mount .css-1x99fvh-menu .optionActive-KkAdqq .icon-JJBzjE,
#app-mount .css-1x99fvh-menu .optionActive-KkAdqq .colorStandard-2KCXvj,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .css-12o7ek3-option .icon-JJBzjE,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .css-12o7ek3-option .colorStandard-2KCXvj,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .css-1kft5vg-option .icon-JJBzjE,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .css-1kft5vg-option .colorStandard-2KCXvj,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .optionActive-KkAdqq .icon-JJBzjE,
#app-mount .lookFilled-1h1y05.popout-2sKjHu .optionActive-KkAdqq .colorStandard-2KCXvj {
  color: var(--white);
}

#app-mount .overridePlaceholder-14_rPI {
  margin: 0;
  border: 1px solid var(--base-border);
}
#app-mount .override-2YgiXd,
#app-mount .overrideHighlight-YPcBxt {
  margin: 0;
  padding: var(--spacing-half) !important;
  background: var(--background);
}
#app-mount .override-2YgiXd ~ .override-2YgiXd,
#app-mount .overrideHighlight-YPcBxt ~ .override-2YgiXd {
  margin-top: var(--spacing-half);
}
#app-mount .override-2YgiXd .channelName-28iMRJ,
#app-mount .overrideHighlight-YPcBxt .channelName-28iMRJ {
  font-size: var(--font-size);
  color: var(--text-normal);
  line-height: normal;
}
#app-mount .override-2YgiXd .channelNameByline-R73-tU,
#app-mount .overrideHighlight-YPcBxt .channelNameByline-R73-tU {
  color: var(--text-muted);
  line-height: normal;
}
#app-mount .override-2YgiXd .checkboxGroup-Z7AmuU,
#app-mount .overrideHighlight-YPcBxt .checkboxGroup-Z7AmuU {
  width: -webkit-fit-content;
  width: -moz-fit-content;
  width: fit-content;
}
#app-mount .override-2YgiXd .checkboxContainer-2vV9zd,
#app-mount .override-2YgiXd .checkboxMute-14hTGS,
#app-mount .overrideHighlight-YPcBxt .checkboxContainer-2vV9zd,
#app-mount .overrideHighlight-YPcBxt .checkboxMute-14hTGS {
  display: flex;
  justify-content: center;
  width: 60px;
  height: 16px;
}
#app-mount .override-2YgiXd .checkboxContainer-2vV9zd .checkboxWrapper-SkhIWG,
#app-mount .override-2YgiXd .checkboxMute-14hTGS .checkboxWrapper-SkhIWG,
#app-mount .overrideHighlight-YPcBxt .checkboxContainer-2vV9zd .checkboxWrapper-SkhIWG,
#app-mount .overrideHighlight-YPcBxt .checkboxMute-14hTGS .checkboxWrapper-SkhIWG {
  width: 16px;
  height: 16px;
  flex-grow: 0;
}
#app-mount .override-2YgiXd .checkboxContainer-2vV9zd:before,
#app-mount .override-2YgiXd .checkboxMute-14hTGS:before,
#app-mount .overrideHighlight-YPcBxt .checkboxContainer-2vV9zd:before,
#app-mount .overrideHighlight-YPcBxt .checkboxMute-14hTGS:before {
  content: none;
}
#app-mount .override-2YgiXd .checkboxContainer-2vV9zd .checkbox-1ix_J3,
#app-mount .override-2YgiXd .checkboxMute-14hTGS .checkbox-1ix_J3,
#app-mount .overrideHighlight-YPcBxt .checkboxContainer-2vV9zd .checkbox-1ix_J3,
#app-mount .overrideHighlight-YPcBxt .checkboxMute-14hTGS .checkbox-1ix_J3 {
  display: none;
}
#app-mount .override-2YgiXd .checkboxContainer-2vV9zd.checkboxMute-14hTGS .input-3ITkQf,
#app-mount .override-2YgiXd .checkboxMute-14hTGS.checkboxMute-14hTGS .input-3ITkQf,
#app-mount .overrideHighlight-YPcBxt .checkboxContainer-2vV9zd.checkboxMute-14hTGS .input-3ITkQf,
#app-mount .overrideHighlight-YPcBxt .checkboxMute-14hTGS.checkboxMute-14hTGS .input-3ITkQf {
  opacity: 1;
  z-index: 0;
  -webkit-appearance: checkbox;
     -moz-appearance: checkbox;
          appearance: checkbox;
}
#app-mount .override-2YgiXd .checkboxContainer-2vV9zd.checkboxContainer-2vV9zd .input-3ITkQf,
#app-mount .override-2YgiXd .checkboxMute-14hTGS.checkboxContainer-2vV9zd .input-3ITkQf,
#app-mount .overrideHighlight-YPcBxt .checkboxContainer-2vV9zd.checkboxContainer-2vV9zd .input-3ITkQf,
#app-mount .overrideHighlight-YPcBxt .checkboxMute-14hTGS.checkboxContainer-2vV9zd .input-3ITkQf {
  opacity: 1;
  z-index: 0;
  -webkit-appearance: radio;
     -moz-appearance: radio;
          appearance: radio;
}
#app-mount .override-2YgiXd .inputDefault-3JxKJ2,
#app-mount .override-2YgiXd .checkbox-1ix_J3,
#app-mount .overrideHighlight-YPcBxt .inputDefault-3JxKJ2,
#app-mount .overrideHighlight-YPcBxt .checkbox-1ix_J3 {
  height: 16px !important;
  width: 16px !important;
  cursor: var(--cursor);
}
#app-mount .override-2YgiXd .iconContainer-2h8jYA,
#app-mount .overrideHighlight-YPcBxt .iconContainer-2h8jYA {
  margin: 0;
  color: var(--text-muted);
  height: 16px;
}
#app-mount .override-2YgiXd .iconContainer-2h8jYA svg,
#app-mount .overrideHighlight-YPcBxt .iconContainer-2h8jYA svg {
  height: 16px;
}

#app-mount .card-3Qj_Yx {
  border-radius: var(--border-radius);
  padding: var(--spacing);
}
#app-mount .card-3Qj_Yx.cardWarning-2yPNAa {
  background-color: rgba(var(--status-yellow), 0.25);
  border-color: rgba(var(--status-yellow), 0.5);
}
#app-mount .card-3Qj_Yx.cardDanger-ZurOv3 {
  background-color: rgba(var(--status-red), 0.25);
  border-color: rgba(var(--status-red), 0.5);
}
#app-mount .card-3Qj_Yx.cardSuccess-3uEYjj {
  background-color: rgba(var(--status-green), 0.25);
  border-color: rgba(var(--status-green), 0.5);
}
#app-mount .card-3Qj_Yx.cardBrand-39zmMQ {
  background-color: rgba(var(--accent), 0.25);
  border-color: rgba(var(--accent), 0.5);
}
#app-mount .card-3Qj_Yx.cardPrimary-1Hv-to, #app-mount .card-3Qj_Yx.cardPrimaryOutline-29Ujqw, #app-mount .card-3Qj_Yx.cardPrimaryEditable-3KtE4g {
  background-color: var(--background-alt);
  border-color: var(--base-border);
}
#app-mount .button-2CgfFz {
  width: 16px;
  height: 16px;
  top: 0;
  right: 0;
  box-shadow: none;
  border-radius: 0;
  transition: none;
  background: var(--text-muted);
  -webkit-mask: url("data:image/svg+xml; utf-8,<svg xmlns='http://www.w3.org/2000/svg' aria-hidden='true' class='octicon' version='1.1' viewBox='0 0 12 16'><path d='M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z'></path></svg>") center/12px no-repeat;
  transform: none;
}
#app-mount .button-2CgfFz:hover, #app-mount .button-2CgfFz:active {
  background: var(--text-normal);
}

#app-mount .react-datepicker {
  padding: var(--spacing);
  width: 100%;
  box-sizing: border-box;
}

#app-mount .avatarUploader-3XDtmn .removeButton-1hcZyG {
  font-size: var(--font-size);
  color: var(--text-normal);
  font-weight: var(--font-weight-normal);
  cursor: var(--cursor);
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderInner-3UNxY3 {
  background-color: var(--accent-solid);
  margin-bottom: var(--spacing);
}
#app-mount .avatarUploader-3XDtmn .sizeInfo-SKMPPw {
  color: var(--text-muted);
  font-size: var(--font-size-sm);
  font-weight: var(--font-weight-normal);
  line-height: normal;
}
#app-mount .avatarUploader-3XDtmn .colorStatusRed-1YV2rj {
  font-size: var(--font-size);
  font-weight: var(--font-weight-normal);
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderInner-3UNxY3 {
  width: 64px;
  height: 64px;
  box-shadow: none;
  background-color: var(--background-alt);
  border-radius: var(--border-radius);
  border: 1px solid var(--base-border);
  margin-bottom: var(--spacing);
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderInner-3UNxY3[style*="/assets/"] {
  background-image: none !important;
  background: var(--background-dark);
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderInner-3UNxY3[style*="/assets/"]::before {
  content: "";
  position: absolute;
  display: block;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  background: var(--text-muted);
  -webkit-mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/32% no-repeat;
          mask: url('data:image/svg+xml; utf-8,<svg xmlns="http://www.w3.org/2000/svg" aria-hidden="true" class="octicon" height="64" role="img" viewBox="0 0 12 16" width="48" style="display:inline-block;fill:var(--text-muted);user-select:none;vertical-align:middle"><path fill-rule="evenodd" d="M12 14.002a.998.998 0 0 1-.998.998H1.001A1 1 0 0 1 0 13.999V13c0-2.633 4-4 4-4s.229-.409 0-1c-.841-.62-.944-1.59-1-4 .173-2.413 1.867-3 3-3s2.827.586 3 3c-.056 2.41-.159 3.38-1 4-.229.59 0 1 0 1s4 1.367 4 4v1.002z"/></svg>') center/32% no-repeat;
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderInner-3UNxY3 .avatarUploaderAcronym-3SioMc {
  font-weight: var(--font-weight-light);
  color: var(--text-normal);
  font-size: var(--font-size-lg);
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderInner-3UNxY3 .fileInput-23-d-3 {
  cursor: var(--cursor) !important;
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderHint-3SN212 {
  background: rgba(0, 0, 0, 0.5);
  font-size: 0;
  border-radius: var(--border-radius);
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderHint-3SN212::after {
  content: "";
  width: 25px;
  height: 25px;
  background: var(--white);
  -webkit-mask: url("data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0idXRmLTgiPz4KPCEtLSBHZW5lcmF0ZWQgYnkgSWNvTW9vbi5pbyAtLT4KPCFET0NUWVBFIHN2ZyBQVUJMSUMgIi0vL1czQy8vRFREIFNWRyAxLjEvL0VOIiAiaHR0cDovL3d3dy53My5vcmcvR3JhcGhpY3MvU1ZHLzEuMS9EVEQvc3ZnMTEuZHRkIj4KPHN2ZyB2ZXJzaW9uPSIxLjEiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiIHdpZHRoPSIxNiIgaGVpZ2h0PSIxNiIgdmlld0JveD0iMCAwIDE2IDE2Ij4KPHBhdGggZmlsbD0iIzAwMDAwMCIgZD0iTTEwLjQwNCA1LjExbC0xLjAxNS0xLjAxNC01LjA3NSA1LjA3NGMtMC44NDEgMC44NDEtMC44NDEgMi4yMDQgMCAzLjA0NHMyLjIwNCAwLjg0MSAzLjA0NSAwbDYuMDkwLTYuMDg5YzEuNDAyLTEuNDAxIDEuNDAyLTMuNjczIDAtNS4wNzRzLTMuNjc0LTEuNDAyLTUuMDc1IDBsLTYuMzk0IDYuMzkzYy0wLjAwNSAwLjAwNS0wLjAxMCAwLjAwOS0wLjAxNCAwLjAxMy0xLjk1NSAxLjk1NS0xLjk1NSA1LjEyMyAwIDcuMDc3czUuMTIzIDEuOTU0IDcuMDc4IDBjMC4wMDQtMC4wMDQgMC4wMDgtMC4wMDkgMC4wMTMtMC4wMTRsMC4wMDEgMC4wMDEgNC4zNjUtNC4zNjQtMS4wMTUtMS4wMTQtNC4zNjUgNC4zNjNjLTAuMDA1IDAuMDA0LTAuMDA5IDAuMDA5LTAuMDEzIDAuMDEzLTEuMzkyIDEuMzkyLTMuNjU2IDEuMzkyLTUuMDQ4IDBzLTEuMzkyLTMuNjU1IDAtNS4wNDdjMC4wMDUtMC4wMDUgMC4wMDktMC4wMDkgMC4wMTQtMC4wMTNsLTAuMDAxLTAuMDAxIDYuMzk1LTYuMzkzYzAuODM5LTAuODQgMi4yMDUtMC44NCAzLjA0NSAwczAuODM5IDIuMjA1IDAgMy4wNDRsLTYuMDkwIDYuMDg5Yy0wLjI4IDAuMjgtMC43MzUgMC4yOC0xLjAxNSAwcy0wLjI4LTAuNzM1IDAtMS4wMTRsNS4wNzUtNS4wNzV6Ij48L3BhdGg+Cjwvc3ZnPgo=") center/contain no-repeat;
}
#app-mount .avatarUploader-3XDtmn .avatarUploaderIndicator-2G-aIZ {
  display: none;
}

html.platform-osx #app-mount .guilds-1SWlCJ {
  margin-top: 0;
}
html.platform-osx #app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .listItem-2P_4kh {
  top: -1px;
}

html.platform-linux {
  --titlebar-height:0px;
}
html.platform-linux #guild-header-popout {
  top: var(--toolbar-height) !important;
}

body.styledGuildsAsChannels-DNHtg_ #app-mount .guilds-1SWlCJ .scroller-2TZvBN {
  padding-top: var(--spacing);
}
body.styledGuildsAsChannels-DNHtg_ #app-mount .guilds-1SWlCJ .tutorialContainer-1v44GL .childWrapper-anI2G9 {
  background: var(--background-light) !important;
}
body.styledGuildsAsChannels-DNHtg_ #app-mount .guilds-1SWlCJ .homeIcon-tEMBK1 {
  width: 15%;
}
body.styledGuildsAsChannels-DNHtg_ #app-mount .guilds-1SWlCJ .name-z5133D {
  padding-top: 0;
}
body.styledGuildsAsChannels-DNHtg_ #app-mount .guilds-1SWlCJ .wrapper-sa6paO {
  top: 0 !important;
}
body.styledGuildsAsChannels-DNHtg_ #app-mount .guilds-1SWlCJ .textScroller-dc9_kz {
  line-height: var(--line-height);
}
body.styledGuildsAsChannels-DNHtg_ #app-mount .guilds-1SWlCJ .guildSeparator-3s64Iy {
  margin-top: 8px;
}

#app-mount .buttonContainer-28fw2U.send-button button {
  display: block !important;
}

#app-mount .buttons-3JBrkn > button.button-38aScr.colorBrand-3pXr91:not(.noFocus-2C7BQj):first-child {
  display: block !important;
}

#app-mount .cozy-3raOZG .wrapper-3t9DeA.avatar-1BDn8e {
  box-shadow: none !important;
  overflow: visible !important;
}

#app-mount .container-6sXIoE.withTimeline-824fT_ {
  position: relative;
  margin-bottom: 0;
  padding: var(--spacing) var(--spacing) var(--spacing-triple);
  border-bottom-color: var(--base-border);
  background: rgba(var(--status-green), 0.2);
  min-height: unset;
}
#app-mount .container-6sXIoE.withTimeline-824fT_ button {
  color: var(--text-focus);
  border-radius: var(--border-radius);
}
#app-mount .container-6sXIoE.withTimeline-824fT_ button:hover {
  background: rgba(255, 255, 255, 0.1) !important;
  cursor: pointer;
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .inner-WRV6k5 {
  position: relative;
  z-index: 1;
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .coverWrapper-YAplwJ {
  border: 1px solid var(--base-border);
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .timeline-UWmgAx {
  position: absolute;
  top: 0;
  left: 0;
  margin: 0;
  width: 100%;
  height: 100%;
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .bar-g2ZMIm {
  height: 100%;
  border-radius: 0;
  margin-bottom: 0;
  cursor: pointer;
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .barFill-Dhkah7 {
  background: rgba(var(--status-green), 0.5);
  border-radius: 0;
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .grabber-7sd5f5 {
  display: none;
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .song-tIdBpF {
  color: var(--text-focus);
}
#app-mount .container-6sXIoE.withTimeline-824fT_ .barText-lmqc5O {
  margin-top: calc(var(--spacing-double) / -1);
  padding: 0 var(--spacing);
  position: relative;
  z-index: 1;
  pointer-events: none;
}
#app-mount .container-6sXIoE.withTimeline-824fT_.maximized-vv2Wr0 {
  padding: 0 8px var(--spacing-triple);
}
#app-mount .container-6sXIoE.withTimeline-824fT_.maximized-vv2Wr0 .coverWrapper-YAplwJ {
  border: none;
  border-bottom: 1px solid var(--base-border);
}

@keyframes growIn {
  from {
    transform: scale(0) !important;
    opacity: 0 !important;
  }
  to {
    transform: scale(1) !important;
    opacity: 1 !important;
  }
}
@keyframes modal {
  0% {
    transform: scale(0.75);
  }
  100% {
    transform: scale(1);
  }
}
@keyframes fadeIn {
  0% {
    opacity: 0;
  }
  100% {
    opacity: 1;
  }
}
@keyframes addJoinMenu {
  0% {
    transform: translateX(-10%);
  }
  100% {
    transform: none;
  }
}
@keyframes rotate {
  0% {
    transform: rotate(0);
  }
  100% {
    transform: rotate(360deg);
  }
}
@keyframes progress-indeterminate {
  100% {
    background-position: 100px 0px;
  }
}
@keyframes vibecheck {
  2% {
    transform: translate(7px, -4px) rotate(-0.5deg);
    opacity: 1;
  }
  4% {
    transform: translate(3px, 7px) rotate(2.5deg);
    opacity: 1;
  }
  6% {
    transform: translate(3px, 8px) rotate(0.5deg);
    opacity: 1;
  }
  8% {
    transform: translate(-7px, 4px) rotate(1.5deg);
    opacity: 1;
  }
  10% {
    transform: translate(6px, 10px) rotate(-0.5deg);
    opacity: 1;
  }
  12% {
    transform: translate(4px, 2px) rotate(-0.5deg);
    opacity: 1;
  }
  14% {
    transform: translate(-4px, 6px) rotate(3.5deg);
    opacity: 1;
  }
  16% {
    transform: translate(1px, 5px) rotate(-1.5deg);
    opacity: 1;
  }
  18% {
    transform: translate(3px, -7px) rotate(-2.5deg);
    opacity: 1;
  }
  20% {
    transform: translate(-8px, -7px) rotate(0.5deg);
    opacity: 1;
  }
  22% {
    transform: translate(3px, -2px) rotate(-2.5deg);
    opacity: 1;
  }
  24% {
    transform: translate(5px, -4px) rotate(1.5deg);
    opacity: 1;
  }
  26% {
    transform: translate(-6px, -4px) rotate(-0.5deg);
    opacity: 1;
  }
  28% {
    transform: translate(1px, 0px) rotate(0.5deg);
    opacity: 1;
  }
  30% {
    transform: translate(-9px, -3px) rotate(3.5deg);
    opacity: 1;
  }
  32% {
    transform: translate(3px, 6px) rotate(-1.5deg);
    opacity: 1;
  }
  34% {
    transform: translate(-2px, -3px) rotate(-1.5deg);
    opacity: 1;
  }
  36% {
    transform: translate(9px, -3px) rotate(-0.5deg);
    opacity: 1;
  }
  38% {
    transform: translate(9px, -9px) rotate(-1.5deg);
    opacity: 1;
  }
  40% {
    transform: translate(8px, -7px) rotate(-2.5deg);
    opacity: 1;
  }
  42% {
    transform: translate(-8px, -2px) rotate(2.5deg);
    opacity: 1;
  }
  44% {
    transform: translate(-7px, 2px) rotate(-0.5deg);
    opacity: 1;
  }
  46% {
    transform: translate(-1px, 4px) rotate(3.5deg);
    opacity: 1;
  }
  48% {
    transform: translate(3px, 1px) rotate(1.5deg);
    opacity: 1;
  }
  50% {
    transform: translate(9px, -1px) rotate(2.5deg);
    opacity: 1;
  }
  52% {
    transform: translate(-1px, 5px) rotate(-2.5deg);
    opacity: 1;
  }
  54% {
    transform: translate(9px, -2px) rotate(0.5deg);
    opacity: 1;
  }
  56% {
    transform: translate(5px, -4px) rotate(-2.5deg);
    opacity: 1;
  }
  58% {
    transform: translate(5px, -8px) rotate(-1.5deg);
    opacity: 1;
  }
  60% {
    transform: translate(10px, 4px) rotate(1.5deg);
    opacity: 1;
  }
  62% {
    transform: translate(-8px, 1px) rotate(-2.5deg);
    opacity: 1;
  }
  64% {
    transform: translate(-9px, 6px) rotate(-1.5deg);
    opacity: 1;
  }
  66% {
    transform: translate(-3px, 2px) rotate(0.5deg);
    opacity: 1;
  }
  68% {
    transform: translate(10px, 4px) rotate(0.5deg);
    opacity: 1;
  }
  70% {
    transform: translate(3px, -4px) rotate(-2.5deg);
    opacity: 1;
  }
  72% {
    transform: translate(-5px, 10px) rotate(0.5deg);
    opacity: 1;
  }
  74% {
    transform: translate(1px, -7px) rotate(3.5deg);
    opacity: 1;
  }
  76% {
    transform: translate(8px, -3px) rotate(-2.5deg);
    opacity: 1;
  }
  78% {
    transform: translate(-8px, 2px) rotate(-0.5deg);
    opacity: 1;
  }
  80% {
    transform: translate(2px, 7px) rotate(-2.5deg);
    opacity: 1;
  }
  82% {
    transform: translate(6px, -4px) rotate(1.5deg);
    opacity: 1;
  }
  84% {
    transform: translate(3px, 2px) rotate(3.5deg);
    opacity: 1;
  }
  86% {
    transform: translate(0px, -5px) rotate(-2.5deg);
    opacity: 1;
  }
  88% {
    transform: translate(1px, -3px) rotate(2.5deg);
    opacity: 1;
  }
  90% {
    transform: translate(-8px, -9px) rotate(2.5deg);
    opacity: 1;
  }
  92% {
    transform: translate(-2px, 3px) rotate(2.5deg);
    opacity: 1;
  }
  94% {
    transform: translate(-6px, 0px) rotate(-0.5deg);
    opacity: 1;
  }
  96% {
    transform: translate(-9px, 8px) rotate(1.5deg);
    opacity: 1;
  }
  98% {
    transform: translate(9px, 4px) rotate(-1.5deg);
  }
  0%, 100% {
    transform: translate(0, 0) rotate(0);
    opacity: 1;
  }
}
