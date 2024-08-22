// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPAPPDELEGATE_H
#define TPAPPDELEGATE_H

@class TSABaseApplicationDelegate;



@interface TPAppDelegate : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}




+(CGFloat)defaultFontForNewBasicDocumentsPointSize;
+(id)defaultFontForNewBasicDocumentsFontName;
+(id)sharedDelegate;
+(id)tp_sharedPropertiesProvider;
-(BOOL)imageGalleryCaptionsUsePlaceholderText;
-(BOOL)isValidURLForImportedHyperlink:(id)arg0 targetDocumentRoot:(id)arg1 forCrossDocumentPaste:(BOOL)arg2 ;
-(BOOL)supportsAutosizingTextboxes;
-(BOOL)supportsLinkedTextBoxes;
-(BOOL)supportsQuickFormatBar;
-(BOOL)supportsRTL;
-(BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
-(BOOL)textInspectorShowsMoreSubpane;
-(Class)propertiesProviderClass;
-(id)createCompatibilityDelegate;
-(id)equationEditorAPDID;
-(id)init;
-(id)previewImageNameForEncryptedNativeDocument;
-(id)previewImageNameForNativeDocument;
-(id)universalPreviewImageNameForDocumentType:(id)arg0 ;
-(void)customizeHyperlinkViewController:(id)arg0 documentRoot:(id)arg1 ;
-(void)dealloc;
-(void)p_inputMethodsChanged:(id)arg0 ;
-(void)p_localeChanged:(id)arg0 ;
-(void)registerSOSClassTypeMappings;


@end


#endif