// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPTELEMETRYCICONIAINVESTIGATION_H
#define APPTELEMETRYCICONIAINVESTIGATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AppTelemetryCiconiaInvestigation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger accountQuotaUsage; // ivar: _accountQuotaUsage
@property (nonatomic) BOOL areMigratedFaultsBelowThreshold; // ivar: _areMigratedFaultsBelowThreshold
@property (nonatomic) BOOL areNonFaultAllMigrated; // ivar: _areNonFaultAllMigrated
@property (nonatomic) NSInteger bouncedDocumentsFoldersCount; // ivar: _bouncedDocumentsFoldersCount
@property (nonatomic) NSInteger bouncedItemsCount; // ivar: _bouncedItemsCount
@property (nonatomic) NSInteger bouncedItemsMatrix; // ivar: _bouncedItemsMatrix
@property (nonatomic) NSInteger ciconiaVersion; // ivar: _ciconiaVersion
@property (nonatomic) CGFloat cloningTime; // ivar: _cloningTime
@property (retain, nonatomic) NSString *crashReporterKey; // ivar: _crashReporterKey
@property (nonatomic) NSInteger datalessItemsCount; // ivar: _datalessItemsCount
@property (nonatomic) NSInteger diskSpaceLeft; // ivar: _diskSpaceLeft
@property (nonatomic) NSInteger documentsFoldersWithoutItemIDCount; // ivar: _documentsFoldersWithoutItemIDCount
@property (nonatomic) NSInteger expectedMigratedItemsCount; // ivar: _expectedMigratedItemsCount
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasAccountQuotaUsage;
@property (nonatomic) BOOL hasAreMigratedFaultsBelowThreshold;
@property (nonatomic) BOOL hasAreNonFaultAllMigrated;
@property (nonatomic) BOOL hasBouncedDocumentsFoldersCount;
@property (nonatomic) BOOL hasBouncedItemsCount;
@property (nonatomic) BOOL hasBouncedItemsMatrix;
@property (nonatomic) BOOL hasCiconiaVersion;
@property (nonatomic) BOOL hasCloningTime;
@property (readonly, nonatomic) BOOL hasCrashReporterKey;
@property (nonatomic) BOOL hasDatalessItemsCount;
@property (nonatomic) BOOL hasDiskSpaceLeft;
@property (nonatomic) BOOL hasDocumentsFoldersWithoutItemIDCount;
@property (nonatomic) BOOL hasExpectedMigratedItemsCount;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasIgnoredContentProtectedItems;
@property (nonatomic) BOOL hasImportTime;
@property (nonatomic) BOOL hasIsAccountDataSeparated;
@property (nonatomic) BOOL hasIsDesktopEnabled;
@property (nonatomic) BOOL hasItemsChangedDuringCloning;
@property (nonatomic) BOOL hasItemsNotFoundInDB;
@property (nonatomic) BOOL hasItemsNotMigratedCount;
@property (nonatomic) BOOL hasManuallyTriggeredMigration;
@property (nonatomic) BOOL hasMaterialisedOnCDItemsCount;
@property (nonatomic) BOOL hasMaterialisedOnFPFSItemsCount;
@property (nonatomic) BOOL hasPackagesWithoutBundleBit;
@property (nonatomic) BOOL hasPreviousAttempts;
@property (nonatomic) BOOL hasPreviousFailedAttempts;
@property (nonatomic) BOOL hasPreviousReleasesSuccessRate;
@property (readonly, nonatomic) BOOL hasRampId;
@property (nonatomic) BOOL hasSymlinkedDocumentsFolderCount;
@property (nonatomic) BOOL hasTotalItemCount;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (nonatomic) BOOL hasTypesOfMigratedItemsMask;
@property (nonatomic) BOOL hasTypesOfNonMigratedItemsMask;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDescription;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) BOOL hasUnexpectedCreations;
@property (nonatomic) NSInteger ignoredContentProtectedItems; // ivar: _ignoredContentProtectedItems
@property (nonatomic) CGFloat importTime; // ivar: _importTime
@property (nonatomic) BOOL isAccountDataSeparated; // ivar: _isAccountDataSeparated
@property (nonatomic) BOOL isDesktopEnabled; // ivar: _isDesktopEnabled
@property (nonatomic) NSInteger itemsChangedDuringCloning; // ivar: _itemsChangedDuringCloning
@property (nonatomic) NSInteger itemsNotFoundInDB; // ivar: _itemsNotFoundInDB
@property (nonatomic) NSInteger itemsNotMigratedCount; // ivar: _itemsNotMigratedCount
@property (nonatomic) BOOL manuallyTriggeredMigration; // ivar: _manuallyTriggeredMigration
@property (nonatomic) NSInteger materialisedOnCDItemsCount; // ivar: _materialisedOnCDItemsCount
@property (nonatomic) NSInteger materialisedOnFPFSItemsCount; // ivar: _materialisedOnFPFSItemsCount
@property (nonatomic) NSInteger packagesWithoutBundleBit; // ivar: _packagesWithoutBundleBit
@property (nonatomic) NSInteger previousAttempts; // ivar: _previousAttempts
@property (nonatomic) NSInteger previousFailedAttempts; // ivar: _previousFailedAttempts
@property (nonatomic) float previousReleasesSuccessRate; // ivar: _previousReleasesSuccessRate
@property (retain, nonatomic) NSString *rampId; // ivar: _rampId
@property (nonatomic) NSInteger symlinkedDocumentsFolderCount; // ivar: _symlinkedDocumentsFolderCount
@property (nonatomic) NSInteger totalItemCount; // ivar: _totalItemCount
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) int typesOfMigratedItemsMask; // ivar: _typesOfMigratedItemsMask
@property (nonatomic) int typesOfNonMigratedItemsMask; // ivar: _typesOfNonMigratedItemsMask
@property (nonatomic) NSInteger underlyingErrorCode; // ivar: _underlyingErrorCode
@property (retain, nonatomic) NSString *underlyingErrorDescription; // ivar: _underlyingErrorDescription
@property (retain, nonatomic) NSString *underlyingErrorDomain; // ivar: _underlyingErrorDomain
@property (nonatomic) NSInteger unexpectedCreations; // ivar: _unexpectedCreations


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif