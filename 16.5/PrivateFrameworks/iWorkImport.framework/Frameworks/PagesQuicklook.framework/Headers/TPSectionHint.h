// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSECTIONHINT_H
#define TPSECTIONHINT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TPSectionHint : NSObject

@property (readonly, nonatomic) _NSRange documentPageRange;
@property (nonatomic) NSUInteger documentStartPageIndex; // ivar: _documentStartPageIndex
@property (readonly, nonatomic) NSUInteger lastPageIndex;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageCountWithoutFillerPage;
@property (readonly, nonatomic) NSArray *pageHints; // ivar: _pageHints


+(BOOL)verifyHints:(id)arg0 withBodyStorage:(id)arg1 upToPageIndex:(NSUInteger)arg2 ;
-(BOOL)containsDocumentPageIndex:(NSUInteger)arg0 ;
-(BOOL)hasEndOfTextLayoutBeforePageIndex:(NSUInteger)arg0 ;
-(BOOL)hasPageHintOfKind:(NSInteger)arg0 atPageIndex:(NSUInteger)arg1 ;
-(BOOL)hasPageHintOfKind:(NSInteger)arg0 beforePageIndex:(NSUInteger)arg1 ;
-(id)copyForArchiving;
-(id)copyForCaching;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)pageHintForPageIndex:(NSUInteger)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 shouldArchiveHintBlock:(id)arg3 ;
-(void)trimPageHintsFromPageIndex:(NSUInteger)arg0 ;


@end


#endif