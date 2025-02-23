// afronet-secure.js
class AfronetSecure {
  constructor() {
    this.malwareDetector = new MalwareDetector();
    this.phishingProtector = new PhishingProtector();
    this.contentFilter = new ContentFilter();
    this.passwordManager = new PasswordManager();
    this.encryptor = new Encryptor();
  }

  detectMalware(script) {
    return this.malwareDetector.detect(script);
  }

  protectAgainstPhishing(url) {
    return this.phishingProtector.protect(url);
  }

  filterContent(content) {
    return this.contentFilter.filter(content);
  }

  generatePassword() {
    return this.passwordManager.generatePassword();
  }

  encryptData(data) {
    return this.encryptor.encrypt(data);
  }
}
