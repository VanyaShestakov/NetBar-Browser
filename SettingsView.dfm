object SettingsForm: TSettingsForm
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsDialog
  ClientHeight = 553
  ClientWidth = 1060
  Color = clBtnHighlight
  CustomTitleBar.Height = 50
  CustomTitleBar.SystemHeight = False
  CustomTitleBar.ShowCaption = False
  CustomTitleBar.ShowIcon = False
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  StyleElements = [seFont, seClient]
  OnShow = FormShow
  DesignSize = (
    1060
    553)
  PixelsPerInch = 96
  TextHeight = 13
  object settingsTitle: TLabel
    Left = 27
    Top = 0
    Width = 127
    Height = 32
    Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object closeBtn: TImage
    Left = 1024
    Top = 0
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
    ExplicitLeft = 719
  end
  object hideBtn: TImage
    Left = 1002
    Top = 0
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
    ExplicitLeft = 427
  end
  object casheTitle: TLabel
    Left = 27
    Top = 159
    Width = 37
    Height = 25
    Caption = #1050#1101#1096
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object casheSizeTitle: TLabel
    Left = 27
    Top = 190
    Width = 59
    Height = 21
    Caption = #1056#1072#1079#1084#1077#1088':'
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object casheSizeLabel: TLabel
    Left = 92
    Top = 190
    Width = 4
    Height = 21
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object browserDataTitle: TLabel
    Left = 27
    Top = 239
    Width = 164
    Height = 25
    Caption = #1044#1072#1085#1085#1099#1077' '#1073#1088#1072#1091#1079#1077#1088#1072
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object browserDataSizeTitle: TLabel
    Left = 27
    Top = 270
    Width = 59
    Height = 21
    Caption = #1056#1072#1079#1084#1077#1088':'
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object browserDataSizeLabel: TLabel
    Left = 92
    Top = 270
    Width = 4
    Height = 21
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object browserHistoryTitle: TLabel
    Left = 27
    Top = 392
    Width = 170
    Height = 25
    Caption = #1048#1089#1090#1086#1088#1080#1103' '#1073#1088#1072#1091#1079#1077#1088#1072
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object browserHistorySizeTitle: TLabel
    Left = 27
    Top = 423
    Width = 59
    Height = 21
    Caption = #1056#1072#1079#1084#1077#1088':'
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object browserHistorySizeLabel: TLabel
    Left = 92
    Top = 423
    Width = 4
    Height = 21
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object bookmarksTitle: TLabel
    Left = 27
    Top = 319
    Width = 88
    Height = 25
    Caption = #1047#1072#1082#1083#1072#1076#1082#1080
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object bookmarksAmountTitle: TLabel
    Left = 27
    Top = 350
    Width = 95
    Height = 21
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086':'
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label5: TLabel
    Left = 92
    Top = 350
    Width = 4
    Height = 21
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object bookmarksAmountLabel: TLabel
    Left = 128
    Top = 350
    Width = 4
    Height = 21
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label3: TLabel
    Left = 27
    Top = 58
    Width = 193
    Height = 25
    Caption = #1044#1086#1084#1072#1096#1085#1103#1103' '#1089#1090#1088#1072#1085#1080#1094#1072
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label1: TLabel
    Left = 545
    Top = 58
    Width = 191
    Height = 25
    Caption = #1048#1089#1090#1086#1088#1080#1103' '#1087#1086#1089#1077#1097#1077#1085#1080#1081
    Color = clGray
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object clearCasheBtn: TBitBtn
    Left = 288
    Top = 177
    Width = 177
    Height = 34
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1082#1101#1096
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = clearCasheBtnClick
  end
  object clearBrowserDataBtn: TBitBtn
    Left = 288
    Top = 261
    Width = 177
    Height = 34
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1076#1072#1085#1085#1099#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = clearBrowserDataBtnClick
  end
  object clearBrowserHistoryBtn: TBitBtn
    Left = 841
    Top = 56
    Width = 177
    Height = 34
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1080#1089#1090#1086#1088#1080#1102
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = clearBrowserHistoryBtnClick
  end
  object clearBookmarksBtn: TBitBtn
    Left = 288
    Top = 337
    Width = 177
    Height = 34
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1079#1072#1082#1083#1072#1076#1082#1080
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = clearBookmarksBtnClick
  end
  object historyBox: TListBox
    Left = 545
    Top = 106
    Width = 473
    Height = 410
    Cursor = crHandPoint
    Style = lbOwnerDrawFixed
    BevelInner = bvNone
    BiDiMode = bdLeftToRight
    BorderStyle = bsNone
    Color = clWhite
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ItemHeight = 30
    Items.Strings = (
      '')
    ParentBiDiMode = False
    ParentFont = False
    TabOrder = 4
    OnDblClick = historyBoxDblClick
    OnMouseUp = historyBoxMouseUp
  end
  object homepageUrlEdit: TEdit
    Left = 27
    Top = 106
    Width = 438
    Height = 29
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
  end
  object changeHomepageBtn: TBitBtn
    Left = 296
    Top = 56
    Width = 169
    Height = 34
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = changeHomepageBtnClick
  end
  object showHistoryBtn: TBitBtn
    Left = 288
    Top = 410
    Width = 177
    Height = 34
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1080#1089#1090#1086#1088#1080#1102
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    OnClick = showHistoryBtnClick
  end
  object BitBtn: TBitBtn
    Left = 27
    Top = 482
    Width = 177
    Height = 34
    Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
  end
end
