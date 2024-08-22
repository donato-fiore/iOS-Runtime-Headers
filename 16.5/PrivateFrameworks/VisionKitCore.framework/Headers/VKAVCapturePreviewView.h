// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKAVCAPTUREPREVIEWVIEW_H
#define VKAVCAPTUREPREVIEWVIEW_H

@class UIView;
@protocol VKAVCapturePreviewViewDelegate;



@interface VKAVCapturePreviewView : UIView {
    CGRect _bounds;
    id<VKAVCapturePreviewViewDelegate> *_delegate;
    NSInteger _interfaceOrientation;
}




+(Class)layerClass;
-(void)layoutSubviews;


@end


#endif