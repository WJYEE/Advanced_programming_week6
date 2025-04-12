class InternalClass
{
  public string Fetch()
  {
    return "get user info";
  }
}

class ExternalClass
{
  public string Search()
  {
    return "get user data";
  }
}

class Adapter
{
  private ExternalClass _externalClass;

  public Adapter(ExternalClass externalClass)
  {
    _externalClass = externalClass;
  }

  public string Fetch()
  {
    return _externalClass.Search();
  }
}