/*
 * Copyright 2010-2014 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <AWSiOSSDKv2/AWSNetworking.h>
#import <AWSiOSSDKv2/AZModel.h>

FOUNDATION_EXPORT NSString *const AWSS3ErrorDomain;

typedef NS_ENUM(NSInteger, AWSS3ErrorType) {
    AWSS3ErrorUnknown,
    AWSS3ErrorAccessDenied,
    AWSS3ErrorExpiredToken,
    AWSS3ErrorInvalidAccessKeyId,
    AWSS3ErrorInvalidToken,
    AWSS3ErrorSignatureDoesNotMatch,
    AWSS3ErrorTokenRefreshRequired,
    AWSS3ErrorBucketAlreadyExists,
    AWSS3ErrorNoSuchBucket,
    AWSS3ErrorNoSuchKey,
    AWSS3ErrorNoSuchUpload,
    AWSS3ErrorObjectAlreadyInActiveTier,
    AWSS3ErrorObjectNotInActiveTier,
};

typedef NS_ENUM(NSInteger, AWSS3BucketCannedACL) {
    AWSS3BucketCannedACLUnknown,
    AWSS3BucketCannedACLPrivate,
    AWSS3BucketCannedACLPublicRead,
    AWSS3BucketCannedACLPublicReadWrite,
    AWSS3BucketCannedACLAuthenticatedRead,
};

typedef NS_ENUM(NSInteger, AWSS3BucketLocationConstraint) {
    AWSS3BucketLocationConstraintUnknown,
    AWSS3BucketLocationConstraintEU,
    AWSS3BucketLocationConstraintEUWest1,
    AWSS3BucketLocationConstraintUSWest1,
    AWSS3BucketLocationConstraintUSWest2,
    AWSS3BucketLocationConstraintAPSoutheast1,
    AWSS3BucketLocationConstraintAPSoutheast2,
    AWSS3BucketLocationConstraintAPNortheast1,
    AWSS3BucketLocationConstraintSAEast1,
    AWSS3BucketLocationConstraintBlank,
};

typedef NS_ENUM(NSInteger, AWSS3BucketLogsPermission) {
    AWSS3BucketLogsPermissionUnknown,
    AWSS3BucketLogsPermissionFullControl,
    AWSS3BucketLogsPermissionRead,
    AWSS3BucketLogsPermissionWrite,
};

typedef NS_ENUM(NSInteger, AWSS3BucketVersioningStatus) {
    AWSS3BucketVersioningStatusUnknown,
    AWSS3BucketVersioningStatusEnabled,
    AWSS3BucketVersioningStatusSuspended,
};

typedef NS_ENUM(NSInteger, AWSS3EncodingType) {
    AWSS3EncodingTypeUnknown,
    AWSS3EncodingTypeURL,
};

typedef NS_ENUM(NSInteger, AWSS3Event) {
    AWSS3EventUnknown,
    AWSS3EventS3ReducedRedundancyLostObject,
};

typedef NS_ENUM(NSInteger, AWSS3ExpirationStatus) {
    AWSS3ExpirationStatusUnknown,
    AWSS3ExpirationStatusEnabled,
    AWSS3ExpirationStatusDisabled,
};

typedef NS_ENUM(NSInteger, AWSS3MFADelete) {
    AWSS3MFADeleteUnknown,
    AWSS3MFADeleteEnabled,
    AWSS3MFADeleteDisabled,
};

typedef NS_ENUM(NSInteger, AWSS3MFADeleteStatus) {
    AWSS3MFADeleteStatusUnknown,
    AWSS3MFADeleteStatusEnabled,
    AWSS3MFADeleteStatusDisabled,
};

typedef NS_ENUM(NSInteger, AWSS3MetadataDirective) {
    AWSS3MetadataDirectiveUnknown,
    AWSS3MetadataDirectiveCopy,
    AWSS3MetadataDirectiveReplace,
};

typedef NS_ENUM(NSInteger, AWSS3ObjectCannedACL) {
    AWSS3ObjectCannedACLUnknown,
    AWSS3ObjectCannedACLPrivate,
    AWSS3ObjectCannedACLPublicRead,
    AWSS3ObjectCannedACLPublicReadWrite,
    AWSS3ObjectCannedACLAuthenticatedRead,
    AWSS3ObjectCannedACLBucketOwnerRead,
    AWSS3ObjectCannedACLBucketOwnerFullControl,
};

typedef NS_ENUM(NSInteger, AWSS3ObjectStorageClass) {
    AWSS3ObjectStorageClassUnknown,
    AWSS3ObjectStorageClassStandard,
    AWSS3ObjectStorageClassReducedRedundancy,
    AWSS3ObjectStorageClassGlacier,
};

typedef NS_ENUM(NSInteger, AWSS3ObjectVersionStorageClass) {
    AWSS3ObjectVersionStorageClassUnknown,
    AWSS3ObjectVersionStorageClassStandard,
};

typedef NS_ENUM(NSInteger, AWSS3Payer) {
    AWSS3PayerUnknown,
    AWSS3PayerRequester,
    AWSS3PayerBucketOwner,
};

typedef NS_ENUM(NSInteger, AWSS3Permission) {
    AWSS3PermissionUnknown,
    AWSS3PermissionFullControl,
    AWSS3PermissionWrite,
    AWSS3PermissionWriteAcp,
    AWSS3PermissionRead,
    AWSS3PermissionReadAcp,
};

typedef NS_ENUM(NSInteger, AWSS3Protocol) {
    AWSS3ProtocolUnknown,
    AWSS3ProtocolHTTP,
    AWSS3ProtocolHTTPS,
};

typedef NS_ENUM(NSInteger, AWSS3ServerSideEncryption) {
    AWSS3ServerSideEncryptionUnknown,
    AWSS3ServerSideEncryptionAES256,
};

typedef NS_ENUM(NSInteger, AWSS3StorageClass) {
    AWSS3StorageClassUnknown,
    AWSS3StorageClassStandard,
    AWSS3StorageClassReducedRedundancy,
};

typedef NS_ENUM(NSInteger, AWSS3TransitionStorageClass) {
    AWSS3TransitionStorageClassUnknown,
    AWSS3TransitionStorageClassGlacier,
};

typedef NS_ENUM(NSInteger, AWSS3Type) {
    AWSS3TypeUnknown,
    AWSS3TypeCanonicalUser,
    AWSS3TypeAmazonCustomerByEmail,
    AWSS3TypeGroup,
};

@class AWSS3AbortMultipartUploadRequest;
@class AWSS3AccessControlPolicy;
@class AWSS3Bucket;
@class AWSS3BucketLoggingStatus;
@class AWSS3CORSConfiguration;
@class AWSS3CORSRule;
@class AWSS3CommonPrefix;
@class AWSS3CompleteMultipartUploadOutput;
@class AWSS3CompleteMultipartUploadRequest;
@class AWSS3CompletedMultipartUpload;
@class AWSS3CompletedPart;
@class AWSS3Condition;
@class AWSS3CreateBucketConfiguration;
@class AWSS3CreateBucketOutput;
@class AWSS3CreateBucketRequest;
@class AWSS3CreateMultipartUploadOutput;
@class AWSS3CreateMultipartUploadRequest;
@class AWSS3Delete;
@class AWSS3DeleteBucketCorsRequest;
@class AWSS3DeleteBucketLifecycleRequest;
@class AWSS3DeleteBucketPolicyRequest;
@class AWSS3DeleteBucketRequest;
@class AWSS3DeleteBucketTaggingRequest;
@class AWSS3DeleteBucketWebsiteRequest;
@class AWSS3DeleteMarkerEntry;
@class AWSS3DeleteObjectOutput;
@class AWSS3DeleteObjectRequest;
@class AWSS3DeleteObjectsOutput;
@class AWSS3DeleteObjectsRequest;
@class AWSS3DeletedObject;
@class AWSS3Error;
@class AWSS3ErrorDocument;
@class AWSS3GetBucketAclOutput;
@class AWSS3GetBucketAclRequest;
@class AWSS3GetBucketCorsOutput;
@class AWSS3GetBucketCorsRequest;
@class AWSS3GetBucketLifecycleOutput;
@class AWSS3GetBucketLifecycleRequest;
@class AWSS3GetBucketLocationOutput;
@class AWSS3GetBucketLocationRequest;
@class AWSS3GetBucketLoggingOutput;
@class AWSS3GetBucketLoggingRequest;
@class AWSS3GetBucketNotificationOutput;
@class AWSS3GetBucketNotificationRequest;
@class AWSS3GetBucketPolicyOutput;
@class AWSS3GetBucketPolicyRequest;
@class AWSS3GetBucketRequestPaymentOutput;
@class AWSS3GetBucketRequestPaymentRequest;
@class AWSS3GetBucketTaggingOutput;
@class AWSS3GetBucketTaggingRequest;
@class AWSS3GetBucketVersioningOutput;
@class AWSS3GetBucketVersioningRequest;
@class AWSS3GetBucketWebsiteOutput;
@class AWSS3GetBucketWebsiteRequest;
@class AWSS3GetObjectAclOutput;
@class AWSS3GetObjectAclRequest;
@class AWSS3GetObjectOutput;
@class AWSS3GetObjectRequest;
@class AWSS3GetObjectTorrentOutput;
@class AWSS3GetObjectTorrentRequest;
@class AWSS3Grant;
@class AWSS3Grantee;
@class AWSS3HeadBucketRequest;
@class AWSS3HeadObjectOutput;
@class AWSS3HeadObjectRequest;
@class AWSS3IndexDocument;
@class AWSS3Initiator;
@class AWSS3LifecycleConfiguration;
@class AWSS3LifecycleExpiration;
@class AWSS3ListBucketsOutput;
@class AWSS3ListMultipartUploadsOutput;
@class AWSS3ListMultipartUploadsRequest;
@class AWSS3ListObjectVersionsOutput;
@class AWSS3ListObjectVersionsRequest;
@class AWSS3ListObjectsOutput;
@class AWSS3ListObjectsRequest;
@class AWSS3ListPartsOutput;
@class AWSS3ListPartsRequest;
@class AWSS3LoggingEnabled;
@class AWSS3MultipartUpload;
@class AWSS3NotificationConfiguration;
@class AWSS3Object;
@class AWSS3ObjectIdentifier;
@class AWSS3ObjectVersion;
@class AWSS3Owner;
@class AWSS3Part;
@class AWSS3PutBucketAclRequest;
@class AWSS3PutBucketCorsRequest;
@class AWSS3PutBucketLifecycleRequest;
@class AWSS3PutBucketLoggingRequest;
@class AWSS3PutBucketNotificationRequest;
@class AWSS3PutBucketPolicyRequest;
@class AWSS3PutBucketRequestPaymentRequest;
@class AWSS3PutBucketTaggingRequest;
@class AWSS3PutBucketVersioningRequest;
@class AWSS3PutBucketWebsiteRequest;
@class AWSS3PutObjectAclRequest;
@class AWSS3PutObjectOutput;
@class AWSS3PutObjectRequest;
@class AWSS3Redirect;
@class AWSS3RedirectAllRequestsTo;
@class AWSS3ReplicateObjectOutput;
@class AWSS3ReplicateObjectRequest;
@class AWSS3ReplicateObjectResult;
@class AWSS3ReplicatePartResult;
@class AWSS3RequestPaymentConfiguration;
@class AWSS3RestoreObjectRequest;
@class AWSS3RestoreRequest;
@class AWSS3RoutingRule;
@class AWSS3Rule;
@class AWSS3Tag;
@class AWSS3Tagging;
@class AWSS3TargetGrant;
@class AWSS3TopicConfiguration;
@class AWSS3Transition;
@class AWSS3UploadPartCopyOutput;
@class AWSS3UploadPartCopyRequest;
@class AWSS3UploadPartOutput;
@class AWSS3UploadPartRequest;
@class AWSS3VersioningConfiguration;
@class AWSS3WebsiteConfiguration;

@interface AWSS3AbortMultipartUploadRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3AccessControlPolicy : AZModel


/**
 * A list of grants.
 */
