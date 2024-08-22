// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCANVASSELECTION_H
#define TSDCANVASSELECTION_H

@class TSKSelection, NSString, NSSet;
@protocol TSDCanvasSelection;


#import "TSDInfoCollectionSelectionHelper.h"

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger infoCount;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *modelInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper; // ivar: _selectionHelper
@property (readonly, nonatomic) NSString *subclassDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unlockedInfoCount;
@property (readonly, nonatomic) NSSet *unlockedInfos;


+(Class)archivedSelectionClass;
+(id)emptySelection;
-(BOOL)containsKindOfClass:(Class)arg0 ;
-(BOOL)containsUnlockedKindOfClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)providesActivityDescription;
-(id)UUIDDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)infosOfClass:(Class)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithInfos:(id)arg0 ;
-(id)initWithInteractiveInfos:(id)arg0 nonInteractiveInfos:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif