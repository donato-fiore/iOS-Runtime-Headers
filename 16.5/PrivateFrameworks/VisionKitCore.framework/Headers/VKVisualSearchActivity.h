// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKVISUALSEARCHACTIVITY_H
#define VKVISUALSEARCHACTIVITY_H

@class UIActivity, UIImage, UIViewController, NSString;



@interface VKVisualSearchActivity : UIActivity

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) *CGImage imageToProcess; // ivar: _imageToProcess
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithImage:(struct CGImage *)arg0 presentingViewController:(id)arg1 ;
-(void)performActivity;


@end


#endif