@property (nonatomic, strong) NSArray *grants;
@property (nonatomic, strong) AWSS3Owner *owner;

@end

@interface AWSS3Bucket : AZModel


/**
 * Date the bucket was created.
 */
@property (nonatomic, strong) NSDate *creationDate;

/**
 * The name of the bucket.
 */
@property (nonatomic, strong) NSString *name;

@end

@interface AWSS3BucketLoggingStatus : AZModel

@property (nonatomic, strong) AWSS3LoggingEnabled *loggingEnabled;

@end

@interface AWSS3CORSConfiguration : AZModel

@property (nonatomic, strong) NSArray *CORSRules;

@end

@interface AWSS3CORSRule : AZModel


/**
 * Specifies which headers are allowed in a pre-flight OPTIONS request.
 */
@property (nonatomic, strong) NSArray *allowedHeaders;

/**
 * Identifies HTTP methods that the domain/origin specified in the rule is allowed to execute.
 */
@property (nonatomic, strong) NSArray *allowedMethods;

/**
 * One or more origins you want customers to be able to access the bucket from.
 */
@property (nonatomic, strong) NSArray *allowedOrigins;

/**
 * One or more headers in the response that you want customers to be able to access from their applications (for example, from a JavaScript XMLHttpRequest object).
 */
@property (nonatomic, strong) NSArray *exposeHeaders;

/**
 * The time in seconds that your browser is to cache the preflight response for the specified resource.
 */
@property (nonatomic, strong) NSNumber *maxAgeSeconds;

@end

@interface AWSS3CommonPrefix : AZModel

@property (nonatomic, strong) NSString *prefix;

@end

@interface AWSS3CompleteMultipartUploadOutput : AZModel

@property (nonatomic, strong) NSString *bucket;

/**
 * Entity tag of the object.
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * If the object expiration is configured, this will contain the expiration date (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.
 */
@property (nonatomic, strong) NSDate *expiration;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *location;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * Version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3CompleteMultipartUploadRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) AWSS3CompletedMultipartUpload *multipartUpload;
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3CompletedMultipartUpload : AZModel

@property (nonatomic, strong) NSArray *parts;

@end

@interface AWSS3CompletedPart : AZModel


/**
 * Entity tag returned when the part was uploaded.
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * Part number that identifies the part.
 */
@property (nonatomic, strong) NSNumber *partNumber;

@end

@interface AWSS3Condition : AZModel


/**
 * The HTTP error code when the redirect is applied. In the event of an error, if the error code equals this value, then the specified redirect is applied. Required when parent element Condition is specified and sibling KeyPrefixEquals is not specified. If both are specified, then both must be true for the redirect to be applied.
 */
@property (nonatomic, strong) NSString *httpErrorCodeReturnedEquals;

/**
 * The object key name prefix when the redirect is applied. For example, to redirect requests for ExamplePage.html, the key prefix will be ExamplePage.html. To redirect request for all pages with the prefix docs/, the key prefix will be /docs, which identifies all objects in the docs/ folder. Required when the parent element Condition is specified and sibling HttpErrorCodeReturnedEquals is not specified. If both conditions are specified, both must be true for the redirect to be applied.
 */
@property (nonatomic, strong) NSString *keyPrefixEquals;

@end

@interface AWSS3CreateBucketConfiguration : AZModel


/**
 * Specifies the region where the bucket will be created.
 */
@property (nonatomic, assign) AWSS3BucketLocationConstraint locationConstraint;

@end

@interface AWSS3CreateBucketOutput : AZModel

@property (nonatomic, strong) NSString *location;

@end

@interface AWSS3CreateBucketRequest : AWSRequest


/**
 * The canned ACL to apply to the bucket.
 */
@property (nonatomic, assign) AWSS3BucketCannedACL ACL;
@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) AWSS3CreateBucketConfiguration *createBucketConfiguration;

