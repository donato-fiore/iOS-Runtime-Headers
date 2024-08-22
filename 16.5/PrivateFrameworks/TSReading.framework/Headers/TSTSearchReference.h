// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTSEARCHREFERENCE_H
#define TSTSEARCHREFERENCE_H

@class NSString, NSArray;
@protocol TSKSearchReference, TSKAnnotation;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"

@interface TSTSearchReference : NSObject <TSKSearchReference>

 {
    TSTTableInfo *_tableInfo;
    ? _cellID;
    _NSRange _range;
}


@property (retain, nonatomic) NSObject<TSKAnnotation> *annotation; // ivar: annotation
@property (nonatomic) BOOL autohideHighlight; // ivar: _autohideHighlight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *findHighlights; // ivar: _findHighlights
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pulseHighlight; // ivar: _pulseHighlight
@property (nonatomic) CGPoint searchReferencePoint; // ivar: searchReferencePoint
@property (readonly) Class superclass;


+(id)searchReferenceWithTableInfo:(id)arg0 cellID:(struct ? )arg1 range:(struct _NSRange )arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReplaceable;
-(id)commandForReplacingWithString:(id)arg0 options:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTableInfo:(id)arg0 cellID:(struct ? )arg1 range:(struct _NSRange )arg2 ;
-(id)model;
-(id)searchReferenceEnd;
-(id)searchReferenceForReplacingWithString:(id)arg0 options:(NSUInteger)arg1 authorCreatedWithCommand:(*id)arg2 ;
-(id)searchReferenceStart;
-(id)selection;
-(id)tableInfo;
-(struct ? )cellID;
-(struct _NSRange )range;
-(void)dealloc;
-(void)setCellID:(struct ? )arg0 ;
-(void)setRange:(struct _NSRange )arg0 ;


@end


#endif