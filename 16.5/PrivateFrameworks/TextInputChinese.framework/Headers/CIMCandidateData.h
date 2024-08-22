// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIMCANDIDATEDATA_H
#define CIMCANDIDATEDATA_H

@class NSMutableDictionary, TIInputMode, NSArray;

#import <Foundation/Foundation.h>


@interface CIMCandidateData : NSObject

@property (retain, nonatomic) NSMutableDictionary *candidateInfoCache; // ivar: _candidateInfoCache
@property (readonly, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (nonatomic) int sortingMethod; // ivar: _sortingMethod
@property (retain, nonatomic) NSArray *storedCandidates; // ivar: _storedCandidates


+(BOOL)shouldShowZhuyinSortingMethod;
+(id)sortTitleFromSortingMethod:(int)arg0 ;
-(id)candidateGroupsFromDictionary:(id)arg0 sortedKeys:(id)arg1 ;
-(id)candidatesSortedByEmoji:(id)arg0 ;
-(id)candidatesSortedByFrequency:(id)arg0 omittingEmoji:(BOOL)arg1 ;
-(id)candidatesSortedByMethod:(int)arg0 omittingEmoji:(BOOL)arg1 ;
-(id)candidatesSortedByPinyinOrZhuyin:(id)arg0 simplified:(BOOL)arg1 zhuyin:(BOOL)arg2 ;
-(id)candidatesSortedByRadical:(id)arg0 simplified:(BOOL)arg1 collationLocale:(id)arg2 ;
-(id)candidatesSortedByStrokes:(id)arg0 simplified:(BOOL)arg1 ;
-(id)candidatesSortedByWubi:(id)arg0 omittingEmoji:(BOOL)arg1 ;
-(id)init;
-(id)initWithInputMode:(id)arg0 ;
-(id)wordPropertyDictionaryForCandidates:(id)arg0 isSimplified:(BOOL)arg1 ;
-(void)addCharacter:(id)arg0 groupLabel:(id)arg1 dictionary:(id)arg2 isSecondary:(BOOL)arg3 ;
-(void)clearCache;
-(void)setCandidates:(id)arg0 ;
-(void)sortCharactersByStrokeCount:(id)arg0 wordPropertiesDictionary:(id)arg1 ;


@end


#endif