/**
 * Allows grantee the read, write, read ACP, and write ACP permissions on the bucket.
 */
@property (nonatomic, strong) NSString *grantFullControl;

/**
 * Allows grantee to list the objects in the bucket.
 */
@property (nonatomic, strong) NSString *grantRead;

/**
 * Allows grantee to read the bucket ACL.
 */
@property (nonatomic, strong) NSString *grantReadACP;

/**
 * Allows grantee to create, overwrite, and delete any object in the bucket.
 */
@property (nonatomic, strong) NSString *grantWrite;

/**
 * Allows grantee to write the ACL for the applicable bucket.
 */
@property (nonatomic, strong) NSString *grantWriteACP;

@end

@interface AWSS3CreateMultipartUploadOutput : AZModel


/**
 * Name of the bucket to which the multipart upload was initiated.
 */
@property (nonatomic, strong) NSString *bucket;

/**
 * Object key for which the multipart upload was initiated.
 */
@property (nonatomic, strong) NSString *key;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * ID for the initiated multipart upload.
 */
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3CreateMultipartUploadRequest : AWSRequest


/**
 * The canned ACL to apply to the object.
 */
@property (nonatomic, assign) AWSS3ObjectCannedACL ACL;
@property (nonatomic, strong) NSString *bucket;

/**
 * Specifies caching behavior along the request/reply chain.
 */
@property (nonatomic, strong) NSString *cacheControl;

/**
 * Specifies presentational information for the object.
 */
@property (nonatomic, strong) NSString *contentDisposition;

/**
 * Specifies what content encodings have been applied to the object and thus what decoding mechanisms must be applied to obtain the media-type referenced by the Content-Type header field.
 */
@property (nonatomic, strong) NSString *contentEncoding;

/**
 * The language the content is in.
 */
@property (nonatomic, strong) NSString *contentLanguage;

/**
 * A standard MIME type describing the format of the object data.
 */
@property (nonatomic, strong) NSString *contentType;

/**
 * The date and time at which the object is no longer cacheable.
 */
@property (nonatomic, strong) NSDate *expires;

/**
 * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
 */
@property (nonatomic, strong) NSString *grantFullControl;

/**
 * Allows grantee to read the object data and its metadata.
 */
@property (nonatomic, strong) NSString *grantRead;

/**
 * Allows grantee to read the object ACL.
 */
@property (nonatomic, strong) NSString *grantReadACP;

/**
 * Allows grantee to write the ACL for the applicable object.
 */
@property (nonatomic, strong) NSString *grantWriteACP;
@property (nonatomic, strong) NSString *key;

/**
 * A map of metadata to store with the object in S3.
 */
@property (nonatomic, strong) NSDictionary *metadata;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * The type of storage to use for the object. Defaults to 'STANDARD'.
 */
@property (nonatomic, assign) AWSS3StorageClass storageClass;

/**
 * If the bucket is configured as a website, redirects requests for this object to another object in the same bucket or to an external URL. Amazon S3 stores the value of this header in the object metadata.
 */
@property (nonatomic, strong) NSString *websiteRedirectLocation;

@end

@interface AWSS3Delete : AZModel

@property (nonatomic, strong) NSArray *objects;

/**
 * Element to enable quiet mode for the request. When you add this element, you must set its value to true.
 */
@property (nonatomic, strong) NSNumber *quiet;

@end

@interface AWSS3DeleteBucketCorsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3DeleteBucketLifecycleRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3DeleteBucketPolicyRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3DeleteBucketRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3DeleteBucketTaggingRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3DeleteBucketWebsiteRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3DeleteMarkerEntry : AZModel


/**
 * Specifies whether the object is (true) or is not (false) the latest version of an object.
 */
@property (nonatomic, strong) NSNumber *isLatest;

/**
 * The object key.
 */
@property (nonatomic, strong) NSString *key;

/**
 * Date and time the object was last modified.
 */
@property (nonatomic, strong) NSDate *lastModified;
@property (nonatomic, strong) AWSS3Owner *owner;

/**
 * Version ID of an object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3DeleteObjectOutput : AZModel


/**
 * Specifies whether the versioned object that was permanently deleted was (true) or was not (false) a delete marker.
 */
@property (nonatomic, strong) NSNumber *deleteMarker;

/**
 * Returns the version ID of the delete marker created as a result of the DELETE operation.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3DeleteObjectRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;

/**
 * The concatenation of the authentication device's serial number, a space, and the value that is displayed on your authentication device.
 */
@property (nonatomic, strong) NSString *MFA;

/**
 * VersionId used to reference a specific version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3DeleteObjectsOutput : AZModel

@property (nonatomic, strong) NSArray *deleted;
@property (nonatomic, strong) NSArray *errors;

@end

@interface AWSS3DeleteObjectsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) AWSS3Delete *delete;

/**
 * The concatenation of the authentication device's serial number, a space, and the value that is displayed on your authentication device.
 */
@property (nonatomic, strong) NSString *MFA;

@end

@interface AWSS3DeletedObject : AZModel

@property (nonatomic, strong) NSNumber *deleteMarker;
@property (nonatomic, strong) NSString *deleteMarkerVersionId;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3Error : AZModel

@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3ErrorDocument : AZModel


/**
 * The object key name to use when a 4XX class error occurs.
 */
@property (nonatomic, strong) NSString *key;

@end

@interface AWSS3GetBucketAclOutput : AZModel


/**
 * A list of grants.
 */
@property (nonatomic, strong) NSArray *grants;
@property (nonatomic, strong) AWSS3Owner *owner;

@end

@interface AWSS3GetBucketAclRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketCorsOutput : AZModel

@property (nonatomic, strong) NSArray *CORSRules;

@end

@interface AWSS3GetBucketCorsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketLifecycleOutput : AZModel

@property (nonatomic, strong) NSArray *rules;

@end

@interface AWSS3GetBucketLifecycleRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketLocationOutput : AZModel

@property (nonatomic, assign) AWSS3BucketLocationConstraint locationConstraint;

@end

@interface AWSS3GetBucketLocationRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketLoggingOutput : AZModel

@property (nonatomic, strong) AWSS3LoggingEnabled *loggingEnabled;

@end

@interface AWSS3GetBucketLoggingRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketNotificationOutput : AZModel

@property (nonatomic, strong) AWSS3TopicConfiguration *topicConfiguration;

@end

@interface AWSS3GetBucketNotificationRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketPolicyOutput : AZModel


/**
 * The bucket policy as a JSON document.
 */
@property (nonatomic, strong) NSString *policy;

@end

@interface AWSS3GetBucketPolicyRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketRequestPaymentOutput : AZModel


/**
 * Specifies who pays for the download and request fees.
 */
@property (nonatomic, assign) AWSS3Payer payer;

@end

@interface AWSS3GetBucketRequestPaymentRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketTaggingOutput : AZModel

@property (nonatomic, strong) NSArray *tagSet;

@end

@interface AWSS3GetBucketTaggingRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketVersioningOutput : AZModel


/**
 * Specifies whether MFA delete is enabled in the bucket versioning configuration. This element is only returned if the bucket has been configured with MFA delete. If the bucket has never been so configured, this element is not returned.
 */
@property (nonatomic, assign) AWSS3MFADeleteStatus MFADelete;

/**
 * The versioning state of the bucket.
 */
@property (nonatomic, assign) AWSS3BucketVersioningStatus status;

@end

@interface AWSS3GetBucketVersioningRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetBucketWebsiteOutput : AZModel

@property (nonatomic, strong) AWSS3ErrorDocument *errorDocument;
@property (nonatomic, strong) AWSS3IndexDocument *indexDocument;
@property (nonatomic, strong) AWSS3RedirectAllRequestsTo *redirectAllRequestsTo;
@property (nonatomic, strong) NSArray *routingRules;

@end

@interface AWSS3GetBucketWebsiteRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3GetObjectAclOutput : AZModel


