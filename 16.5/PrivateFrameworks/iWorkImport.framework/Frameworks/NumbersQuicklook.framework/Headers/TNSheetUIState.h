// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TNSHEETUISTATE_H
#define TNSHEETUISTATE_H

@class TSKSelectionPath;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TNSheetUIState : NSObject <NSCopying>



@property (nonatomic) NSInteger archivedDeviceIdiom; // ivar: _archivedDeviceIdiom
@property (nonatomic) BOOL hasPreviousVisibleRect; // ivar: _hasPreviousVisibleRect
@property (nonatomic) BOOL hasVisibleRect; // ivar: _hasVisibleRect
@property (readonly, nonatomic) CGPoint previousScrollPosition;
@property (nonatomic) float previousViewScale; // ivar: _previousViewScale
@property (nonatomic) CGRect previousVisibleRect; // ivar: _previousVisibleRect
@property (readonly, nonatomic) CGPoint scrollPosition;
@property (retain, nonatomic) TSKSelectionPath *selectionPath; // ivar: _selectionPath
@property (nonatomic) float viewScale; // ivar: _viewScale
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


+(NSInteger)currentDeviceIdiom;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)p_persistableSelectionPathFromSelectionPath:(id)arg0 ;
-(void)clearPreviousVisibleRect;
-(void)clearVisibleRect;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 beforeVersion:(NSUInteger)arg3 ;
-(void)updateForCurrentDeviceIdiomIfNecessaryWithDefaultViewScale:(float)arg0 ;


@end


#endif