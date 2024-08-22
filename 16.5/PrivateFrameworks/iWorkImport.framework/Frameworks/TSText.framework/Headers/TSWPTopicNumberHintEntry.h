// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTOPICNUMBERHINTENTRY_H
#define TSWPTOPICNUMBERHINTENTRY_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSWPTopicNumberHintEntry : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *topicNumbers; // ivar: _topicNumbers


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif