// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGALLERYPAGE_H
#define WFGALLERYPAGE_H

@class NSArray, CKRecordID, NSString, NSNumber, NSData;
@protocol WFCloudKitItem, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface WFGalleryPage : NSObject <WFCloudKitItem, NSMutableCopying>



@property (readonly, nonatomic) NSArray *banners; // ivar: _banners
@property (readonly, nonatomic) CKRecordID *base; // ivar: _base
@property (readonly, nonatomic) NSArray *collections; // ivar: _collections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *donations; // ivar: _donations
@property (readonly, nonatomic) NSArray *donationsGroupedByApp; // ivar: _donationsGroupedByApp
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *isRoot; // ivar: _isRoot
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSNumber *minVersion; // ivar: _minVersion
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly, nonatomic) NSArray *routines; // ivar: _routines
@property (readonly) Class superclass;


+(id)properties;
+(id)recordType;
-(NSUInteger)referenceActionForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)subPageMatchingName:(id)arg0 ;
-(id)subPageWithIdentifier:(id)arg0 ;


@end


#endif