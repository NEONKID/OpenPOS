object Refund_Form: TRefund_Form
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'Refund_Form'
  ClientHeight = 767
  ClientWidth = 816
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = #47569#51008' '#44256#46357
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 21
  object sPanel1: TsPanel
    Left = 0
    Top = 0
    Width = 816
    Height = 81
    Align = alTop
    TabOrder = 0
    SkinData.SkinSection = 'BAR'
    ExplicitWidth = 648
    object sLabel1: TsLabel
      Left = 588
      Top = 18
      Width = 209
      Height = 44
      Alignment = taCenter
      AutoSize = False
      SkinSection = 'BAR'
      Caption = #54788' '#51116' '#49324' '#50857' '#51088
      ParentFont = False
      Layout = tlCenter
      Font.Charset = ANSI_CHARSET
      Font.Color = clWhite
      Font.Height = -19
      Font.Name = #47569#51008' '#44256#46357
      Font.Style = [fsBold]
    end
    object sLabel2: TsLabel
      Left = 24
      Top = 16
      Width = 132
      Height = 45
      Caption = 'REFUND'
      ParentFont = False
      Font.Charset = ANSI_CHARSET
      Font.Color = clWhite
      Font.Height = -33
      Font.Name = #47569#51008' '#44256#46357
      Font.Style = [fsBold]
    end
  end
  object sPanel2: TsPanel
    Left = 0
    Top = 81
    Width = 816
    Height = 686
    Align = alClient
    TabOrder = 1
    SkinData.SkinSection = 'PANEL'
    ExplicitWidth = 817
    object Refund_Exit_Btn: TsBitBtn
      Left = 616
      Top = 602
      Width = 181
      Height = 65
      Caption = #45208#44032#44592
      TabOrder = 0
      OnClick = Refund_Exit_BtnClick
      SkinData.SkinSection = 'BUTTON'
    end
    object Refund_DBGrid: TDBGrid
      Left = 18
      Top = 22
      Width = 779
      Height = 566
      Options = [dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
      TabOrder = 1
      TitleFont.Charset = ANSI_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -16
      TitleFont.Name = #47569#51008' '#44256#46357
      TitleFont.Style = [fsBold]
    end
    object TsPanel
      Left = 18
      Top = 608
      Width = 191
      Height = 65
      Alignment = taRightJustify
      Caption = #54872' '#48520'     '
      TabOrder = 2
      SkinData.SkinSection = 'PANEL'
      object Refund_DBNavigator_Refund: TDBNavigator
        Left = 1
        Top = 1
        Width = 96
        Height = 63
        VisibleButtons = [nbDelete]
        Align = alLeft
        Kind = dbnHorizontal
        TabOrder = 0
      end
    end
    object TsPanel
      Left = 234
      Top = 608
      Width = 206
      Height = 65
      Alignment = taRightJustify
      Caption = #51204' '#52404' '#52712' '#49548'  '
      TabOrder = 3
      SkinData.SkinSection = 'PANEL'
      object Refund_DBNavigator_Cancel: TDBNavigator
        Left = 1
        Top = 1
        Width = 96
        Height = 63
        VisibleButtons = [nbCancelUpdates]
        Align = alLeft
        Kind = dbnHorizontal
        TabOrder = 0
      end
    end
  end
end
