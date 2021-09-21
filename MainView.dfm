object WebView: TWebView
  Left = 0
  Top = 0
  Margins.Left = 0
  Margins.Right = 0
  Margins.Bottom = 0
  BorderIcons = []
  ClientHeight = 815
  ClientWidth = 1284
  Color = clBtnFace
  CustomTitleBar.CaptionAlignment = taCenter
  CustomTitleBar.Control = TitleBarPanel1
  CustomTitleBar.Enabled = True
  CustomTitleBar.Height = 55
  CustomTitleBar.SystemHeight = False
  CustomTitleBar.ShowIcon = False
  CustomTitleBar.BackgroundColor = clWhite
  CustomTitleBar.ForegroundColor = 65793
  CustomTitleBar.InactiveBackgroundColor = clWhite
  CustomTitleBar.InactiveForegroundColor = 10066329
  CustomTitleBar.ButtonForegroundColor = 65793
  CustomTitleBar.ButtonBackgroundColor = clWhite
  CustomTitleBar.ButtonHoverForegroundColor = 65793
  CustomTitleBar.ButtonHoverBackgroundColor = 16053492
  CustomTitleBar.ButtonPressedForegroundColor = 65793
  CustomTitleBar.ButtonPressedBackgroundColor = 15395562
  CustomTitleBar.ButtonInactiveForegroundColor = 10066329
  CustomTitleBar.ButtonInactiveBackgroundColor = clWhite
  DoubleBuffered = True
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Segoe UI Semibold'
  Font.Style = [fsBold]
  GlassFrame.Enabled = True
  GlassFrame.Top = 55
  OldCreateOrder = False
  Scaled = False
  StyleElements = [seFont, seClient]
  OnCreate = FormCreate
  DesignSize = (
    1284
    815)
  PixelsPerInch = 96
  TextHeight = 21
  object bookmarksBox: TComboBox
    Left = 1007
    Top = 25
    Width = 277
    Height = 31
    Style = csOwnerDrawFixed
    Anchors = [akTop, akRight]
    Color = clWhite
    DropDownCount = 15
    Enabled = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ItemHeight = 25
    ParentFont = False
    PopupMenu = PopupMenu1
    TabOrder = 2
    OnSelect = bookmarksBoxSelect
  end
  object TitleBarPanel1: TTitleBarPanel
    Left = 0
    Top = 0
    Width = 1284
    Height = 54
    CustomButtons = <>
    DesignSize = (
      1284
      54)
    object backBtn: TImage
      Left = 16
      Top = 15
      Width = 24
      Height = 24
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000015849444154
        78DA6364A03160244651565616CF972F5F94162D5A7489EA162426263AFDFFFF
        7F3390C9C5C8C83869FEFCF9F954B300D970A8D0A3050B16C853C5022C868340
        35D082368A2DC06638903F7DE1C285D92026451650D3700C0BA86D388A05B430
        1C6E0116C34106760223B48A12C3C116C4C7C7DB01D3F77606D4D4F20C882F53
        623010BC6166666E0059701A6881098586E10267191312124E0119A6B4301DE8
        F0F3200B6C81EC1D6841F41888AF516238304E41664C0047725C5C9C231313D3
        16244B80F2FF3B8029A89A81D2488631803E7100525BD17C320D9892B2A96201
        9225209F7023094F055A9243150B40009827EC81C1B315CD92C9404BF2A86201
        0840F3C636344B26022D29A08A05782C29035AD24D150B4000948481C1B50D68
        110F54E821D00205AA59000249494936FFFEFD5B07648A02F15CA0052954B500
        04727373D98195BE32B03E2639F31165012500002956A98BC075579300000000
        49454E44AE426082}
      OnClick = backBtnClick
      OnMouseDown = backBtnMouseDown
      OnMouseUp = backBtnMouseUp
    end
    object forwardBtn: TImage
      Left = 62
      Top = 15
      Width = 24
      Height = 24
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000015549444154
        78DA6364A031602447536262A2160F0FCFDDC99327FFA4BA0509090973805432
        10BF6662620A9A376FDE116A5BF00048C983D8FFFFFFFFC2C8C8E8B560C182C3
        D4B4A014487521097D055AE4B570E1C24354B1006AC90420954F8C25645900B5
        641290CA45B604185CDEF3E7CF3F48150BA0964C0152D9C89600B10F304E0E50
        C502A8255381541692D03720F6865942B10520338096B403E93224F3BEFDFBF7
        CF67D1A245FB4192AAD0B094A3D022030668F28559028C784FC6F8F8F8D3C0C8
        31A1824F3000D08233201F9C01B28D6966417272B2CADFBF7F1B807C110ACDD3
        0562298C20A2824341A1D006A4CB1990221918ECBEC03CB18F520B4071381568
        5826B2CB6186333050964C091A4E890544194EAE05441B4E9605C008AD0252AD
        C4184EAE050F1910B91EAFE1645900AC8F2702D3771E318693650108C4C5C5E9
        012BFD7BD3A64DFB42482D35321A5E00005EDF949FE6D7D1460000000049454E
        44AE426082}
      Stretch = True
      OnClick = forwardBtnClick
      OnMouseDown = forwardBtnMouseDown
      OnMouseUp = forwardBtnMouseUp
    end
    object updateBtn: TImage
      Left = 108
      Top = 15
      Width = 24
      Height = 24
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000022D49444154
        78DAB5953D485B5114C7731333144B75D0A562873874101795AE45A414143F86
        226288F940027D83BB584BA4EEA574501CF2E564B3D882E2E422E2A018411011
        3F26A51D84822681485EFABBFA5E78B479C697BC1E38EF9E7BCEBBE77FDFFFDC
        7B9E70FC671166019FCF572F8478E572B9BA5455EDC4EEC27D5B2C16D3D8697C
        E95C2EB7954AA5F29601FC7E7F3F4916319F57D8E0214013C96472FB51005EAF
        F799DBEDFE8C19B2C0828ACE3B9DCEA968347A6D0A100E871BF2F9FC1EA6C710
        FF89AE40CB2E54ED62BB0B8582A4AB1B7B0CAD37BCBB99C9647AA0AC5016005A
        A22C0C9602427C2399C2E75F99D4E805A05F3087751F1B994B241233FF000402
        813E865583FF7D3C1E5F780C3F6CEC239B99D5E9C27E138BC5364A008AA23CCD
        66B347D82D9A6F99E4A3166A2082C1A0A471509B1FB3FEA531F896E0BA36FFC5
        A96837A3C54C60A091E1127D22E714BC8D829FE9001F00F8A4BDFB15F4492BC9
        0D203F1806FEA6581058611CD28AE4A74849ABC943A150376B87D169CD25299B
        A31E5712E0C2A15D281CED14E8D04A72186825D939A6CBE0BE45EBD0939A0164
        4BE1B84A80E632E1355B28E22BDEB13665F431BF61C31DB615993CCBE419D1E7
        24576063DE96632A8556D344ABD977DCDFA775362A2F6FD18E8B5612D92CA947
        AFC7E3F91E8944D4BB2F918F5A5A4525A9BAD95906A8D4AED11DC00E24AF5501
        E81C56F8E19C72085E037451158081AE877E99E3D467A9260029E57EFAD074CA
        3806C0EF9A01EC923F62A52B7782BF555D0000000049454E44AE426082}
      Stretch = True
      OnClick = updateBtnClick
      OnMouseDown = updateBtnMouseDown
      OnMouseUp = updateBtnMouseUp
    end
    object homeBtn: TImage
      Left = 154
      Top = 15
      Width = 24
      Height = 24
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000024649444154
        78DAB5964F481B4114C6771A2552A8140FA53DD4E0AD8247456F2D3DF4A05691
        A2A784245D88426F0A42E9C1CDA1140AF126B4816D129293A594FAA7871EC442
        0F423C163C4AF4A0F4542C948626DDFEA64CE2B04DE2E68F038FF9E6CDDBF7CD
        BCF96658615C7213CDC486C3E187126432994D3AA763049148A4470891711C67
        EEDF4742AC83C3E974FA57DB04A150E886CFE7FB001C734DED95CBE5E96C36FB
        AD6502920F927C1B385027E4109209480E9A268846A3F729C33BE075390697E8
        9EA8E935CAD4A5F077F0A3542AB5E399809A3FA67B85752BD71904B31CEE2739
        E0B01F90F42DB057CDFFC616389337171148A53CE7E3A79AAF4099266DDBFEAA
        079AA6394479B680818A8F45BC6011CF0C4D615502B75254CB6353ACECB4CE4E
        6FD26D6023D5842E85097598FF2985A0F77EBF3F984C267F1A0D5A2C16BB5A2C
        1673249ED1DC558509567107C74743530AC1894020B06C59D61FC34323EE4AA1
        5078C9A29634F721362E6B9E27E1B036F19AED2D78495CA3645218F35A15BEC8
        1DEC8147F5054110C7BF08962B4A305E0D0683B728A3ACB7C1F6A772B9DC893B
        86B1055ED108F6056AE8E30329AF69E58F136C117C06BE86FD60DCAB922554CC
        924AE88ED109364BA5D2BC505BD3272A0447E0DBD831E37E75376C15634ACDE3
        ABCA91B1A895A72E81BAC926E763CB5BAAD4129701A86B45AAAB2D028F87DAA8
        441D216874C8ED13D420F444F019DB6D8580760FBB7B1141A7DA3901B77902B5
        6C75323B0A9CE465DDAEBCA6F2C9188764A4ADACE7C9F32497EF9BD3CC5F454B
        ED2FB7304865419566C80000000049454E44AE426082}
      Stretch = True
      OnClick = homeBtnClick
      OnMouseDown = homeBtnMouseDown
      OnMouseUp = homeBtnMouseUp
    end
    object searchBtn: TImage
      Left = 1023
      Top = 15
      Width = 24
      Height = 24
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE9000002DE49444154
        78DAAD564B685341147D93AF346816F1D38510102AE242A5461415910895A282
        9B0812F35583BFA014442852D20611DD88425DC460BE0A1AAA6E2ABA7261ABC5
        4F37AD1517852A8858BA30244113F3F18C9D84C9A4AF79815CB8DC99FBEEDC73
        EFC97DF342A425C4EFF7EB33994C2F963BA016E876689A10F2A152A9507D138B
        C5C62505424487DBEDA649A3D0CD4DCE8E944AA5738944625E1180CFE7D3160A
        85009657A06A25D5A193059833E866A42980CBE50A8282ABC2735ADD7BE8249E
        19CBE572376C37F61D5C4C19BA3F1A8DBE9605F07ABD16B4FB168735ACB222D6
        D7753A5D30140AFD1528EC8409418F70EE599CDF0ABA720D00EC079DAC72CE92
        5BE52AAA8AC7E31944EC00E71AC6990B0D00A8E828EC53CE1744E080D4446C36
        9BDA60308C61B98BB9D044C928764101AEC1F65739072DEB455A96E96227BA98
        E05CFBC4CE29C04BD81EB61F45C06125C9A9040201CDDCDC5C06CB15FF9311D2
        1789446E890074D44CADD0C30BCEBF93165F482A0F70FE8408300BBB81557007
        155C6C11E00BCC46B6BD0B80F37500E0F111783CC6F6E308D8AB34B9DD6E5FA5
        D56A7F496CDC51A0170546C40E2EC3DE64FBDF7899BAE2F1F877250078398F23
        E943CEB505054ED50120680F82C638DF73041D6A961C57CB6A5C2D9FB05CCB5C
        E95C2E674AA552A53A00C6E363185BCD49C850369B1D1283ABE2743A4D2A958A
        56DEC3B94FA2B0FB622CE1AA99C6721DF76C024097CC66F3478C63913A70A5AC
        C4CBD40BFF6D6C3BB958D9F1AE5D76E882DE2DCFA02A21E60F94F26A8476498D
        57FC7CB158DC964C267F2C0B400513B51B1315658994C828929F065D6BD46A75
        1003F24DAFD70FE22658581280D1D591CFE76F8086B392FC77210DEDAB728EEE
        5FC01CA46B14380DA003D50F11914920391C0E03AAA2F7BF0587EA3E99989619
        7E003089F7F0EC14777C46A3D158C3E1F04F598056847D235E4137D5A821E433
        8AB1B605400E04F2A46D0032205FDB0AC0810C4B8B7F75FAFF0163A13BA7A659
        B0F00000000049454E44AE426082}
      Stretch = True
      OnClick = searchBtnClick
      OnMouseDown = searchBtnMouseDown
      OnMouseUp = searchBtnMouseUp
    end
    object settingsBtn: TImage
      Left = 1159
      Top = 15
      Width = 24
      Height = 24
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000015049444154
        78DA6364A03160C4279998986804A2E7CF9F7F8EEA16242424F802A94D50AEDF
        82050B369365417C7CBC3323236315902D8C262705C4A220C6FFFFFFA7FFFEFD
        BB9A8D8DAD13C83523D2ECB7407D6D200B6E032D5021A078265031485D0F29AE
        07EAB9C3080C8AAD40B61701B53380781B5290110BB631E6E6E6B27FFEFCD90F
        4B10B903710094DD068C836A50A4035D457410F1F2F26EC217C90A406A15941B
        06B4E00189AE0703467234A103A0CF448149F9354D2C001ADE030CB62220DEBB
        70E142570C0BA04191CA801907F8C077A0814B80069E05EAFF0EE47340C51703
        F13728FB2D10CF0659700AC83025C3F11F80F942FAD7AF5F5FF1A8394D170B68
        1B4464B81C05108C644A2D805A4279322537E3E12B2AD001A94507A4A820B2B0
        4307C4167EDB882DAED10151C537B8B8C653E1A003522B20488543AC93C9AD42
        494AA6E43402A8920FF00100F204BF63E698146F0000000049454E44AE426082}
      Stretch = True
      OnMouseDown = settingsBtnMouseDown
      OnMouseUp = settingsBtnMouseUp
    end
    object closeBtn: TImage
      Left = 1255
      Top = 18
      Width = 16
      Height = 16
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000100000
        001008060000001FF3FF610000000473424954080808087C0864880000000970
        4859730000006F0000006F01F1A2DC430000001974455874536F667477617265
        007777772E696E6B73636170652E6F72679BEE3C1A000001544944415478DA63
        FCFFFF3F0332B81714AFC6F49F298AF1DF7F6306460663B0E07F86B3FF9918CF
        FE63FCB74C69DDC25BC8EA19E1063032323E0848C8070AB401799C0CD8C1F7FF
        8C8C550A1B164C64806A841800D4FCD03F6E0B90E1C54014F8BF4D7EE3221F90
        2160031E0426160019FDC469861AC1C858A8B07EFE04C6BB81716ACCFF182FC0
        9CCDC8C1C1C01FEACBF071E50686FFBF7E437CC7C6CAC01F1EC0F071F56686FF
        3F7EC0BDF397E9BF01E3FD808406A0EDF5305181D85006FE606F86EFE72F33BC
        6E9F041613ADCC63E034D465F8B8762BC387C5AB9103B081F1815FFC666068FB
        C00581B6C1347CBF780528C5C8C0A1AF0D3710E62A68EC6C617CE01FFF0CC894
        44891A9021D5F90C9CFA3A60FE8F8B57195EB54E40D50C01CF711A20565D00B6
        19EC59A04B5EB74EC461001E2F806CFE0F842097E0F402C581487134529C90A8
        929421EEA42433210152B333009DDEF4DDFB6CE27D0000000049454E44AE4260
        82}
      Stretch = True
      OnClick = closeBtnClick
      OnMouseDown = closeBtnMouseDown
      OnMouseUp = closeBtnMouseUp
    end
    object expandBtn: TImage
      Left = 1233
      Top = 18
      Width = 16
      Height = 16
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000100000
        001008060000001FF3FF610000000473424954080808087C0864880000000970
        4859730000006F0000006F01F1A2DC430000001974455874536F667477617265
        007777772E696E6B73636170652E6F72679BEE3C1A000000F94944415478DA63
        FCFFFF3F0332D0DC7651ED1F0363D47F4606630606466388E8FFB38CFF19CE32
        31FC5F76DD4BFF16B27A4698018C40A4B2FD523E2303631B90CBC9801D7CFFCF
        F0BFEA8EA7DE44A0AEFF7003409A55B75FDE02E47B311007B6DDF6D4F5011902
        364075FBA502A0CDFDE8AAA2E484C1F4B2476F314C00BAA4F0B6A7DE04468DAD
        17D4FE32325DC0E6ECFD0E1A60DAF1C00DACDE61FEFFCF80516DEBC586FF8C8C
        F5D854103000E87EC60646D56D17370383C0871C0380466C011A70E919902509
        F373AA92285C5A8283054CBFF8F1072E36FBDE6BE430794E0D0328F402C58148
        7134529C90A892944180A2CC840C48CDCE004D7CB1DDE08A6562000000004945
        4E44AE426082}
      Stretch = True
      OnClick = expandBtnClick
    end
    object hideBtn: TImage
      Left = 1211
      Top = 18
      Width = 16
      Height = 16
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000100000
        001008060000001FF3FF610000000473424954080808087C0864880000000970
        4859730000006F0000006F01F1A2DC430000001974455874536F667477617265
        007777772E696E6B73636170652E6F72679BEE3C1A000000DA4944415478DA63
        FCFFFF3F033270892F56038A440199C640DA1824C6C8C07016489D05D2CBF62C
        ECBD85AC9E116600231038C516E5FF67646803723919B083EF8CFF19AAF62DEE
        9BF81FAA116C0048B3635CD11620DF8B8138B06DFFA23E1F902160039CE38A0B
        8036F713A919EA7486C2BD8B7A27303AC715A9FD6360B880C7D9B8C077260606
        0346A7B8A206A067EA49D40C06407D0D20033603193EE418008C952DA0C07B06
        644B8204FC9CAC1822BD9DF06A5ABE751FC3A67DC760DCE7941B40B117280E44
        8AA391E2844495A40C369192CC840C48CDCE00716D8D016092F8410000000049
        454E44AE426082}
      Stretch = True
      OnClick = hideBtnClick
      OnMouseDown = hideBtnMouseDown
      OnMouseUp = hideBtnMouseUp
    end
    object newTabBtn: TImage
      Left = 201
      Top = 15
      Width = 24
      Height = 24
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000017949444154
        78DA6364A03160A48B05313131922C2C2CF940A60E10F320C9FF05E25BFFFFFF
        3FBE70E1C2C540F67F922D484A4A52FAF7EFDF19205B9080DA656C6C6C09B366
        CDFA4D92050909092B807438318A813E990FF44912A9163C03D292600E23632C
        907A8C64201B908A07E268243DC780F8171E477C0152A7D9D9D9A7017DFB0664
        013C5C172C588035D2E3E3E367032D4F21C5E540F0FAEFDFBFE64459101A1ACA
        C9CDCDBD1DC8B427C506A06FD6106501924F8C813EE1C51BE68C8CF2408317C0
        7C41B405A0A4CCCCCCBC09C4067ADD6FC99225CF71A9453693680B80EA8A8054
        2F945B0C54DB476D0B1A80543D94DB0854DB40B105B0600186AB09368380617D
        065B70116D01502E1548CD62C00FD280FA660F4E1FD03C0ED034D1361551920F
        DE006961283F1918DE77192800C0A25F1D68C64C28F72D2330FBAF030A045262
        281EB0963139395905E8E5A3408E18950D7F012E4DA1612601A44055A61110B3
        5368F05760F23D07C413162D5AF4963E953E2D01003EA0E4478203BB34000000
        0049454E44AE426082}
      Stretch = True
      OnClick = newTabBtnClick
      OnMouseDown = newTabBtnMouseDown
      OnMouseUp = newTabBtnMouseUp
    end
    object showBookmarksBtn: TImage
      Left = 1115
      Top = 15
      Width = 24
      Height = 24
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000013E49444154
        78DA6364400289898946FFFFFF2F05328380988D8134F00B88D731323276CF9F
        3FFF1C4C90114901637C7CFC2DA00215120D46014007DE59B870A11A88896241
        5C5C9C231313D33EB02023E371A0C247A4180CD42307D4630962FFFBF7CF69D1
        A245FB512C484848880052CBA1DCC8050B16AC20C5025CFA472D18B560D48251
        0B462D4036005857B8018BE442101B582CF703CBFC5D145B0014E3001A1A0334
        B00028A68DE6E8AB40B90940B92540B53F48B500E45221A0E64CA02122F88206
        A8E60D50CD7420F31D10F7136B013A00D5B7AB8135D524100758F3E501A95006
        DCF536D116BC00E219403C13A8E1055A984B00A97420CE006209522D3809C493
        D8D8D856CF9A35EB37BE204A4B4B63FDF5EB17C837205F99E3B40058E90702C3
        3208882701254F339001808E3405C6491E10AF0356FAEB416200D8281D287D27
        450C0000000049454E44AE426082}
      Stretch = True
      OnClick = showBookmarksBtnClick
      OnMouseDown = showBookmarksBtnMouseDown
      OnMouseUp = showBookmarksBtnMouseUp
    end
    object addBookmarkBtn: TImage
      Left = 1071
      Top = 15
      Width = 24
      Height = 24
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000034649444154
        78DAAD555D4853511C3FE76CCE722E29CB3EE8E38284540461CF42245284F450
        5AE996BBBBCA14C1827AF4C587EA298A909096DBEE9D4D93F92642855010F412
        992F0541E6EA210A2BCA316A6DF79C7E77F7526AFB30DA85CBFEE7DCDFF9FFFE
        E7F7FF1825FFF0C8B2DCC0182B0F8542D3AB3D43570BF4783C5BED76C7BC7986
        EF5255F543490964B9B3971071337B888ADE70383C54620219B2B046C316429F
        D634ADA964041D1D1DD58CD93FC2B49904242344664B2412F95C1202C8A3C06D
        10E62B6BAB0E322990295C2202790AF21C63845F11F02C04ED47A2A790E8E6FF
        2670BBDDEBCACACA17603A38CFD4A34C05C89E63FD339D4E6D8A46A38B050914
        45A9E39CCB2C0F19BC4982B0D330DFA86AA8D692EC35BED452C2C771289EEB1C
        0700C1A8146044230E14BB89214F4855FB0DDBE7F35D32652A2AD02CF57A9593
        94923B58ADB1765F22B2C7CB6FC1E692C9C4B5582CA61BEBD6D6569BD3E9BA00
        5CED0A5C037EF65ACB14D2E5A15612F753CAC6517E7B4C55F85587C3D11F0804
        D2C5A3CC123A2A2B2A2E0B6ABB68E515D5C6CFA008667FEBEEF7FB2BD2A9D40D
        80BAACADA768A83634D45C21E7086E377C8EE13D981585F05046D7CF8D8C8C24
        09C9915848760A92056056E14D40FDE3AA3AFC28B7F3AE4342F049E02BB1FC06
        49BAD11AE3CBB290272A099F26CCA8F87D5CF5681EDC3D047004E68CAEA75B10
        F5FC5F69CE77759FD73B0AB9DA70E55B6155EDC9438081C77AA8D0C7C29AD69E
        0B9393A0AFAFAF3C91481ACDE5628C3459F3DFA8B8AC134D0B8D1AC5E0F57636
        4216E3DBA2CBE5AC191C1C4CAD8A0075DE8C3A9F84F94592766E8EC7E31B6147
        106D76821AD394527A5692A44FF1F83BE37FA11AF8664D0B4EAD8A0057C71063
        B251113A6713B8858AED1ABC3F2C88D1330B9C13AF8DF116D4BF0299C2904929
        4A303030604754C668DE80589F01526FE15E1AB56DA2D85D6236147A46CC5825
        9ABD2DCE670A12A0F420037FB0740F63E27622993C8F4EFE6EACD1586B2B9DCE
        EB88BC7B19EE4FBE0A119895612DBF02E257D5602CB7945D2710CC30CCF55967
        421F824CBDC5083097981BE6139B8DB60783C1B7A4C08382D821048B422ACC21
        1E45CF780A12607C6FE39CED93A4ED0F57EA99EF31875FD561C6F80B48F47EE9
        B75F1ADC57DE326BF84E0000000049454E44AE426082}
      Stretch = True
      OnClick = addBookmarkBtnClick
    end
    object deleteBookmarkBtn: TImage
      Left = 1071
      Top = 15
      Width = 24
      Height = 24
      Anchors = [akTop, akRight]
      AutoSize = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000180000
        00180806000000E0773DF8000000017352474200AECE1CE90000022749444154
        78DAAD55CD2F034114EFF653DA885B1D241A823B82B38390389050E1B0BB6DD2
        F44C84E00F4088E8B969D3EE3A6852122E421C9C119C5C1042E2C04DA48D7EFB
        BD6649ADED1AEC4B266F66DECCFBBDAF99C7997E413E9FAF95783C1EBF66BDC3
        B11E0C0683CE6C36FB4873BBDDDE100E87D3860288A238C271DC16CD4BA5D2A8
        2449DB8602203C9B60E3CA3281304D180600E53560CF18B5CAD62B861B206F86
        00F8FDFE218465E7CB458E1B8EC562BB46792083F1AAED0D7820FC1BC0EBF5DA
        5D2E1785A74E257A49A552EE643299D505506A7B50E78C0763B28A2C84715FED
        62B158DCE310DF73C4B79D25547FA04B021805401C0B97C1CA5328045F390782
        20B4592C9684519E40F145A150189765F9EA33C9944CA7D3B90C21C59BF901AA
        08369642E9747AEE23F9DF1421E903601286FB97CAA9D24494EEFE176FB44E06
        0281FA5C2EB7096F7A19CD3EB2D96C139148E4E95BB8AA5D8227EBA6EAE5A9A6
        102C9FD212E801507D3732023C00C0C30C80AAEA369BCDC78CCACB8447D583AA
        39610280F52B60331AA25785D76AC856E1C52C2BC02D58936AFB14C92CF70024
        9F7A43974A7E0780E61F01F0B23BA0E8AC628B6A7BCDE1702CA04DE66803EDD3
        96C9641601345DA903EB4E7CE1E7BA00688D74715E593E632EE0D28196A730A6
        1FE0F495BB154B96D04A177EF240C241FAE70FAD562BAF55DB95446F269FCF6F
        60DA0763641823EA02F03CDF08C52D3878444699D8883ECD3154DE59341ABDA9
        14BC03A682D6C4ECE18BCC0000000049454E44AE426082}
      Stretch = True
      Visible = False
      OnClick = deleteBookmarkBtnClick
    end
    object addressBar: TEdit
      Left = 270
      Top = 15
      Width = 731
      Height = 25
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight]
      BorderStyle = bsNone
      Color = 15987699
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI Semibold'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      Text = 'addressBar'
      OnClick = addressBarClick
      OnMouseLeave = addressBarMouseLeave
    end
    object activityIndicator: TActivityIndicator
      Left = 240
      Top = 15
      FrameDelay = 20
      IndicatorSize = aisSmall
    end
  end
  object PageControl: TPageControl
    Left = 0
    Top = 54
    Width = 1284
    Height = 761
    Margins.Left = 0
    Margins.Top = 0
    Margins.Right = 0
    Margins.Bottom = 0
    Align = alClient
    DockSite = True
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    MultiLine = True
    ParentFont = False
    TabHeight = 25
    TabOrder = 1
    OnChange = PageControlChange
    OnMouseUp = PageControlMouseUp
  end
  object PopupMenu1: TPopupMenu
    Left = 1072
    Top = 344
    object vcx1: TMenuItem
      Caption = 'vcx'
    end
    object sdv1: TMenuItem
      Caption = 'sdv'
    end
  end
end
