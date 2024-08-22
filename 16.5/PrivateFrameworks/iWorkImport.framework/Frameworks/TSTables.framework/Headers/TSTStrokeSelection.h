// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTSTROKESELECTION_H
#define TSTSTROKESELECTION_H

@class TSKSelection;



@interface TSTStrokeSelection : TSKSelection

@property (readonly, nonatomic) unsigned int mask; // ivar: _mask


+(Class)archivedSelectionClass;
+(id)strokeSelectionWithMask:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithStrokeVisibilityMask:(unsigned int)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif