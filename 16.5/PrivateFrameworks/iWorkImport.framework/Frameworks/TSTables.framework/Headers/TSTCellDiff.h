// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLDIFF_H
#define TSTCELLDIFF_H

@class TSSPropertyMap;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTCellDiff : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL containsCellStyleOrCellDiffCellStyleProperties;
@property (readonly, nonatomic) BOOL containsCellStyleProperties;
@property (readonly, nonatomic) BOOL containsParagraphStyleProperties;
@property (readonly, nonatomic) BOOL containsTextStyleProperties;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) TSSPropertyMap *propertyMapToReset; // ivar: _propertyMapToReset
@property (retain, nonatomic) TSSPropertyMap *propertyMapToSet; // ivar: _propertyMapToSet


+(id)cellDiff;
+(void)initialize;
-(BOOL)boolValueForSetProperty:(int)arg0 ;
-(BOOL)containsAnyPropertiesInSet:(id)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)doesResetAnyProperties:(id)arg0 ;
-(BOOL)doesResetProperty:(int)arg0 ;
-(BOOL)doesSetAnyProperties:(id)arg0 ;
-(BOOL)doesSetProperty:(int)arg0 ;
-(NSUInteger)estimatedByteSize;
-(id)allProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)objectApplyingDiffToObject:(id)arg0 andUpdateInverse:(id)arg1 ;
-(id)objectApplyingDiffToObject:(id)arg0 andUpdateInverse:(id)arg1 optionalConcurrentStylesheet:(id)arg2 ;
-(id)objectForResetProperty:(int)arg0 ;
-(id)objectForSetProperty:(int)arg0 ;
-(id)propertyMapToSetWithProperties:(id)arg0 ;
-(void)clear;
-(void)collectPropertyKeysIntoIndexSet:(id)arg0 ;
-(void)removeObjectsToSetForProperty:(int)arg0 ;
-(void)resetFloatValue:(float)arg0 forProperty:(int)arg1 ;
-(void)resetIntValue:(int)arg0 forProperty:(int)arg1 ;
-(void)resetObject:(id)arg0 forProperty:(int)arg1 ;
-(void)resetPropertiesFromMap:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg0 forProperty:(int)arg1 ;
-(void)setFloatValue:(float)arg0 forProperty:(int)arg1 ;
-(void)setIntValue:(int)arg0 forProperty:(int)arg1 ;
-(void)setObject:(id)arg0 forProperty:(int)arg1 ;
-(void)setPropertiesFromMap:(id)arg0 ;


@end


#endif