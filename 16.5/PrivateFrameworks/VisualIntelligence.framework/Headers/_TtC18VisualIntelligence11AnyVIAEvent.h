// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18VISUALINTELLIGENCE11ANYVIAEVENT_H
#define _TTC18VISUALINTELLIGENCE11ANYVIAEVENT_H

@class NSString;
@protocol VIAEvent;

#import <Foundation/Foundation.h>


@interface _TtC18VisualIntelligence11AnyVIAEvent : NSObject <VIAEvent>

 {
    ? event;
}


@property (nonatomic, readonly) NSString *originatingApplication;
@property (nonatomic, readonly) NSUInteger queryID;


-(id)feedback;
-(id)init;


@end


#endif