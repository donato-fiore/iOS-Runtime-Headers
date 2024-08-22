// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKFEEDBACKPROVIDERVIEWCONTROLLER_H
#define VKFEEDBACKPROVIDERVIEWCONTROLLER_H

@class UIViewController, NSArray, NSMutableSet, UIWindow;
@protocol VKFeedbackProviderViewControllerDelegate;



@interface VKFeedbackProviderViewController : UIViewController {
    NSArray *_attachments;
    NSUInteger _options;
    NSMutableSet *_selectedAttachments;
    UIWindow *_window;
}


@property (weak) NSObject<VKFeedbackProviderViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(id)_contentRowButtonWithTitle:(id)arg0 tag:(NSInteger)arg1 allowToggle:(BOOL)arg2 ;
-(id)initWithOptions:(NSUInteger)arg0 attachments:(id)arg1 ;
-(void)_createContentView;
-(void)_toggleContentRowButton:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)present;
-(void)viewDidLoad;


@end


#endif