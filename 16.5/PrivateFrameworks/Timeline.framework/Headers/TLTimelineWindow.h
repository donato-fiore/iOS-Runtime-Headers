// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTIMELINEWINDOW_H
#define TLTIMELINEWINDOW_H

@class NSString, NSDate;
@protocol TLTimelineWindow, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TLTimelineEntryNode.h"
#import "TLTimelineSegment.h"

@interface TLTimelineWindow : NSObject <TLTimelineWindow, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TLTimelineEntryNode *focalNode; // ivar: _focalNode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger leftEntryCount;
@property (readonly, nonatomic) TLTimelineSegment *leftSegment; // ivar: _leftSegment
@property (readonly, nonatomic) NSDate *leftmostContiguousEntryDate;
@property (readonly, nonatomic) NSUInteger maxNodes; // ivar: _maxNodes
@property (readonly, nonatomic) NSUInteger rightEntryCount;
@property (readonly, nonatomic) TLTimelineSegment *rightSegment; // ivar: _rightSegment
@property (readonly, nonatomic) NSDate *rightmostContiguousEntryDate;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)containsNode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFocalNode:(id)arg0 leftSegment:(id)arg1 rightSegment:(id)arg2 maxNodes:(NSUInteger)arg3 ;
-(id)initWithFocalNode:(id)arg0 maxNodes:(NSUInteger)arg1 ;
-(id)initWithFocalNode:(id)arg0 maxNodes:(NSUInteger)arg1 leftSegmentCount:(NSUInteger)arg2 rightSegmentCount:(NSUInteger)arg3 ;
-(id)leftmostNode;
-(id)rightmostNode;
-(void)encodeWithCoder:(id)arg0 ;
-(void)rebalance;
-(void)updateFocalNodeWithDate:(id)arg0 ;


@end


#endif