/**
 * A list of grants.
 */
@property (nonatomic, strong) NSArray *grants;
@property (nonatomic, strong) AWSS3Owner *owner;

@end

@interface AWSS3GetObjectAclRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;

/**
 * VersionId used to reference a specific version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3GetObjectOutput : AZModel

@property (nonatomic, strong) NSString *acceptRanges;

/**
 * Object data.
 */
@property (nonatomic, strong) id body;

/**
 * Specifies caching behavior along the request/reply chain.
 */
@property (nonatomic, strong) NSString *cacheControl;

/**
 * Specifies presentational information for the object.
 */
@property (nonatomic, strong) NSString *contentDisposition;

/**
 * Specifies what content encodings have been applied to the object and thus what decoding mechanisms must be applied to obtain the media-type referenced by the Content-Type header field.
 */
@property (nonatomic, strong) NSString *contentEncoding;

/**
 * The language the content is in.
 */
@property (nonatomic, strong) NSString *contentLanguage;

/**
 * Size of the body in bytes.
 */
@property (nonatomic, strong) NSNumber *contentLength;

/**
 * A standard MIME type describing the format of the object data.
 */
@property (nonatomic, strong) NSString *contentType;

/**
 * Specifies whether the object retrieved was (true) or was not (false) a Delete Marker. If false, this response header does not appear in the response.
 */
@property (nonatomic, strong) NSNumber *deleteMarker;

/**
 * An ETag is an opaque identifier assigned by a web server to a specific version of a resource found at a URL
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * If the object expiration is configured (see PUT Bucket lifecycle), the response includes this header. It includes the expiry-date and rule-id key value pairs providing object expiration information. The value of the rule-id is URL encoded.
 */
@property (nonatomic, strong) NSDate *expiration;

/**
 * The date and time at which the object is no longer cacheable.
 */
@property (nonatomic, strong) NSDate *expires;

/**
 * Last modified date of the object
 */
@property (nonatomic, strong) NSDate *lastModified;

/**
 * A map of metadata to store with the object in S3.
 */
@property (nonatomic, strong) NSDictionary *metadata;

/**
 * This is set to the number of metadata entries not returned in x-amz-meta headers. This can happen if you create metadata using an API like SOAP that supports more flexible metadata than the REST API. For example, using SOAP, you can create metadata whose values are not legal HTTP headers.
 */
@property (nonatomic, strong) NSNumber *missingMeta;

/**
 * Provides information about object restoration operation and expiration time of the restored object copy.
 */
@property (nonatomic, strong) NSString *restore;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * Version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

/**
 * If the bucket is configured as a website, redirects requests for this object to another object in the same bucket or to an external URL. Amazon S3 stores the value of this header in the object metadata.
 */
@property (nonatomic, strong) NSString *websiteRedirectLocation;

@end

@interface AWSS3GetObjectRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

/**
 * Return the object only if its entity tag (ETag) is the same as the one specified, otherwise return a 412 (precondition failed).
 */
@property (nonatomic, strong) NSString *ifMatch;

/**
 * Return the object only if it has been modified since the specified time, otherwise return a 304 (not modified).
 */
@property (nonatomic, strong) NSDate *ifModifiedSince;

/**
 * Return the object only if its entity tag (ETag) is different from the one specified, otherwise return a 304 (not modified).
 */
@property (nonatomic, strong) NSString *ifNoneMatch;

/**
 * Return the object only if it has not been modified since the specified time, otherwise return a 412 (precondition failed).
 */
@property (nonatomic, strong) NSDate *ifUnmodifiedSince;
@property (nonatomic, strong) NSString *key;

/**
 * Downloads the specified range bytes of an object. For more information about the HTTP Range header, go to http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35.
 */
@property (nonatomic, strong) NSString *range;

/**
 * Sets the Cache-Control header of the response.
 */
@property (nonatomic, strong) NSString *responseCacheControl;

/**
 * Sets the Content-Disposition header of the response
 */
@property (nonatomic, strong) NSString *responseContentDisposition;

/**
 * Sets the Content-Encoding header of the response.
 */
@property (nonatomic, strong) NSString *responseContentEncoding;

/**
 * Sets the Content-Language header of the response.
 */
@property (nonatomic, strong) NSString *responseContentLanguage;

/**
 * Sets the Content-Type header of the response.
 */
@property (nonatomic, strong) NSString *responseContentType;

/**
 * Sets the Expires header of the response.
 */
@property (nonatomic, strong) NSDate *responseExpires;

/**
 * VersionId used to reference a specific version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3GetObjectTorrentOutput : AZModel

@property (nonatomic, strong) id body;

@end

@interface AWSS3GetObjectTorrentRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;

@end

@interface AWSS3Grant : AZModel

@property (nonatomic, strong) AWSS3Grantee *grantee;

/**
 * Specifies the permission given to the grantee.
 */
@property (nonatomic, assign) AWSS3Permission permission;

@end

@interface AWSS3Grantee : AZModel


/**
 * Screen name of the grantee.
 */
@property (nonatomic, strong) NSString *displayName;

/**
 * Email address of the grantee.
 */
@property (nonatomic, strong) NSString *emailAddress;

/**
 * The canonical user ID of the grantee.
 */
@property (nonatomic, strong) NSString *ID;

/**
 * Type of grantee
 */
@property (nonatomic, assign) AWSS3Type type;

/**
 * URI of the grantee group.
 */
@property (nonatomic, strong) NSString *URI;

@end

@interface AWSS3HeadBucketRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

@end

@interface AWSS3HeadObjectOutput : AZModel

@property (nonatomic, strong) NSString *acceptRanges;

/**
 * Specifies caching behavior along the request/reply chain.
 */
@property (nonatomic, strong) NSString *cacheControl;

/**
 * Specifies presentational information for the object.
 */
@property (nonatomic, strong) NSString *contentDisposition;

/**
 * Specifies what content encodings have been applied to the object and thus what decoding mechanisms must be applied to obtain the media-type referenced by the Content-Type header field.
 */
@property (nonatomic, strong) NSString *contentEncoding;

/**
 * The language the content is in.
 */
@property (nonatomic, strong) NSString *contentLanguage;

/**
 * Size of the body in bytes.
 */
@property (nonatomic, strong) NSNumber *contentLength;

/**
 * A standard MIME type describing the format of the object data.
 */
@property (nonatomic, strong) NSString *contentType;

/**
 * Specifies whether the object retrieved was (true) or was not (false) a Delete Marker. If false, this response header does not appear in the response.
 */
@property (nonatomic, strong) NSNumber *deleteMarker;

/**
 * An ETag is an opaque identifier assigned by a web server to a specific version of a resource found at a URL
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * If the object expiration is configured (see PUT Bucket lifecycle), the response includes this header. It includes the expiry-date and rule-id key value pairs providing object expiration information. The value of the rule-id is URL encoded.
 */
@property (nonatomic, strong) NSDate *expiration;

/**
 * The date and time at which the object is no longer cacheable.
 */
@property (nonatomic, strong) NSDate *expires;

/**
 * Last modified date of the object
 */
@property (nonatomic, strong) NSDate *lastModified;

/**
 * A map of metadata to store with the object in S3.
 */
@property (nonatomic, strong) NSDictionary *metadata;

/**
 * This is set to the number of metadata entries not returned in x-amz-meta headers. This can happen if you create metadata using an API like SOAP that supports more flexible metadata than the REST API. For example, using SOAP, you can create metadata whose values are not legal HTTP headers.
 */
@property (nonatomic, strong) NSNumber *missingMeta;

/**
 * Provides information about object restoration operation and expiration time of the restored object copy.
 */
@property (nonatomic, strong) NSString *restore;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * Version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

/**
 * If the bucket is configured as a website, redirects requests for this object to another object in the same bucket or to an external URL. Amazon S3 stores the value of this header in the object metadata.
 */
@property (nonatomic, strong) NSString *websiteRedirectLocation;

@end

@interface AWSS3HeadObjectRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

/**
 * Return the object only if its entity tag (ETag) is the same as the one specified, otherwise return a 412 (precondition failed).
 */
@property (nonatomic, strong) NSString *ifMatch;

/**
 * Return the object only if it has been modified since the specified time, otherwise return a 304 (not modified).
 */
@property (nonatomic, strong) NSDate *ifModifiedSince;

/**
 * Return the object only if its entity tag (ETag) is different from the one specified, otherwise return a 304 (not modified).
 */
@property (nonatomic, strong) NSString *ifNoneMatch;

/**
 * Return the object only if it has not been modified since the specified time, otherwise return a 412 (precondition failed).
 */
@property (nonatomic, strong) NSDate *ifUnmodifiedSince;
@property (nonatomic, strong) NSString *key;

/**
 * Downloads the specified range bytes of an object. For more information about the HTTP Range header, go to http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.35.
 */
@property (nonatomic, strong) NSString *range;

/**
 * VersionId used to reference a specific version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3IndexDocument : AZModel


/**
 * A suffix that is appended to a request that is for a directory on the website endpoint (e.g. if the suffix is index.html and you make a request to samplebucket/images/ the data that is returned will be for the object with the key name images/index.html) The suffix must not be empty and must not include a slash character.
 */
@property (nonatomic, strong) NSString *suffix;

@end

@interface AWSS3Initiator : AZModel


/**
 * Name of the Principal.
 */
@property (nonatomic, strong) NSString *displayName;

/**
 * If the principal is an AWS account, it provides the Canonical User ID. If the principal is an IAM User, it provides a user ARN value.
 */
@property (nonatomic, strong) NSString *ID;

@end

@interface AWSS3LifecycleConfiguration : AZModel

@property (nonatomic, strong) NSArray *rules;

@end

@interface AWSS3LifecycleExpiration : AZModel


/**
 * Indicates at what date the object is to be moved or deleted. Should be in GMT ISO 8601 Format.
 */
@property (nonatomic, strong) NSDate *date;

/**
 * Indicates the lifetime, in days, of the objects that are subject to the rule. The value must be a non-zero positive integer.
 */
@property (nonatomic, strong) NSNumber *days;

@end

@interface AWSS3ListBucketsOutput : AZModel

@property (nonatomic, strong) NSArray *buckets;
@property (nonatomic, strong) AWSS3Owner *owner;

@end

@interface AWSS3ListMultipartUploadsOutput : AZModel


/**
 * Name of the bucket to which the multipart upload was initiated.
 */
@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSArray *commonPrefixes;

/**
 * Encoding type used by Amazon S3 to encode object keys in the response.
 */
@property (nonatomic, assign) AWSS3EncodingType encodingType;

/**
 * Indicates whether the returned list of multipart uploads is truncated. A value of true indicates that the list was truncated. The list can be truncated if the number of multipart uploads exceeds the limit allowed or specified by max uploads.
 */
@property (nonatomic, strong) NSNumber *isTruncated;

/**
 * The key at or after which the listing began.
 */
@property (nonatomic, strong) NSString *keyMarker;

/**
 * Maximum number of multipart uploads that could have been included in the response.
 */
@property (nonatomic, strong) NSNumber *maxUploads;

/**
 * When a list is truncated, this element specifies the value that should be used for the key-marker request parameter in a subsequent request.
 */
@property (nonatomic, strong) NSString *nextKeyMarker;

/**
 * When a list is truncated, this element specifies the value that should be used for the upload-id-marker request parameter in a subsequent request.
 */
@property (nonatomic, strong) NSString *nextUploadIdMarker;

/**
 * When a prefix is provided in the request, this field contains the specified prefix. The result contains only keys starting with the specified prefix.
 */
@property (nonatomic, strong) NSString *prefix;

/**
 * Upload ID after which listing began.
 */
@property (nonatomic, strong) NSString *uploadIdMarker;
@property (nonatomic, strong) NSArray *uploads;

@end

@interface AWSS3ListMultipartUploadsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

/**
 * Character you use to group keys.
 */
@property (nonatomic, strong) NSString *delimiter;

/**
 * Requests Amazon S3 to encode the object keys in the response and specifies the encoding method to use. An object key may contain any Unicode character; however, XML 1.0 parser cannot parse some characters, such as characters with an ASCII value from 0 to 10. For characters that are not supported in XML 1.0, you can add this parameter to request that Amazon S3 encode the keys in the response.
 */
@property (nonatomic, assign) AWSS3EncodingType encodingType;

/**
 * Together with upload-id-marker, this parameter specifies the multipart upload after which listing should begin.
 */
@property (nonatomic, strong) NSString *keyMarker;

/**
 * Sets the maximum number of multipart uploads, from 1 to 1,000, to return in the response body. 1,000 is the maximum number of uploads that can be returned in a response.
 */
@property (nonatomic, strong) NSNumber *maxUploads;

/**
 * Lists in-progress uploads only for those keys that begin with the specified prefix.
 */
@property (nonatomic, strong) NSString *prefix;

/**
 * Together with key-marker, specifies the multipart upload after which listing should begin. If key-marker is not specified, the upload-id-marker parameter is ignored.
 */
@property (nonatomic, strong) NSString *uploadIdMarker;

@end

@interface AWSS3ListObjectVersionsOutput : AZModel

@property (nonatomic, strong) NSArray *commonPrefixes;
@property (nonatomic, strong) NSArray *deleteMarkers;

/**
 * Encoding type used by Amazon S3 to encode object keys in the response.
 */
@property (nonatomic, assign) AWSS3EncodingType encodingType;

/**
 * A flag that indicates whether or not Amazon S3 returned all of the results that satisfied the search criteria. If your results were truncated, you can make a follow-up paginated request using the NextKeyMarker and NextVersionIdMarker response parameters as a starting place in another request to return the rest of the results.
 */
@property (nonatomic, strong) NSNumber *isTruncated;

/**
 * Marks the last Key returned in a truncated response.
 */
@property (nonatomic, strong) NSString *keyMarker;
@property (nonatomic, strong) NSNumber *maxKeys;
@property (nonatomic, strong) NSString *name;

/**
 * Use this value for the key marker request parameter in a subsequent request.
 */
@property (nonatomic, strong) NSString *nextKeyMarker;

/**
 * Use this value for the next version id marker parameter in a subsequent request.
 */
@property (nonatomic, strong) NSString *nextVersionIdMarker;
@property (nonatomic, strong) NSString *prefix;
@property (nonatomic, strong) NSString *versionIdMarker;
@property (nonatomic, strong) NSArray *versions;

@end

@interface AWSS3ListObjectVersionsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

/**
 * A delimiter is a character you use to group keys.
 */
@property (nonatomic, strong) NSString *delimiter;

/**
 * Requests Amazon S3 to encode the object keys in the response and specifies the encoding method to use. An object key may contain any Unicode character; however, XML 1.0 parser cannot parse some characters, such as characters with an ASCII value from 0 to 10. For characters that are not supported in XML 1.0, you can add this parameter to request that Amazon S3 encode the keys in the response.
 */
@property (nonatomic, assign) AWSS3EncodingType encodingType;

/**
 * Specifies the key to start with when listing objects in a bucket.
 */
@property (nonatomic, strong) NSString *keyMarker;

/**
 * Sets the maximum number of keys returned in the response. The response might contain fewer keys but will never contain more.
 */
@property (nonatomic, strong) NSNumber *maxKeys;

/**
 * Limits the response to keys that begin with the specified prefix.
 */
@property (nonatomic, strong) NSString *prefix;

/**
 * Specifies the object version you want to start listing from.
 */
@property (nonatomic, strong) NSString *versionIdMarker;

@end

@interface AWSS3ListObjectsOutput : AZModel

@property (nonatomic, strong) NSArray *commonPrefixes;
@property (nonatomic, strong) NSArray *contents;

/**
 * Encoding type used by Amazon S3 to encode object keys in the response.
 */
