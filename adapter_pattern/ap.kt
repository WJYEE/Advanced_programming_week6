class InternalClass {
  fun fetch(): String {
    return "get user info"
  }
}

class ExternalClass {
  fun search(): String {
    return "get user data"
  }
}

class Adapter(private val externalClass: ExternalClass) {
  fun fetch(): String {
    return externalClass.search()
  }
}