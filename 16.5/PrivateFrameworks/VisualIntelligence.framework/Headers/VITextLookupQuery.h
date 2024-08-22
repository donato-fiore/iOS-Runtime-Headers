// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VITEXTLOOKUPQUERY_H
#define VITEXTLOOKUPQUERY_H

@class NSString;
@protocol NSCopying, VIImageContent;

#import <Foundation/Foundation.h>

#import "VIAnnotation.h"
#import "VIQueryContext.h"
#import "VITextContext.h"

@interface VITextLookupQuery : NSObject <NSCopying>



@property (readonly, nonatomic) VIAnnotation *annotation; // ivar: _annotation
@property (readonly, copy, nonatomic) NSString *hintDomain; // ivar: _hintDomain
@property (readonly, nonatomic) NSObject<VIImageContent> *imageContext; // ivar: _imageContext
@property (readonly, nonatomic) VIQueryContext *queryContext; // ivar: _queryContext
@property (readonly, copy, nonatomic) NSString *queryTerm; // ivar: _queryTerm
@property (readonly, copy, nonatomic) VITextContext *textContext; // ivar: _textContext


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQueryTerm:(id)arg0 domain:(id)arg1 textContext:(id)arg2 imageContext:(id)arg3 annotation:(id)arg4 queryContext:(id)arg5 ;
-(id)initWithQueryTerm:(id)arg0 hintDomain:(id)arg1 textContext:(id)arg2 imageContext:(id)arg3 annotation:(id)arg4 queryContext:(id)arg5 ;


@end


#endif