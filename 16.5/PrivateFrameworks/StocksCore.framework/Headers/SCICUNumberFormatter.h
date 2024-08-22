// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCICUNUMBERFORMATTER_H
#define SCICUNUMBERFORMATTER_H


#import <Foundation/Foundation.h>


@interface SCICUNumberFormatter : NSObject



-(id)formattedCount:(NSInteger)arg0 ;
-(id)formattedCount:(NSInteger)arg0 withLocale:(id)arg1 ;
-(id)formattedCount:(NSInteger)arg0 withLocale:(id)arg1 longform:(BOOL)arg2 ;
-(id)formattedCount:(NSInteger)arg0 withLocale:(id)arg1 longform:(BOOL)arg2 compactDisplay:(BOOL)arg3 ;


@end


#endif