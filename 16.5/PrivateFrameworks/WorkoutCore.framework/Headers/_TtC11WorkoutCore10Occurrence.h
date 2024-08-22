// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WORKOUTCORE10OCCURRENCE_H
#define _TTC11WORKOUTCORE10OCCURRENCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC11WorkoutCore10Occurrence : NSObject {
    ? count;
    ? countModificationDate;
    ? creationDate;
    ? modificationDate;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger hash;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;


@end


#endif