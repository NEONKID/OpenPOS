object Login_Form: TLogin_Form
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'Login_Form'
  ClientHeight = 1024
  ClientWidth = 1280
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = '@'#47569#51008' '#44256#46357
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Login_Form_Panel: TsPanel
    Left = 0
    Top = 0
    Width = 1280
    Height = 1024
    Align = alClient
    TabOrder = 0
    SkinData.SkinSection = 'BAR'
    object Login_Label: TsLabel
      Left = 337
      Top = 475
      Width = 691
      Height = 48
      Align = alCustom
      Caption = #51452' '#51032': '#54788#51116' '#49324#50857#51088#45716' '#47196#44536#50500#50883' '#46121#45768#45796'.'
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -40
      Font.Name = 'Tahoma'
      Font.Style = []
    end
    object sLabelFX1: TsLabelFX
      Left = 584
      Top = 40
      Width = 179
      Height = 91
      Caption = 'Login'
      ParentFont = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWhite
      Font.Height = -67
      Font.Name = '@'#47569#51008' '#44256#46357
      Font.Style = [fsBold]
    end
    object sLabel1: TsLabel
      Left = 281
      Top = 196
      Width = 120
      Height = 48
      Align = alCustom
      Caption = #50500#51060#46356
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -40
      Font.Name = 'Tahoma'
      Font.Style = []
    end
    object sLabel2: TsLabel
      Left = 257
      Top = 294
      Width = 160
      Height = 48
      Align = alCustom
      Caption = #48708#48128#48264#54840
      ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -40
      Font.Name = 'Tahoma'
      Font.Style = []
    end
    object Login_ID_Edit: TsEdit
      Left = 433
      Top = 176
      Width = 488
      Height = 79
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -53
      Font.Name = '@'#47569#51008' '#44256#46357
      Font.Style = []
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
    object Login_Password_Edit: TsEdit
      Left = 433
      Top = 274
      Width = 488
      Height = 79
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -53
      Font.Name = '@'#47569#51008' '#44256#46357
      Font.Style = []
      ParentFont = False
      PasswordChar = '*'
      TabOrder = 1
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
    object Login_Btn_Cancel: TsBitBtn
      Left = 696
      Top = 384
      Width = 225
      Height = 65
      Caption = 'Cancel'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -27
      Font.Name = '@'#47569#51008' '#44256#46357
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      OnClick = Login_Btn_CancelClick
      SkinData.SkinSection = 'BUTTON'
    end
    object Login_Btn_Enter: TsBitBtn
      Left = 433
      Top = 384
      Width = 225
      Height = 65
      Caption = 'Enter'
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -27
      Font.Name = '@'#47569#51008' '#44256#46357
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 3
      OnClick = Login_Btn_EnterClick
      SkinData.SkinSection = 'BUTTON'
    end
    object TouchKeyboard1: TTouchKeyboard
      Left = 33
      Top = 584
      Width = 1208
      Height = 400
      GradientEnd = clSilver
      GradientStart = clGray
      Layout = 'Standard'
    end
  end
end
