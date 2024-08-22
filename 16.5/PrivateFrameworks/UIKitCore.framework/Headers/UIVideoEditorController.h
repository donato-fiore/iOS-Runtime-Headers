// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIVIDEOEDITORCONTROLLER_H
#define UIVIDEOEDITORCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol UINavigationControllerDelegate><UIVideoEditorControllerDelegate;


#import "UINavigationController.h"

@interface UIVideoEditorController : UINavigationController {
    int _previousStatusBarStyle;
    NSMutableDictionary *_properties;
    ? _flags;
}


@property (nonatomic) NSObject<UINavigationControllerDelegate><UIVideoEditorControllerDelegate> *delegate;
@property (nonatomic) CGFloat videoMaximumDuration;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) NSInteger videoQuality;


+(BOOL)canEditVideoAtPath:(id)arg0 ;
-(BOOL)_didRevertStatusBar;
-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(id)_createInitialController;
-(id)_properties;
-(id)_valueForProperty:(id)arg0 ;
-(id)_videoURL;
-(id)init;
-(void)_autoDismiss;
-(void)_initializeProperties;
-(void)_removeAllChildren;
-(void)_setProperties:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)_setVideoURL:(id)arg0 ;
-(void)_setupControllers;
-(void)editVideoViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)editVideoViewController:(id)arg0 didTrimVideoWithOptions:(id)arg1 ;
-(void)editVideoViewControllerDidCancel:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillUnload;


@end


#endif