// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMATEDBUILD_H
#define KNANIMATEDBUILD_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "KNAnimatedBuild.h"
#import "KNBuildAttributes.h"

@interface KNAnimatedBuild : NSObject <NSSecureCoding>

 {
    KNAnimatedBuild *_parentBuild;
}


@property (nonatomic) BOOL animateAtEndOfPreviousBuild; // ivar: _animateAtEndOfPreviousBuild
@property (readonly, nonatomic) KNBuildAttributes *attributes; // ivar: _attributes
@property (readonly, nonatomic) BOOL automatic; // ivar: _automatic
@property (readonly, nonatomic) NSInteger buildType; // ivar: _buildType
@property (readonly, nonatomic) NSArray *childBuilds; // ivar: _childBuilds
@property (readonly, nonatomic) NSUInteger deliveryOption; // ivar: _deliveryOption
@property (readonly, nonatomic) NSUInteger deliveryStyle; // ivar: _deliveryStyle
@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat durationWithChildren;
@property (readonly, nonatomic) NSString *effectIdentifier; // ivar: _effectIdentifier
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) CGFloat eventEndTime; // ivar: _eventEndTime
@property (nonatomic) NSInteger eventIndex; // ivar: _eventIndex
@property (readonly, nonatomic) CGFloat eventStartTime; // ivar: _eventStartTime
@property (copy, nonatomic) NSDictionary *finalAttributes; // ivar: _finalAttributes
@property (readonly, nonatomic) CGFloat finalRotation;
@property (readonly, nonatomic) CGFloat finalScale;
@property (readonly, nonatomic) BOOL hasFinalActionRotate;
@property (readonly, nonatomic) BOOL hasFinalActionScale;
@property (readonly, nonatomic) BOOL hasPreviousActionAttributes;
@property (readonly, nonatomic) BOOL hasPreviousActionRotate;
@property (readonly, nonatomic) BOOL hasPreviousActionScale;
@property (nonatomic) NSInteger indexInEvent; // ivar: _indexInEvent
@property (readonly, nonatomic) CGFloat initialRotation;
@property (readonly, nonatomic) CGFloat initialScale;
@property (readonly, nonatomic) BOOL isActionBuild;
@property (readonly, nonatomic) BOOL isActionMotionPath;
@property (readonly, nonatomic) BOOL isActionOpacity;
@property (readonly, nonatomic) BOOL isActionRotation;
@property (readonly, nonatomic) BOOL isActionScale;
@property (readonly, nonatomic) BOOL isBuildIn;
@property (readonly, nonatomic) BOOL isBuildOut;
@property (readonly, nonatomic) BOOL isChildBuild;
@property (readonly, nonatomic) BOOL isContentBuild;
@property (readonly, nonatomic) BOOL isDriftBuild;
@property (readonly, nonatomic) BOOL isEmphasisBuild;
@property (readonly, nonatomic) BOOL isImplicitlyVisibleAtBeginning;
@property (nonatomic) BOOL isInitialAmbientBuild; // ivar: _isInitialAmbientBuild
@property (nonatomic) BOOL isLastStage; // ivar: _isLastStage
@property (readonly, nonatomic) BOOL isLineDrawBuild;
@property (readonly, nonatomic) BOOL isMagicChartBuild;
@property (readonly, nonatomic) BOOL isParentBuild;
@property (nonatomic) BOOL isVisibleAtBeginning; // ivar: _isVisibleAtBeginning
@property (nonatomic) BOOL isVisibleAtEnd; // ivar: _isVisibleAtEnd
@property (readonly, nonatomic) CGFloat maxScale;
@property (readonly, nonatomic) KNAnimatedBuild *parentBuild;
@property (readonly, nonatomic) Class pluginClass; // ivar: _pluginClass
@property (copy, nonatomic) NSDictionary *previousAttributes; // ivar: _previousAttributes
@property (readonly, nonatomic) NSArray *requiredScales;
@property (readonly, nonatomic) NSInteger stageIndex; // ivar: _stageIndex
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(BOOL)isBuildByObject;
-(BOOL)isRelatedTo:(id)arg0 ;
-(BOOL)isSiblingTo:(id)arg0 ;
-(BOOL)p_isActionEffect:(id)arg0 ;
-(id)description;
-(id)initWithBuildType:(NSInteger)arg0 effectIdentifier:(id)arg1 attributes:(id)arg2 pluginClass:(Class)arg3 deliveryStyle:(NSUInteger)arg4 deliveryOption:(NSUInteger)arg5 eventIndex:(NSInteger)arg6 stageIndex:(NSInteger)arg7 startTime:(CGFloat)arg8 eventStartTime:(CGFloat)arg9 duration:(CGFloat)arg10 direction:(NSUInteger)arg11 automatic:(BOOL)arg12 animateAtEndOfPreviousBuild:(BOOL)arg13 parentBuild:(id)arg14 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addChildBuild:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif