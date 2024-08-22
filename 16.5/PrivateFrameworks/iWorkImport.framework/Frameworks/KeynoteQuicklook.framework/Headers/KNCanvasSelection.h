// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNCANVASSELECTION_H
#define KNCANVASSELECTION_H

@class TSDCanvasSelection, NSSet;



@interface KNCanvasSelection : TSDCanvasSelection

@property (retain, nonatomic) NSSet *buildChunks; // ivar: _buildChunks
@property (readonly, nonatomic) BOOL containsOnlyUnlockedInfosSupportingHyperlinkActions;
@property (readonly, nonatomic) NSSet *drawableInfos;
@property (readonly, nonatomic) NSSet *unlockedDrawableInfos;
@property (readonly, nonatomic) NSSet *unlockedInfosSupportingHyperlinkActions;


+(Class)archivedSelectionClass;
+(id)emptySelection;
-(BOOL)containsBuildChunksOfAnimationType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)UUIDDescription;
-(id)copyExcludingBuildChunks:(id)arg0 ;
-(id)copyReplacingChunksWithChunks:(id)arg0 ;
-(id)initWithInfos:(id)arg0 ;
-(id)initWithInfos:(id)arg0 buildChunks:(id)arg1 ;
-(id)initWithPersistableInfos:(id)arg0 drawableToActionGhostIndexPromiseMap:(id)arg1 buildChunks:(id)arg2 ;
-(id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)arg0 ;
-(id)subclassDescription;


@end


#endif