@property (nonatomic, assign) AWSS3EncodingType encodingType;

/**
 * A flag that indicates whether or not Amazon S3 returned all of the results that satisfied the search criteria.
 */
@property (nonatomic, strong) NSNumber *isTruncated;
@property (nonatomic, strong) NSString *marker;
@property (nonatomic, strong) NSNumber *maxKeys;
@property (nonatomic, strong) NSString *name;

/**
 * When response is truncated (the IsTruncated element value in the response is true), you can use the key name in this field as marker in the subsequent request to get next set of objects. Amazon S3 lists objects in alphabetical order Note: This element is returned only if you have delimiter request parameter specified. If response does not include the NextMaker and it is truncated, you can use the value of the last Key in the response as the marker in the subsequent request to get the next set of object keys.
 */
@property (nonatomic, strong) NSString *nextMarker;
@property (nonatomic, strong) NSString *prefix;

@end

@interface AWSS3ListObjectsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;

/**
 * A delimiter is a character you use to group keys.
 */
@property (nonatomic, strong) NSString *delimiter;

/**
 * Requests Amazon S3 to encode the object keys in the response and specifies the encoding method to use. An object key may contain any Unicode character; however, XML 1.0 parser cannot parse some characters, such as characters with an ASCII value from 0 to 10. For characters that are not supported in XML 1.0, you can add this parameter to request that Amazon S3 encode the keys in the response.
 */
@property (nonatomic, assign) AWSS3EncodingType encodingType;

/**
 * Specifies the key to start with when listing objects in a bucket.
 */
@property (nonatomic, strong) NSString *marker;

/**
 * Sets the maximum number of keys returned in the response. The response might contain fewer keys but will never contain more.
 */
@property (nonatomic, strong) NSNumber *maxKeys;

/**
 * Limits the response to keys that begin with the specified prefix.
 */
@property (nonatomic, strong) NSString *prefix;

@end

@interface AWSS3ListPartsOutput : AZModel


/**
 * Name of the bucket to which the multipart upload was initiated.
 */
@property (nonatomic, strong) NSString *bucket;

/**
 * Identifies who initiated the multipart upload.
 */
@property (nonatomic, strong) AWSS3Initiator *initiator;

/**
 * Indicates whether the returned list of parts is truncated.
 */
@property (nonatomic, strong) NSNumber *isTruncated;

/**
 * Object key for which the multipart upload was initiated.
 */
@property (nonatomic, strong) NSString *key;

/**
 * Maximum number of parts that were allowed in the response.
 */
@property (nonatomic, strong) NSNumber *maxParts;

/**
 * When a list is truncated, this element specifies the last part in the list, as well as the value to use for the part-number-marker request parameter in a subsequent request.
 */
@property (nonatomic, strong) NSNumber *nextPartNumberMarker;
@property (nonatomic, strong) AWSS3Owner *owner;

/**
 * Part number after which listing begins.
 */
@property (nonatomic, strong) NSNumber *partNumberMarker;
@property (nonatomic, strong) NSArray *parts;

/**
 * The class of storage used to store the object.
 */
@property (nonatomic, assign) AWSS3StorageClass storageClass;

/**
 * Upload ID identifying the multipart upload whose parts are being listed.
 */
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3ListPartsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;

/**
 * Sets the maximum number of parts to return.
 */
@property (nonatomic, strong) NSNumber *maxParts;

/**
 * Specifies the part after which listing should begin. Only parts with higher part numbers will be listed.
 */
@property (nonatomic, strong) NSNumber *partNumberMarker;

/**
 * Upload ID identifying the multipart upload whose parts are being listed.
 */
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3LoggingEnabled : AZModel


/**
 * Specifies the bucket where you want Amazon S3 to store server access logs. You can have your logs delivered to any bucket that you own, including the same bucket that is being logged. You can also configure multiple buckets to deliver their logs to the same target bucket. In this case you should choose a different TargetPrefix for each source bucket so that the delivered log files can be distinguished by key.
 */
@property (nonatomic, strong) NSString *targetBucket;
@property (nonatomic, strong) NSArray *targetGrants;

/**
 * This element lets you specify a prefix for the keys that the log files will be stored under.
 */
@property (nonatomic, strong) NSString *targetPrefix;

@end

@interface AWSS3MultipartUpload : AZModel


/**
 * Date and time at which the multipart upload was initiated.
 */
@property (nonatomic, strong) NSDate *initiated;

/**
 * Identifies who initiated the multipart upload.
 */
@property (nonatomic, strong) AWSS3Initiator *initiator;

/**
 * Key of the object for which the multipart upload was initiated.
 */
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) AWSS3Owner *owner;

/**
 * The class of storage used to store the object.
 */
@property (nonatomic, assign) AWSS3StorageClass storageClass;

/**
 * Upload ID that identifies the multipart upload.
 */
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3NotificationConfiguration : AZModel

@property (nonatomic, strong) AWSS3TopicConfiguration *topicConfiguration;

@end

@interface AWSS3Object : AZModel

@property (nonatomic, strong) NSString *ETag;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSDate *lastModified;
@property (nonatomic, strong) AWSS3Owner *owner;
@property (nonatomic, strong) NSNumber *size;

/**
 * The class of storage used to store the object.
 */
@property (nonatomic, assign) AWSS3ObjectStorageClass storageClass;

@end

@interface AWSS3ObjectIdentifier : AZModel


/**
 * Key name of the object to delete.
 */
@property (nonatomic, strong) NSString *key;

/**
 * VersionId for the specific version of the object to delete.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3ObjectVersion : AZModel

@property (nonatomic, strong) NSString *ETag;

/**
 * Specifies whether the object is (true) or is not (false) the latest version of an object.
 */
@property (nonatomic, strong) NSNumber *isLatest;

/**
 * The object key.
 */
@property (nonatomic, strong) NSString *key;

/**
 * Date and time the object was last modified.
 */
@property (nonatomic, strong) NSDate *lastModified;
@property (nonatomic, strong) AWSS3Owner *owner;

/**
 * Size in bytes of the object.
 */
@property (nonatomic, strong) NSNumber *size;

/**
 * The class of storage used to store the object.
 */
@property (nonatomic, assign) AWSS3ObjectVersionStorageClass storageClass;

/**
 * Version ID of an object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3Owner : AZModel

@property (nonatomic, strong) NSString *displayName;
@property (nonatomic, strong) NSString *ID;

@end

@interface AWSS3Part : AZModel


/**
 * Entity tag returned when the part was uploaded.
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * Date and time at which the part was uploaded.
 */
@property (nonatomic, strong) NSDate *lastModified;

/**
 * Part number identifying the part.
 */
@property (nonatomic, strong) NSNumber *partNumber;

/**
 * Size of the uploaded part data.
 */
@property (nonatomic, strong) NSNumber *size;

@end

@interface AWSS3PutBucketAclRequest : AWSRequest


/**
 * The canned ACL to apply to the bucket.
 */
@property (nonatomic, assign) AWSS3BucketCannedACL ACL;
@property (nonatomic, strong) AWSS3AccessControlPolicy *accessControlPolicy;
@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;

/**
 * Allows grantee the read, write, read ACP, and write ACP permissions on the bucket.
 */
@property (nonatomic, strong) NSString *grantFullControl;

/**
 * Allows grantee to list the objects in the bucket.
 */
@property (nonatomic, strong) NSString *grantRead;

/**
 * Allows grantee to read the bucket ACL.
 */
@property (nonatomic, strong) NSString *grantReadACP;

/**
 * Allows grantee to create, overwrite, and delete any object in the bucket.
 */
@property (nonatomic, strong) NSString *grantWrite;

/**
 * Allows grantee to write the ACL for the applicable bucket.
 */
@property (nonatomic, strong) NSString *grantWriteACP;

@end

@interface AWSS3PutBucketCorsRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) AWSS3CORSConfiguration *CORSConfiguration;
@property (nonatomic, strong) NSString *contentMD5;

@end

