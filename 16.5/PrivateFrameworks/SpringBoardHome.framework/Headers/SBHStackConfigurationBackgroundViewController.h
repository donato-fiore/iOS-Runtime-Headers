// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSTACKCONFIGURATIONBACKGROUNDVIEWCONTROLLER_H
#define SBHSTACKCONFIGURATIONBACKGROUNDVIEWCONTROLLER_H

@class CCUICustomContentModuleBackgroundViewController;



@interface SBHStackConfigurationBackgroundViewController : CCUICustomContentModuleBackgroundViewController

@property (nonatomic) CGSize apertureSize; // ivar: _apertureSize


-(CGFloat)expandedContentModuleHeight;
-(CGFloat)expandedContentModuleWidth;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)setFooterButtons:(id)arg0 ;


@end


#endif