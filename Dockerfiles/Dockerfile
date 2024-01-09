FROM mcr.microsoft.com/windows:ltsc2019

# configure powershell core
SHELL ["pwsh", "-Command", "$ErrorActionPreference = 'Stop'; $ProgressPreference = 'SilentlyContinue';"]

RUN Set-ExecutionPolicy -Scope CurrentUser -ExecutionPolicy RemoteSigned

# get package
RUN Invoke-WebRequest 'https://github.com/git-for-windows/git/releases/download/v2.12.2.windows.2/MinGit-2.12.2.2-64-bit.zip' -OutFile Git.zip  -SkipCertificateCheck

# install git; set path
RUN Expand-Archive c:\Git.zip -DestinationPath c:\Git; \
$env:PATH = $env:PATH + ';C:\Git\cmd\;C:\Git\cmd\bin'; \
Set-ItemProperty -Path 'HKCU:\\Environment\' -Name 'Path' -Value $env:PATH