// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIDEOSEXTRASLOADINGVIEW_H
#define VIDEOSEXTRASLOADINGVIEW_H

@class UIView, IKAppDocument, NSDictionary, NSString;
@protocol IKAppDocumentDelegate, VideosExtrasLoadingViewDelegate;


#import "VideosExtrasActivityIndicator.h"

@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate>

 {
    IKAppDocument *_document;
    NSDictionary *_options;
    VideosExtrasActivityIndicator *_activityIndicator;
    id<VideosExtrasLoadingViewDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDocument:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
-(void)_show;
-(void)cancelCountdownToVisibility;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentNeedsUpdate:(id)arg0 ;
-(void)startCountdownToVisibilityWithInterval:(CGFloat)arg0 ;


@end


#endif