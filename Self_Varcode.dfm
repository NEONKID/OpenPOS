object Self_Varcode_Form: TSelf_Varcode_Form
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'Self_Varcode_Form'
  ClientHeight = 460
  ClientWidth = 962
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -27
  Font.Name = #47569#51008' '#44256#46357
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 37
  object sPanel1: TsPanel
    Left = 0
    Top = 0
    Width = 962
    Height = 460
    Align = alClient
    TabOrder = 0
    SkinData.SkinSection = 'BARTITLE'
    object sLabel1: TsLabel
      Left = 88
      Top = 88
      Width = 438
      Height = 48
      Caption = #48148#53076#46300#47484' '#51077#47141#54644' '#51452#49464#50836'.'
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -40
      Font.Name = 'Tahoma'
      Font.Style = []
    end
    object Self_Varcode_Edit: TsEdit
      Left = 88
      Top = 168
      Width = 456
      Height = 62
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -40
      Font.Name = '@'#47569#51008' '#44256#46357
      Font.Style = []
      NumbersOnly = True
      ParentFont = False
      TabOrder = 0
      SkinData.SkinSection = 'EDIT'
      BoundLabel.Indent = 0
      BoundLabel.Font.Charset = DEFAULT_CHARSET
      BoundLabel.Font.Color = clWindowText
      BoundLabel.Font.Height = -11
      BoundLabel.Font.Name = 'Tahoma'
      BoundLabel.Font.Style = []
      BoundLabel.Layout = sclLeft
      BoundLabel.MaxWidth = 0
      BoundLabel.UseSkinColor = True
    end
    object Self_Varcode_Btn_Enter: TsBitBtn
      Left = 88
      Top = 287
      Width = 200
      Height = 70
      Caption = #54869' '#51064
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -27
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Self_Varcode_Btn_EnterClick
      SkinData.SkinSection = 'BUTTON'
    end
    object Self_Varcode_Btn_Cencel: TsBitBtn
      Left = 344
      Top = 288
      Width = 200
      Height = 70
      Caption = #52712' '#49548
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -27
      Font.Name = #47569#51008
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = Self_Varcode_Btn_CencelClick
      SkinData.SkinSection = 'BUTTON'
    end
    object TouchKeyboard: TAdvTouchKeyboard
      AlignWithMargins = True
      Left = 616
      Top = 10
      Width = 120
      Height = 160
      AutoCapsDisplay = True
      KeyboardType = ktCELLPHONE
      KeyDistance = 2
      Keys = <
        item
          X = 0
          Y = 0
          Caption = '7'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 110
          Y = 0
          Caption = '8'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 220
          Y = 0
          Caption = '9'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 0
          Y = 110
          Caption = '4'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 110
          Y = 110
          Caption = '5'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 220
          Y = 110
          Caption = '6'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 0
          Y = 220
          Caption = '1'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 110
          Y = 220
          Caption = '2'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 220
          Y = 220
          Caption = '3'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 0
          Y = 330
          Caption = '0'
          KeyValue = -1
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 220
          SpecialKey = skNone
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = clSilver
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end
        item
          X = 220
          Y = 330
          Caption = 'DEL'
          KeyValue = 8
          ShiftKeyValue = -1
          AltGrKeyValue = -1
          Height = 110
          Width = 110
          SpecialKey = skBackSpace
          BorderColor = clGray
          BorderColorDown = clBlack
          Color = 10526880
          ColorDown = clGray
          TextColor = clBlack
          TextColorDown = clBlack
          ImageIndex = -1
        end>
      SmallFont.Charset = DEFAULT_CHARSET
      SmallFont.Color = clWindowText
      SmallFont.Height = -20
      SmallFont.Name = 'Tahoma'
      SmallFont.Style = []
      Version = '1.2.10.0'
    end
  end
end