@interface AWSS3PutBucketLifecycleRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;
@property (nonatomic, strong) AWSS3LifecycleConfiguration *lifecycleConfiguration;

@end

@interface AWSS3PutBucketLoggingRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) AWSS3BucketLoggingStatus *bucketLoggingStatus;
@property (nonatomic, strong) NSString *contentMD5;

@end

@interface AWSS3PutBucketNotificationRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;
@property (nonatomic, strong) AWSS3NotificationConfiguration *notificationConfiguration;

@end

@interface AWSS3PutBucketPolicyRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;

/**
 * The bucket policy as a JSON document.
 */
@property (nonatomic, strong) NSString *policy;

@end

@interface AWSS3PutBucketRequestPaymentRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;
@property (nonatomic, strong) AWSS3RequestPaymentConfiguration *requestPaymentConfiguration;

@end

@interface AWSS3PutBucketTaggingRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;
@property (nonatomic, strong) AWSS3Tagging *tagging;

@end

@interface AWSS3PutBucketVersioningRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;

/**
 * The concatenation of the authentication device's serial number, a space, and the value that is displayed on your authentication device.
 */
@property (nonatomic, strong) NSString *MFA;
@property (nonatomic, strong) AWSS3VersioningConfiguration *versioningConfiguration;

@end

@interface AWSS3PutBucketWebsiteRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;
@property (nonatomic, strong) AWSS3WebsiteConfiguration *websiteConfiguration;

@end

@interface AWSS3PutObjectAclRequest : AWSRequest


/**
 * The canned ACL to apply to the object.
 */
@property (nonatomic, assign) AWSS3ObjectCannedACL ACL;
@property (nonatomic, strong) AWSS3AccessControlPolicy *accessControlPolicy;
@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *contentMD5;

/**
 * Allows grantee the read, write, read ACP, and write ACP permissions on the bucket.
 */
@property (nonatomic, strong) NSString *grantFullControl;

/**
 * Allows grantee to list the objects in the bucket.
 */
@property (nonatomic, strong) NSString *grantRead;

/**
 * Allows grantee to read the bucket ACL.
 */
@property (nonatomic, strong) NSString *grantReadACP;

/**
 * Allows grantee to create, overwrite, and delete any object in the bucket.
 */
@property (nonatomic, strong) NSString *grantWrite;

/**
 * Allows grantee to write the ACL for the applicable bucket.
 */
@property (nonatomic, strong) NSString *grantWriteACP;
@property (nonatomic, strong) NSString *key;

@end

@interface AWSS3PutObjectOutput : AZModel


/**
 * Entity tag for the uploaded object.
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * If the object expiration is configured, this will contain the expiration date (expiry-date) and rule ID (rule-id). The value of rule-id is URL encoded.
 */
@property (nonatomic, strong) NSDate *expiration;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * Version of the object.
 */
@property (nonatomic, strong) NSString *versionId;

@end

@interface AWSS3PutObjectRequest : AWSRequest


/**
 * The canned ACL to apply to the object.
 */
@property (nonatomic, assign) AWSS3ObjectCannedACL ACL;
@property (nonatomic, strong) id body;
@property (nonatomic, strong) NSString *bucket;

/**
 * Specifies caching behavior along the request/reply chain.
 */
@property (nonatomic, strong) NSString *cacheControl;

/**
 * Specifies presentational information for the object.
 */
@property (nonatomic, strong) NSString *contentDisposition;

/**
 * Specifies what content encodings have been applied to the object and thus what decoding mechanisms must be applied to obtain the media-type referenced by the Content-Type header field.
 */
@property (nonatomic, strong) NSString *contentEncoding;

/**
 * The language the content is in.
 */
@property (nonatomic, strong) NSString *contentLanguage;

/**
 * Size of the body in bytes. This parameter is useful when the size of the body cannot be determined automatically.
 */
@property (nonatomic, strong) NSNumber *contentLength;
@property (nonatomic, strong) NSString *contentMD5;

/**
 * A standard MIME type describing the format of the object data.
 */
@property (nonatomic, strong) NSString *contentType;

/**
 * The date and time at which the object is no longer cacheable.
 */
@property (nonatomic, strong) NSDate *expires;

/**
 * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
 */
@property (nonatomic, strong) NSString *grantFullControl;

/**
 * Allows grantee to read the object data and its metadata.
 */
@property (nonatomic, strong) NSString *grantRead;

/**
 * Allows grantee to read the object ACL.
 */
@property (nonatomic, strong) NSString *grantReadACP;

/**
 * Allows grantee to write the ACL for the applicable object.
 */
@property (nonatomic, strong) NSString *grantWriteACP;
@property (nonatomic, strong) NSString *key;

/**
 * A map of metadata to store with the object in S3.
 */
@property (nonatomic, strong) NSDictionary *metadata;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * The type of storage to use for the object. Defaults to 'STANDARD'.
 */
@property (nonatomic, assign) AWSS3StorageClass storageClass;

/**
 * If the bucket is configured as a website, redirects requests for this object to another object in the same bucket or to an external URL. Amazon S3 stores the value of this header in the object metadata.
 */
@property (nonatomic, strong) NSString *websiteRedirectLocation;

@end

@interface AWSS3Redirect : AZModel


/**
 * The host name to use in the redirect request.
 */
@property (nonatomic, strong) NSString *hostName;

/**
 * The HTTP redirect code to use on the response. Not required if one of the siblings is present.
 */
@property (nonatomic, strong) NSString *httpRedirectCode;

/**
 * Protocol to use (http, https) when redirecting requests. The default is the protocol that is used in the original request.
 */
@property (nonatomic, assign) AWSS3Protocol protocol;

/**
 * The object key prefix to use in the redirect request. For example, to redirect requests for all pages with prefix docs/ (objects in the docs/ folder) to documents/, you can set a condition block with KeyPrefixEquals set to docs/ and in the Redirect set ReplaceKeyPrefixWith to /documents. Not required if one of the siblings is present. Can be present only if ReplaceKeyWith is not provided.
 */
@property (nonatomic, strong) NSString *replaceKeyPrefixWith;

/**
 * The specific object key to use in the redirect request. For example, redirect request to error.html. Not required if one of the sibling is present. Can be present only if ReplaceKeyPrefixWith is not provided.
 */
@property (nonatomic, strong) NSString *replaceKeyWith;

@end

@interface AWSS3RedirectAllRequestsTo : AZModel


/**
 * Name of the host where requests will be redirected.
 */
@property (nonatomic, strong) NSString *hostName;

/**
 * Protocol to use (http, https) when redirecting requests. The default is the protocol that is used in the original request.
 */
@property (nonatomic, assign) AWSS3Protocol protocol;

@end

@interface AWSS3ReplicateObjectOutput : AZModel


/**
 * If the object expiration is configured, the response includes this header.
 */
@property (nonatomic, strong) NSDate *expiration;
@property (nonatomic, strong) AWSS3ReplicateObjectResult *replicateObjectResult;
@property (nonatomic, strong) NSString *replicateSourceVersionId;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

@end

@interface AWSS3ReplicateObjectRequest : AWSRequest


/**
 * The canned ACL to apply to the object.
 */
@property (nonatomic, assign) AWSS3ObjectCannedACL ACL;
@property (nonatomic, strong) NSString *bucket;

/**
 * Specifies caching behavior along the request/reply chain.
 */
@property (nonatomic, strong) NSString *cacheControl;

/**
 * Specifies presentational information for the object.
 */
@property (nonatomic, strong) NSString *contentDisposition;

/**
 * Specifies what content encodings have been applied to the object and thus what decoding mechanisms must be applied to obtain the media-type referenced by the Content-Type header field.
 */
@property (nonatomic, strong) NSString *contentEncoding;

/**
 * The language the content is in.
 */
@property (nonatomic, strong) NSString *contentLanguage;

/**
 * A standard MIME type describing the format of the object data.
 */
@property (nonatomic, strong) NSString *contentType;

/**
 * The date and time at which the object is no longer cacheable.
 */
