/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionOperation.h>

@class HDClinicalAccount;

@interface HDClinicalIngestionPerAccountOperation : HDClinicalIngestionOperation {

	HDClinicalAccount* _account;

}

@property (copy,readonly) HDClinicalAccount * account; 
-(id)debugDescription;
-(HDClinicalAccount *)account;
-(id)initWithTask:(id)arg1 account:(id)arg2 nextOperation:(id)arg3 ;
@end

