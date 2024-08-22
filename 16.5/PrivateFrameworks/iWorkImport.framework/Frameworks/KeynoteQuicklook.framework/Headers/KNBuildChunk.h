// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNBUILDCHUNK_H
#define KNBUILDCHUNK_H

@class TSPObject, NSUUID, TSPLazyReference, NSArray, NSString, NSSet;
@protocol KNInspectableAnimation, NSCopying, TSKModel;


#import "KNBuild.h"
#import "KNBuildChunkIdentifier.h"
#import "KNBuildChunk.h"
#import "KNSlide.h"

@interface KNBuildChunk : TSPObject <KNInspectableAnimation, NSCopying, TSKModel>

 {
    NSUUID *_buildId;
    BOOL _automatic;
    NSUInteger _referent;
    NSUInteger _cachedIndexOnSlide;
    NSUInteger _cachedActiveIndexOnSlide;
    NSUInteger _cachedIndexInBuild;
    TSPLazyReference *_buildReference;
    BOOL _needsAutomaticFromBuildAttributes;
    BOOL _needsReferentFromBuildAttributes;
    BOOL _needsDelayFromBuildAttributes;
    BOOL _needsDurationFromBuildAttributes;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSUInteger activeIndexOnSlide;
@property (nonatomic, getter=isAutomatic) BOOL automatic;
@property (readonly, nonatomic, getter=isAutomaticWithPreviousChunk) BOOL automaticWithPreviousChunk;
@property (readonly, nonatomic, getter=isAutomaticWithPreviousChunkOnSameDrawable) BOOL automaticWithPreviousChunkOnSameDrawable;
@property (readonly, nonatomic) NSArray *availableEventTriggers;
@property (readonly, nonatomic) KNBuild *build;
@property (readonly, nonatomic) BOOL canEditAnimations;
@property (readonly, nonatomic) KNBuildChunkIdentifier *chunkIdentifier; // ivar: _buildChunkIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) NSUInteger deliveryGroupIndex;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger eventTrigger;
@property (readonly, nonatomic) BOOL hasComplement;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) KNBuild *i_buildFromReference;
@property (readonly, nonatomic) NSUUID *i_buildId;
@property (readonly, nonatomic) NSUInteger indexInBuild;
@property (readonly, nonatomic) NSUInteger indexOnSlide;
@property (readonly, nonatomic) NSSet *inspectableAttributes;
@property (readonly, nonatomic) BOOL isFirstInBuild;
@property (readonly, nonatomic) BOOL isFirstInDeliveryGroup;
@property (readonly, nonatomic) BOOL isFirstOnSlide;
@property (readonly, nonatomic) KNBuildChunk *nextChunkOnSlide;
@property (readonly, nonatomic) KNBuildChunk *previousActiveChunkWithReferentRelativeToEnd;
@property (readonly, nonatomic) KNBuildChunk *previousChunkOnSlide;
@property (nonatomic) NSUInteger referent;
@property (readonly, nonatomic) KNSlide *slide;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


+(BOOL)needsObjectUUID;
+(void)i_repairChunkToBuildReferencesFromUUIDsForChunks:(id)arg0 builds:(id)arg1 context:(id)arg2 ;
+(void)i_validateBuildReferencesForChunks:(id)arg0 ;
-(BOOL)isComplementOfBuildChunk:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBuild:(id)arg0 ;
-(id)initWithBuild:(id)arg0 copyingAttributesFromChunk:(id)arg1 ;
-(id)initWithBuild:(id)arg0 referent:(NSUInteger)arg1 copyingRemainingAttributesFromChunk:(id)arg2 ;
-(id)localizedNameForEventTrigger:(NSUInteger)arg0 includeLineBreaks:(BOOL)arg1 ;
-(id)p_stringForReferent:(NSUInteger)arg0 ;
-(id)p_stringRepresentationWithNotAvailableForIndex:(NSUInteger)arg0 ;
-(void)didInitFromSOS;
-(void)i_clearChunkIdentifier;
-(void)i_didLoadBuild:(id)arg0 ;
-(void)i_invalidateCaches;
-(void)i_updateChunkUUIDReferencesToBuild:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif