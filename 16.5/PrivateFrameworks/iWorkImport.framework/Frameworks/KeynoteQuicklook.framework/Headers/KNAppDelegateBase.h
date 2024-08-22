// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNAPPDELEGATEBASE_H
#define KNAPPDELEGATEBASE_H

@class TSABaseApplicationDelegate;



@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}




+(id)kn_sharedPropertiesProvider;
-(BOOL)isValidURLForImportedHyperlink:(id)arg0 targetDocumentRoot:(id)arg1 forCrossDocumentPaste:(BOOL)arg2 ;
-(BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
-(BOOL)supportsCommentsInMasters;
-(BOOL)supportsFreehandAnimationUI;
-(BOOL)supportsImageGalleryHyperlinks;
-(BOOL)supportsMovieHyperlinks;
-(BOOL)supportsPastingIntoGroups;
-(BOOL)supportsRTL;
-(BOOL)supportsShrinkTextToFit;
-(CGFloat)maximumAspectRatioForPreviewImage;
-(CGFloat)mimimumAspectRatioForPreviewImage;
-(Class)propertiesProviderClass;
-(id)createCompatibilityDelegate;
-(id)defaultHyperlinkURL;
-(id)equationEditorAPDID;
-(id)init;
-(id)previewImageNameForEncryptedNativeDocument;
-(id)previewImageNameForNativeDocument;
-(id)universalPreviewImageNameForDocumentType:(id)arg0 ;
-(void)applicationDidFinishLaunching;
-(void)p_inputMethodsChanged:(id)arg0 ;
-(void)registerAllowedElementKinds;
-(void)registerClassTypeMappings;
-(void)registerDrawableInfoClassMapping;
-(void)registerSOSClassTypeMappings;


@end


#endif