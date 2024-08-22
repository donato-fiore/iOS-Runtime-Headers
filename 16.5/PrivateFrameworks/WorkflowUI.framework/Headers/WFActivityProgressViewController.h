// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIVITYPROGRESSVIEWCONTROLLER_H
#define WFACTIVITYPROGRESSVIEWCONTROLLER_H

@class UIViewController;



@interface WFActivityProgressViewController : UIViewController {
    ? activityView;
    ? successView;
    ? _contentView;
    ? _state;
}


@property (nonatomic) NSUInteger state;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif