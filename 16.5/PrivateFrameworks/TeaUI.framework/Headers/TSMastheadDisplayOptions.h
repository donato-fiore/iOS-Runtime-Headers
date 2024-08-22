// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSMASTHEADDISPLAYOPTIONS_H
#define TSMASTHEADDISPLAYOPTIONS_H


#import <Foundation/Foundation.h>


@interface TSMastheadDisplayOptions : NSObject {
    ? statusBarMode;
    ? styleOptions;
    ? displayMode;
    ? statusBarVisiblityOffset;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithDisplayMode:(NSInteger)arg0 styleOptions:(id)arg1 statusBarVisiblityOffset:(CGFloat)arg2 ;


@end


#endif