class InternalClass :
  def fetch(self):
    return "get user info"
class ExternalClass :
  def search(self):
    return "get user data"
  
class Adapter :
  def __init__(self, external_class):
    self.external_class = external_class

  def fetch(self):
    return self.external_class.search()