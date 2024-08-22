// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSECTIONTEMPLATEPAGE_H
#define TPSECTIONTEMPLATEPAGE_H

@class TSPObject, NSString, TSKDocumentRoot, NSEnumerator, TSUUUIDPath, NSArray;
@protocol TSWPHeaderFooterProvider, TPSectionTemplateDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying;


#import "TPDocumentRoot.h"
#import "TPSection.h"

@interface TPSectionTemplatePage : TSPObject <TSWPHeaderFooterProvider, TPSectionTemplateDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying>

 {
    TPDocumentRoot *_documentRoot;
    TSWPStorage"] _headerFooters;
}


@property (readonly, nonatomic) CGFloat bodyWidth;
@property (readonly, nonatomic) NSUInteger countOfSectionTemplateDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSEnumerator *headerFooterFragmentEnumerator;
@property (readonly, nonatomic) TSUUUIDPath *pageTemplateUUIDPath; // ivar: _pageTemplateUUIDPath
@property (weak, nonatomic) TPSection *section; // ivar: _section
@property (readonly, nonatomic) NSArray *sectionTemplateDrawables; // ivar: _sectionTemplateDrawables
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesSingleHeaderFooter;


+(BOOL)needsObjectUUID;
+(id)sectionTemplatePageForPageTemplate:(id)arg0 withSection:(id)arg1 ;
-(BOOL)containsInfo:(id)arg0 ;
-(BOOL)containsModelObject:(id)arg0 ;
-(BOOL)isHeaderFooterEmpty:(NSInteger)arg0 ;
-(BOOL)isHeaderFooterEmpty:(NSInteger)arg0 fragmentAtIndex:(NSInteger)arg1 ;
-(BOOL)p_isInDocument;
-(CGFloat)footerHeight;
-(CGFloat)headerHeight;
-(CGFloat)pHeightOfHeaderFooter:(NSInteger)arg0 ;
-(NSInteger)headerFooterTypeForStorage:(id)arg0 ;
-(NSInteger)headerFragmentIndexForStorage:(id)arg0 ;
-(NSInteger)p_headerFragmentIndexForTabIndex:(unsigned int)arg0 paragraphStyle:(id)arg1 bodyWidth:(CGFloat)arg2 ;
-(NSUInteger)indexOfSectionTemplateDrawable:(id)arg0 ;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)headerFooter:(NSInteger)arg0 fragmentAtIndex:(NSInteger)arg1 ;
-(id)i_pageTemplate;
-(id)initWithSection:(id)arg0 ;
-(id)masterDrawables;
-(id)objectUUIDPath;
-(id)p_headerAndFooterStorages;
-(id)sectionTemplateDrawablesSortedByZOrder:(id)arg0 ;
-(id)topLevelParentInfoForInfo:(id)arg0 ;
-(void)addSectionTemplateDrawable:(id)arg0 atIndex:(NSUInteger)arg1 insertContext:(id)arg2 suppressDOLC:(BOOL)arg3 ;
-(void)addSectionTemplateDrawables:(id)arg0 atIndex:(NSUInteger)arg1 insertContext:(id)arg2 suppressDOLC:(BOOL)arg3 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)i_addSectionTemplateDrawable:(id)arg0 ;
-(void)i_copyHeadersAndFootersFrom:(id)arg0 dolcContext:(id)arg1 withBlock:(id)arg2 ;
-(void)i_createHeadersFooters:(NSInteger)arg0 stylesheet:(id)arg1 paragraphStyle:(id)arg2 context:(id)arg3 mayAlreadyExist:(BOOL)arg4 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg0 paragraphStyle:(id)arg1 context:(id)arg2 ;
-(void)i_importHeaderFooter:(id)arg0 headerType:(NSInteger)arg1 dolcContext:(id)arg2 splitHeaders:(BOOL)arg3 ;
-(void)i_setHeaderFooter:(NSInteger)arg0 storage:(id)arg1 fragmentIndex:(NSInteger)arg2 ;
-(void)i_splitHeaderFooter:(id)arg0 storages:(*id)arg1 dolcContext:(id)arg2 bodyWidth:(CGFloat)arg3 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg0 stylesheet:(id)arg1 ;
-(void)p_makeHeadersFootersPerformSelector:(SEL)arg0 documentRoot:(id)arg1 ;
-(void)p_makeHeadersFootersPerformSelector:(SEL)arg0 documentRoot:(id)arg1 context:(id)arg2 ;
-(void)p_makeHeadersFootersPerformSelector:(SEL)arg0 withStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)p_makeMasterDrawablesPerformSelector:(SEL)arg0 documentRoot:(id)arg1 ;
-(void)p_makeMasterDrawablesPerformSelector:(SEL)arg0 documentRoot:(id)arg1 context:(id)arg2 ;
-(void)p_makeMasterDrawablesPerformSelector:(SEL)arg0 withStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)p_splitHeaderFooterByTabs:(id)arg0 storages:(*id)arg1 dolcContext:(id)arg2 bodyWidth:(CGFloat)arg3 ;
-(void)removeSectionTemplateDrawable:(id)arg0 suppressDOLC:(BOOL)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setParentStorage:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif