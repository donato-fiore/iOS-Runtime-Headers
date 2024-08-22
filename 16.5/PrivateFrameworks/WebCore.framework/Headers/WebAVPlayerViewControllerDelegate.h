// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBAVPLAYERVIEWCONTROLLERDELEGATE_H
#define WEBAVPLAYERVIEWCONTROLLERDELEGATE_H

@class NSString;
@protocol AVPlayerViewControllerDelegate_WebKitOnly;

#import <Foundation/Foundation.h>


@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly>

 {
    ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> _fullscreenInterface;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? fullscreenInterface;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)playerViewController:(id)arg0 shouldExitFullScreenWithReason:(NSInteger)arg1 ;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg0 ;
-(BOOL)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)arg0 ;
-(void)playerViewController:(id)arg0 failedToStartPictureInPictureWithError:(id)arg1 ;
-(void)playerViewController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg0 ;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg0 ;


@end


#endif