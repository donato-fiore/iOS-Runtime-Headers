// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDOCUMENTMENUVIEWCONTROLLER_H
#define UIDOCUMENTMENUVIEWCONTROLLER_H

@class NSArray, NSMutableArray, NSString, NSURL;
@protocol _UIDocumentPickerRemoteViewControllerContaining, UIActionSheetPresentationControllerDelegate, UIDocumentMenuDelegate;


#import "UIViewController.h"
#import "_UIResilientRemoteViewContainerViewController.h"
#import "_UIDocumentPickerRemoteViewController.h"

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIActionSheetPresentationControllerDelegate>

 {
    id<UIDocumentMenuDelegate> *_weak_delegate;
}


@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) BOOL _ignoreApplicationEntitlementForImport; // ivar: _ignoreApplicationEntitlementForImport
@property (copy, nonatomic) NSArray *allowedUTIs; // ivar: _allowedUTIs
@property (retain, nonatomic) NSMutableArray *auxiliaryOptions; // ivar: _auxiliaryOptions
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // ivar: _childViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDocumentMenuDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissDelegateCalled; // ivar: _dismissDelegateCalled
@property (nonatomic) NSUInteger documentPickerMode; // ivar: _documentPickerMode
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) BOOL isContentManaged; // ivar: _isContentManaged
@property (readonly, retain, nonatomic, getter=_remoteViewController) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) BOOL sourceIsManaged;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *uploadURL; // ivar: _uploadURL


-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentTypes:(id)arg0 inMode:(NSUInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 inMode:(NSUInteger)arg1 ;
-(void)_commonInitWithCompletion:(id)arg0 ;
-(void)_didSelectPicker;
-(void)_didSelectURL:(id)arg0 ;
-(void)_dismissViewController;
-(void)_dismissWithOption:(id)arg0 ;
-(void)_displayLocationsMenuFromRect:(struct CGRect )arg0 ;
-(void)_stitchFileCreationAtURL:(id)arg0 ;
-(void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg0 ;
-(void)addOptionWithTitle:(id)arg0 image:(id)arg1 order:(NSUInteger)arg2 handler:(id)arg3 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;


@end


#endif