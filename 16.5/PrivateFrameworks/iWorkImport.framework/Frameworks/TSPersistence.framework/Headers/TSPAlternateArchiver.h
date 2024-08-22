// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPALTERNATEARCHIVER_H
#define TSPALTERNATEARCHIVER_H

@class NSString;
@protocol TSPKnownFieldRuleProvider;


#import "TSPArchiverBase.h"

@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider>

 {
    RepeatedPtrField<TSP::FieldPath> _fieldPathsToRemove;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger diffReadVersion; // ivar: _diffReadVersion
@property (readonly, nonatomic) *void fieldPath; // ivar: _fieldPath
@property (readonly, nonatomic) *void fieldPathsToRemove;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly, nonatomic) BOOL isDiff; // ivar: _isDiff
@property (readonly, weak, nonatomic) TSPArchiverBase *parentArchiver; // ivar: _parentArchiver
@property (readonly) Class superclass;


-(*void)baseFieldPathAndReturnShouldDeleteReturnedValue:(*BOOL)arg0 ;
-(BOOL)isSavingCollaborativeDocument;
-(BOOL)isSavingDocumentAs;
-(id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 field:(int)arg2 message:(struct Message *)arg3 ;
-(id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 fieldPath:(*int)arg2 message:(struct Message *)arg3 ;
-(id)alternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 message:(struct Message *)arg2 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 version:(NSUInteger)arg1 fieldPath:(*void)arg2 isDiff:(BOOL)arg3 diffReadVersion:(NSUInteger)arg4 parentArchiver:(id)arg5 ;
-(id)parentAlternateDiffToMergeBeforeVersion:(NSUInteger)arg0 fileFormatVersion:(NSUInteger)arg1 fieldPath:(*int)arg2 message:(struct Message *)arg3 ;
-(void)dealloc;
-(void)enumerateKnownFieldRulesUsingBlock:(id)arg0 ;
-(void)p_setPreserveNewerValueRuleForFieldPath:(*int)arg0 fileFormatVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2 message:(struct Message *)arg3 ;
-(void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(*int)arg0 fileFormatVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2 message:(struct Message *)arg3 ;
-(void)removeField:(int)arg0 message:(struct Message *)arg1 ;
-(void)removeFieldAtEndOfPath:(*int)arg0 message:(struct Message *)arg1 ;
-(void)setPreserveNewerValueRuleForField:(int)arg0 fileFormatVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2 message:(struct Message *)arg3 ;
-(void)setPreserveNewerValueRuleForField:(int)arg0 fileFormatVersion:(NSUInteger)arg1 message:(struct Message *)arg2 ;
-(void)setPreserveNewerValueRuleForFieldPath:(*int)arg0 fileFormatVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2 message:(struct Message *)arg3 ;
-(void)setPreserveNewerValueRuleForFieldPath:(*int)arg0 fileFormatVersion:(NSUInteger)arg1 message:(struct Message *)arg2 ;
-(void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg0 fileFormatVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2 message:(struct Message *)arg3 ;
-(void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg0 fileFormatVersion:(NSUInteger)arg1 message:(struct Message *)arg2 ;
-(void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(*int)arg0 fileFormatVersion:(NSUInteger)arg1 featureIdentifier:(id)arg2 message:(struct Message *)arg3 ;
-(void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(*int)arg0 fileFormatVersion:(NSUInteger)arg1 message:(struct Message *)arg2 ;


@end


#endif