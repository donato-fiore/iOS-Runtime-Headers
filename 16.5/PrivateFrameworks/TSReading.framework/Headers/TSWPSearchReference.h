// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSEARCHREFERENCE_H
#define TSWPSEARCHREFERENCE_H

@class NSString, NSArray;
@protocol TSKSearchReference, TSKAnnotation;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"
#import "TSWPSmartField.h"
#import "TSWPSelection.h"

@interface TSWPSearchReference : NSObject <TSKSearchReference>

 {
    TSWPStorage *_storage;
    _NSRange _smartFieldRange;
    BOOL _refersToSmartField;
    TSWPSmartField *_smartField;
}


@property (retain, nonatomic) NSObject<TSKAnnotation> *annotation; // ivar: annotation
@property (nonatomic) BOOL autohideHighlight; // ivar: _autohideHighlight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *findHighlights; // ivar: _findHighlights
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (nonatomic) BOOL pulseHighlight; // ivar: _pulseHighlight
@property (nonatomic) _NSRange range;
@property (nonatomic) BOOL refersToSmartField;
@property (nonatomic) CGPoint searchReferencePoint; // ivar: searchReferencePoint
@property (retain, nonatomic) TSWPSelection *selection; // ivar: _selection
@property (retain, nonatomic) TSWPSmartField *smartField;
@property (nonatomic) _NSRange smartFieldRange;
@property (readonly) Class superclass;


+(id)searchReferenceWithStorage:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)searchReferenceWithStorage:(id)arg0 selection:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReplaceable;
-(BOOL)isSelectable;
-(NSInteger)compare:(id)arg0 ;
-(id)commandForReplacingWithString:(id)arg0 options:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStorage:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithStorage:(id)arg0 selection:(id)arg1 ;
-(id)model;
-(id)searchReferenceEnd;
-(id)searchReferenceForReplacingWithString:(id)arg0 options:(NSUInteger)arg1 authorCreatedWithCommand:(*id)arg2 ;
-(id)searchReferenceStart;
-(id)storage;
-(void)dealloc;
-(void)pUpdateSelection;


@end


#endif