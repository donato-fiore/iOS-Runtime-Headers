// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSYSTEMPAPERPRESENTER_H
#define ICSYSTEMPAPERPRESENTER_H


#import <Foundation/Foundation.h>


@interface ICSystemPaperPresenter : NSObject



+(BOOL)isSystemPaperAvailable;
+(id)makeExtensionHostViewControllerWithUserActivityData:(id)arg0 completion:(id)arg1 ;
+(void)initialize;
+(void)presentSystemPaperWithUserActivityData:(id)arg0 presentingViewController:(id)arg1 completion:(id)arg2 ;
-(id)init;


@end


#endif