@property (nonatomic, strong) NSDate *expires;

/**
 * Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the object.
 */
@property (nonatomic, strong) NSString *grantFullControl;

/**
 * Allows grantee to read the object data and its metadata.
 */
@property (nonatomic, strong) NSString *grantRead;

/**
 * Allows grantee to read the object ACL.
 */
@property (nonatomic, strong) NSString *grantReadACP;

/**
 * Allows grantee to write the ACL for the applicable object.
 */
@property (nonatomic, strong) NSString *grantWriteACP;
@property (nonatomic, strong) NSString *key;

/**
 * A map of metadata to store with the object in S3.
 */
@property (nonatomic, strong) NSDictionary *metadata;

/**
 * Specifies whether the metadata is copied from the source object or replaced with metadata provided in the request.
 */
@property (nonatomic, assign) AWSS3MetadataDirective metadataDirective;
@property (nonatomic, strong) NSString *replicateSource;
@property (nonatomic, strong) NSString *replicateSourceIfMatch;
@property (nonatomic, strong) NSDate *replicateSourceIfModifiedSince;
@property (nonatomic, strong) NSString *replicateSourceIfNoneMatch;
@property (nonatomic, strong) NSDate *replicateSourceIfUnmodifiedSince;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

/**
 * The type of storage to use for the object. Defaults to 'STANDARD'.
 */
@property (nonatomic, assign) AWSS3StorageClass storageClass;

/**
 * If the bucket is configured as a website, redirects requests for this object to another object in the same bucket or to an external URL. Amazon S3 stores the value of this header in the object metadata.
 */
@property (nonatomic, strong) NSString *websiteRedirectLocation;

@end

@interface AWSS3ReplicateObjectResult : AZModel

@property (nonatomic, strong) NSString *ETag;
@property (nonatomic, strong) NSDate *lastModified;

@end

@interface AWSS3ReplicatePartResult : AZModel


/**
 * Entity tag of the object.
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * Date and time at which the object was uploaded.
 */
@property (nonatomic, strong) NSDate *lastModified;

@end

@interface AWSS3RequestPaymentConfiguration : AZModel


/**
 * Specifies who pays for the download and request fees.
 */
@property (nonatomic, assign) AWSS3Payer payer;

@end

@interface AWSS3RestoreObjectRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) AWSS3RestoreRequest *restoreRequest;

@end

@interface AWSS3RestoreRequest : AZModel


/**
 * Lifetime of the active copy in days
 */
@property (nonatomic, strong) NSNumber *days;

@end

@interface AWSS3RoutingRule : AZModel


/**
 * A container for describing a condition that must be met for the specified redirect to apply. For example, 1. If request is for pages in the /docs folder, redirect to the /documents folder. 2. If request results in HTTP error 4xx, redirect request to another host where you might process the error.
 */
@property (nonatomic, strong) AWSS3Condition *condition;

/**
 * Container for redirect information. You can redirect requests to another host, to another page, or with another protocol. In the event of an error, you can can specify a different error code to return.
 */
@property (nonatomic, strong) AWSS3Redirect *redirect;

@end

@interface AWSS3Rule : AZModel

@property (nonatomic, strong) AWSS3LifecycleExpiration *expiration;

/**
 * Unique identifier for the rule. The value cannot be longer than 255 characters.
 */
@property (nonatomic, strong) NSString *ID;

/**
 * Prefix identifying one or more objects to which the rule applies.
 */
@property (nonatomic, strong) NSString *prefix;

/**
 * If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is not currently being applied.
 */
@property (nonatomic, assign) AWSS3ExpirationStatus status;
@property (nonatomic, strong) AWSS3Transition *transition;

@end

@interface AWSS3Tag : AZModel


/**
 * Name of the tag.
 */
@property (nonatomic, strong) NSString *key;

/**
 * Value of the tag.
 */
@property (nonatomic, strong) NSString *value;

@end

@interface AWSS3Tagging : AZModel

@property (nonatomic, strong) NSArray *tagSet;

@end

@interface AWSS3TargetGrant : AZModel

@property (nonatomic, strong) AWSS3Grantee *grantee;

/**
 * Logging permissions assigned to the Grantee for the bucket.
 */
@property (nonatomic, assign) AWSS3BucketLogsPermission permission;

@end

@interface AWSS3TopicConfiguration : AZModel


/**
 * Bucket event for which to send notifications.
 */
@property (nonatomic, assign) AWSS3Event event;

/**
 * Amazon SNS topic to which Amazon S3 will publish a message to report the specified events for the bucket.
 */
@property (nonatomic, strong) NSString *topic;

@end

@interface AWSS3Transition : AZModel


/**
 * Indicates at what date the object is to be moved or deleted. Should be in GMT ISO 8601 Format.
 */
@property (nonatomic, strong) NSDate *date;

/**
 * Indicates the lifetime, in days, of the objects that are subject to the rule. The value must be a non-zero positive integer.
 */
@property (nonatomic, strong) NSNumber *days;

/**
 * The class of storage used to store the object.
 */
@property (nonatomic, assign) AWSS3TransitionStorageClass storageClass;

@end

@interface AWSS3UploadPartCopyOutput : AZModel

@property (nonatomic, strong) AWSS3ReplicatePartResult *replicatePartResult;
@property (nonatomic, strong) NSString *replicateSourceVersionId;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

@end

@interface AWSS3UploadPartCopyRequest : AWSRequest

@property (nonatomic, strong) NSString *bucket;
@property (nonatomic, strong) NSString *key;

/**
 * Part number of part being copied.
 */
@property (nonatomic, strong) NSNumber *partNumber;
@property (nonatomic, strong) NSString *replicateSource;
@property (nonatomic, strong) NSString *replicateSourceIfMatch;
@property (nonatomic, strong) NSDate *replicateSourceIfModifiedSince;
@property (nonatomic, strong) NSString *replicateSourceIfNoneMatch;
@property (nonatomic, strong) NSDate *replicateSourceIfUnmodifiedSince;
@property (nonatomic, strong) NSString *replicateSourceRange;

/**
 * Upload ID identifying the multipart upload whose part is being copied.
 */
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3UploadPartOutput : AZModel


/**
 * Entity tag for the uploaded object.
 */
@property (nonatomic, strong) NSString *ETag;

/**
 * The Server-side encryption algorithm used when storing this object in S3.
 */
@property (nonatomic, assign) AWSS3ServerSideEncryption serverSideEncryption;

@end

@interface AWSS3UploadPartRequest : AWSRequest

@property (nonatomic, strong) id body;
@property (nonatomic, strong) NSString *bucket;

/**
 * Size of the body in bytes. This parameter is useful when the size of the body cannot be determined automatically.
 */
@property (nonatomic, strong) NSNumber *contentLength;
@property (nonatomic, strong) NSString *contentMD5;
@property (nonatomic, strong) NSString *key;

/**
 * Part number of part being uploaded.
 */
@property (nonatomic, strong) NSNumber *partNumber;

/**
 * Upload ID identifying the multipart upload whose part is being uploaded.
 */
@property (nonatomic, strong) NSString *uploadId;

@end

@interface AWSS3VersioningConfiguration : AZModel


/**
 * Specifies whether MFA delete is enabled in the bucket versioning configuration. This element is only returned if the bucket has been configured with MFA delete. If the bucket has never been so configured, this element is not returned.
 */
@property (nonatomic, assign) AWSS3MFADelete MFADelete;

/**
 * The versioning state of the bucket.
 */
@property (nonatomic, assign) AWSS3BucketVersioningStatus status;

@end

@interface AWSS3WebsiteConfiguration : AZModel

@property (nonatomic, strong) AWSS3ErrorDocument *errorDocument;
@property (nonatomic, strong) AWSS3IndexDocument *indexDocument;
@property (nonatomic, strong) AWSS3RedirectAllRequestsTo *redirectAllRequestsTo;
@property (nonatomic, strong) NSArray *routingRules;

@end
