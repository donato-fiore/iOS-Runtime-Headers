// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGALLERYBANNER_H
#define WFGALLERYBANNER_H

@class CKRecordID, NSString, WFFileRepresentation, NSData, NSArray;
@protocol WFCloudKitItem, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface WFGalleryBanner : NSObject <WFCloudKitItem, NSMutableCopying>



@property (readonly, nonatomic) CKRecordID *base; // ivar: _base
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CKRecordID *detailPage; // ivar: _detailPage
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *identifier; // ivar: _identifier
@property (retain, nonatomic) WFFileRepresentation *ipad2xImageFile; // ivar: _ipad2xImageFile
@property (retain, nonatomic) WFFileRepresentation *iphone2xImageFile; // ivar: _iphone2xImageFile
@property (retain, nonatomic) WFFileRepresentation *iphone3xImageFile; // ivar: _iphone3xImageFile
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedIdioms; // ivar: _supportedIdioms


+(CGFloat)scaleForBannerSize:(NSInteger)arg0 ;
+(id)properties;
+(id)propertyForSize:(NSInteger)arg0 ;
+(id)recordType;
+(struct CGSize )pixelSizeForBannerSize:(NSInteger)arg0 ;
+(struct CGSize )pointSizeForBannerSize:(NSInteger)arg0 ;
-(NSUInteger)referenceActionForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageFileForSize:(NSInteger)arg0 ;
-(id)imageForSize:(NSInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif