// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALENDARVIEWDECORATIONSYSTEM_H
#define _UICALENDARVIEWDECORATIONSYSTEM_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UICalendarViewDecorationSystem : NSObject

@property (retain, nonatomic) NSMutableDictionary *decorationViewFeed; // ivar: _decorationViewFeed


-(id)init;
-(void)_prepareDecorationFeedForKey:(id)arg0 ;
-(void)configureDecoration:(id)arg0 ;
-(void)invalidateDecoration:(id)arg0 ;
-(void)reset;


@end


#endif