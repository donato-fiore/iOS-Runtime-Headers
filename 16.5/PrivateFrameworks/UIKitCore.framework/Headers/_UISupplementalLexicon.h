// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISUPPLEMENTALLEXICON_H
#define _UISUPPLEMENTALLEXICON_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UISupplementalLexicon : NSObject {
    id *_internal;
}


@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSUInteger searchPrefixes; // ivar: _searchPrefixes


-(id)description;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 searchPrefixes:(NSUInteger)arg1 ;
-(id)initWithItems:(id)arg0 searchPrefixes:(NSUInteger)arg1 andTISupplementalLexicon:(id)arg2 ;
-(id)initWithRTISupplementalLexicon:(id)arg0 ;
-(void)dealloc;


@end


#endif