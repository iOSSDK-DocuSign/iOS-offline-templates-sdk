typedef void(^DSMVoidBlock)();
typedef void(^DSMErrorBlock)(NSError *error);
typedef void(^DSMBOOLBlock)(NSNumber *result, NSError *error);

// Envelope Synchronization
@class DSMCDEnvelopeDefinition;
@class DSMEnvelopeDefinition;

typedef void(^DSMEnvelopeBlock)(DSMCDEnvelopeDefinition *envelope, NSError *error);

typedef void(^DSMRecipientsRoutingOrderAndTagsBlock)(NSSet *envelopeDSRecipientIDs, NSSet <NSString *> *currentUserFreeFormRecipientIDs, NSNumber *currentRoutingOrder, NSSet *supportedDSTagIDs, NSSet *unsupportedDSTagIDs, NSError *error);

// Envelope update
typedef void(^DSMUpdateEnvelopeBlock)(NSError *error, DSMEnvelopeDefinition *envelope);
